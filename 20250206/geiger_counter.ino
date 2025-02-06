// Geiger counter program  (Sam Spergel, Jim Martin)
//
// For the Analog Devices EVAL-CN0536-ARDZ
//

int counts = 0;
bool isON = true;
unsigned long time = millis();

void setup() {
  pinMode(5,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("\n");
  while (1)
  {

    if (digitalRead(5) == HIGH) 
    {
    counts += 1;
    Serial.print(counts);
    Serial.print(",");
    Serial.print(time);
    Serial.print("\r\n");
    }

    time = millis(); // why is time collected here?
  }
}
