/*
MIT License

Copyright (c) 2018 Pavel Slama

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef HYSTERESIS_H
#define HYSTERESIS_H

#if defined(__MBED__)
  #include "mbed.h"
#endif

template <class T>
class Hysteresis {
 public:
  Hysteresis(uint16_t step = 10);
  virtual ~Hysteresis(void);

  T add(T value);
  T get();
  void set(uint16_t step);
  void prev(T value);

 private:
  T _prev;
  uint16_t _step;
};

template <class T>
Hysteresis<T>::Hysteresis(uint16_t step):
  _prev(0),
  _step(step) {
}

template <class T>
Hysteresis<T>::~Hysteresis(void) {
}

template <class T>
T Hysteresis<T>::get() {
  return _prev;
}

template <class T>
void Hysteresis<T>::set(uint16_t step) {
  _prev = 0;
  _step = step;
}

template <class T>
T Hysteresis<T>::add(T value) {
  T res = _prev;
  int32_t value_scaled =  ((value << 8) / _step);
  uint8_t bits = ((value_scaled) >> 6) & 0b11;

  if (value > _prev) {
    if (bits == 0b11) {
      res = ((value_scaled + 128) >> 8) * _step; // round up

    } else {
      res = ((value_scaled) >> 8) * _step; // round down
    }

  } else if (value < _prev) {
    if (bits == 0b00) {
      res = ((value_scaled) >> 8) * _step; // round down

    } else {
      res = ((value_scaled + 256) >> 8) * _step; // round up
    }
  }

  _prev = res;
  return res;
}

template <class T>
void Hysteresis<T>::prev(T value) {
  _prev = value;
}
#endif
