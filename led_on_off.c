const int ledPin = 13;
void setup()
{
    Serial.begin(9600);      // Initial the serial output
    pinMode(ledPin, OUTPUT); // Set the pin as OUTPUT
}
void loop()
{
    int delayPeriod = 100;      // In ms
    digitalWrite(ledPin, HIGH); // Turn on the LED with HIGH output V
    delay(delayPeriod);
    digitalWrite(ledPin, LOW); // Turn off the LED with LOW output V
}
