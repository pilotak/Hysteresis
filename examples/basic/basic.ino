#include "Hysteresis.h"

// Added samples (and result) will be initialised as uint8_t, hysteresis step 10
Hysteresis <uint8_t> hysteresis(10);

void setup() {
	Serial.begin(9600);

	// or you can change step here
	// hysteresis.step(10);

	Serial.print("result: 11 = ");
	Serial.println(hysteresis.add(11)); // insert new number and get result

	Serial.print("result: 12 = ");
	Serial.println(hysteresis.add(12)); // insert new number and get result

	Serial.print("result: 13 = ");
	Serial.println(hysteresis.add(13)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 17 = ");
	Serial.println(hysteresis.add(17)); // insert new number and get result

	Serial.print("result: 18 = ");
	Serial.println(hysteresis.add(18)); // insert new number and get result

	Serial.print("result: 19 = ");
	Serial.println(hysteresis.add(19)); // insert new number and get result

	Serial.print("result: 20 = ");
	Serial.println(hysteresis.add(20)); // insert new number and get result

	Serial.print("result: 21 = ");
	Serial.println(hysteresis.add(21)); // insert new number and get result

	Serial.print("result: 20 = ");
	Serial.println(hysteresis.add(20)); // insert new number and get result

	Serial.print("result: 19 = ");
	Serial.println(hysteresis.add(19)); // insert new number and get result

	Serial.print("result: 18 = ");
	Serial.println(hysteresis.add(18)); // insert new number and get result

	Serial.print("result: 17 = ");
	Serial.println(hysteresis.add(17)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 13 = ");
	Serial.println(hysteresis.add(13)); // insert new number and get result

	Serial.print("result: 12 = ");
	Serial.println(hysteresis.add(12)); // insert new number and get result

	Serial.print("result: 11 = ");
	Serial.println(hysteresis.add(11)); // insert new number and get result

	Serial.print("result: 12 = ");
	Serial.println(hysteresis.add(12)); // insert new number and get result

	Serial.print("result: 13 = ");
	Serial.println(hysteresis.add(13)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 17 = ");
	Serial.println(hysteresis.add(17)); // insert new number and get result

	Serial.print("result: 18 = ");
	Serial.println(hysteresis.add(18)); // insert new number and get result

	Serial.print("result: 11 = ");
	Serial.println(hysteresis.add(17)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 14 = ");
	Serial.println(hysteresis.add(14)); // insert new number and get result

	Serial.print("result: 15 = ");
	Serial.println(hysteresis.add(15)); // insert new number and get result

	Serial.print("result: 16 = ");
	Serial.println(hysteresis.add(16)); // insert new number and get result

	Serial.print("result: ");
	Serial.println(hysteresis.get());   // get last result, without adding a newone


	while (1);
}