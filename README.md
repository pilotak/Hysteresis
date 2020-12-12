# Hysteresis
[![build](https://github.com/pilotak/Hysteresis/workflows/build/badge.svg)](https://github.com/pilotak/Hysteresis/actions) 
[![Framework Badge Arduino](https://img.shields.io/badge/framework-arduino-00979C.svg)](https://arduino.cc)
[![Framework Badge mbed](https://img.shields.io/badge/framework-mbed-008fbe.svg)](https://os.mbed.com/)

Fixed point hysteresis filter for Arduino & Mbed

**_Type_** type can be:
 - `uint8_t` or `int8_t`
 - `uint16_t` or `int16_t`
 - `uint32_t` or `int32_t` but only up to 23 bits

## Arduino example
Please see `examples` folder

## Mbed example
```cpp
#include "mbed.h"
#include "Hysteresis.h"

// Added samples (and result) will be initialised as uint8_t, hysteresis step 10
Hysteresis <uint8_t> hysteresis(10);

int main() {
    printf("result: 11 = %u\n", hysteresis.add(11)); // insert new number and get result
    printf("result: 12 = %u\n", hysteresis.add(12)); // insert new number and get result
    printf("result: 13 = %u\n", hysteresis.add(13)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 17 = %u\n", hysteresis.add(17)); // insert new number and get result
    printf("result: 18 = %u\n", hysteresis.add(18)); // insert new number and get result
    printf("result: 19 = %u\n", hysteresis.add(19)); // insert new number and get result
    printf("result: 20 = %u\n", hysteresis.add(20)); // insert new number and get result
    printf("result: 21 = %u\n", hysteresis.add(21)); // insert new number and get result
    printf("result: 20 = %u\n", hysteresis.add(20)); // insert new number and get result
    printf("result: 19 = %u\n", hysteresis.add(19)); // insert new number and get result
    printf("result: 18 = %u\n", hysteresis.add(18)); // insert new number and get result
    printf("result: 17 = %u\n", hysteresis.add(17)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 13 = %u\n", hysteresis.add(13)); // insert new number and get result
    printf("result: 12 = %u\n", hysteresis.add(12)); // insert new number and get result
    printf("result: 11 = %u\n", hysteresis.add(11)); // insert new number and get result
    printf("result: 12 = %u\n", hysteresis.add(12)); // insert new number and get result
    printf("result: 13 = %u\n", hysteresis.add(13)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 17 = %u\n", hysteresis.add(17)); // insert new number and get result
    printf("result: 18 = %u\n", hysteresis.add(18)); // insert new number and get result
    printf("result: 11 = %u\n", hysteresis.add(17)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 14 = %u\n", hysteresis.add(14)); // insert new number and get result
    printf("result: 15 = %u\n", hysteresis.add(15)); // insert new number and get result
    printf("result: 16 = %u\n", hysteresis.add(16)); // insert new number and get result
    printf("result: %u\n", hysteresis.get());   // get last result, without adding a newone

    return 0;
}
```

## Output
> result: 11 = 10
> 
> result: 12 = 10
> 
> result: 13 = 10
> 
> result: 14 = 10
> 
> result: 15 = 10
> 
> result: 16 = 10
> 
> result: 17 = 10
> 
> result: 18 = 20
> 
> result: 19 = 20
> 
> result: 20 = 20
> 
> result: 21 = 20
> 
> result: 20 = 20
> 
> result: 19 = 20
> 
> result: 18 = 20
> 
> result: 17 = 20
> 
> result: 16 = 20
> 
> result: 15 = 20
> 
> result: 14 = 20
> 
> result: 13 = 20
> 
> result: 12 = 10
> 
> result: 11 = 10
> 
> result: 12 = 10
> 
> result: 13 = 10
> 
> result: 14 = 10
> 
> result: 15 = 10
> 
> result: 16 = 10
> 
> result: 15 = 10
> 
> result: 14 = 10
> 
> result: 15 = 10
> 
> result: 16 = 10
> 
> result: 15 = 10
> 
> result: 14 = 10
> 
> result: 15 = 10
> 
> result: 16 = 10
> 
> result: 17 = 10
> 
> result: 18 = 20
> 
> result: 17 = 20
> 
> result: 16 = 20
> 
> result: 15 = 20
> 
> result: 14 = 20
> 
> result: 15 = 20
> 
> result: 16 = 20
> 
> result: 15 = 20
> 
> result: 14 = 20
> 
> result: 15 = 20
> 
> result: 20
