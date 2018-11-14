int pins[] = {A8, A9, A10, A11};
int cpins = 4;
int val;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() >= cpins) {
    for (int i = 0; i < cpins; i++) {
      val = Serial.read();
      analogWrite(pins[i], val);

      Serial.write(val);
    }
  }
}