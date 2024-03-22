
void setup() {
  // start serial port at 9600 bps and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }
}
//--------------------------------------------------------------------------------

void loop()
{
#ifdef __MK66FX1M0__
  Serial.print("Compiled as MK66FX1M0 which is a Teensy");
#endif

#ifdef Teensy41
  Serial.print("CustomFlag: Teensy4.1");
#endif

#ifdef Teensy36
  Serial.print("CustomFlag: Teensy3.6");
#endif

#ifdef Teensy35
  Serial.print("CustomFlag: Teensy3.5");
#endif

#ifdef EFG
  Serial.print("CustomFlag: EFG");
#endif

#ifdef abc
  Serial.print("CustomFlag: abc");
#endif
#ifndef abc
  Serial.print("CustomFlag: !abc ");
#endif

#ifdef F_CPU
  Serial.print("CPU Speed (Hz): ");
  Serial.print(F_CPU);
#endif

  Serial.println();
  delay(1000);
}
