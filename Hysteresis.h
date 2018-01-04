#ifndef HYSTERESIS_H
#define HYSTERESIS_H

#include "mbed.h"

template <class T>
class Hysteresis {
 public:
  Hysteresis(uint16_t step);
  virtual ~Hysteresis(void);

  T add(T value);
  T get();
  void set(T step);

 private:
  T _prev;
  T _step;
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
void Hysteresis<T>::set(T step) {
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
#endif
