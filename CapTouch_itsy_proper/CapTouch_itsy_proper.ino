#include <CapacitiveSensor.h>

CapacitiveSensor cs0 = CapacitiveSensor(A0, A3);

long previousMeasure;

void setup() {
  Serial.begin(9600);
  previousMeasure = 0;
}

void loop() {
  long treshold = 20;
  long start = millis();
  long total =  cs0.capacitiveSensor(30);
  long jump = total - previousMeasure;
  

  if( jump > treshold || jump < -treshold ) {
    previousMeasure = total;
    Serial.println(total);
  }

  // Serial.print(millis() - start);        // check on performance in milliseconds
  // Serial.print("\t");                    // tab character for debug window spacing

  // Serial.print(total);                  // print sensor output 1
  // Serial.print("\n");

  delay(250);                             // arbitrary delay to limit data to serial port 
}

/*
#include <ADCTouch.h>

int ref0, ref1;     //reference values to remove offset

void setup()
{
    // No pins to setup, pins can still be used regularly, although it will affect readings

    Serial.begin(9600);

    ref0 = ADCTouch.read(A0, 500);    //create reference values to
    ref1 = ADCTouch.read(A1, 500);    //account for the capacitance of the pad
}

void loop()
{
    int value0 = ADCTouch.read(A0);   //no second parameter
    int value1 = ADCTouch.read(A1);   //   --> 100 samples

    value0 -= ref0;       //remove offset
    value1 -= ref1;

    // Serial.print(value0 > 40);    //send (boolean) pressed or not pressed
    // Serial.print("\t");           //use if(value > threshold) to get the state of a button

    // Serial.print(value1 > 40);
    // Serial.print("\t\t");

    Serial.print(value0);             //send actual readingc
    // Serial.print("\t");

    // Serial.println(value1);
    delay(100);
}

ADCTouchClass ADCTouch;

*/