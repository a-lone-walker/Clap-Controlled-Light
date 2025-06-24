#define SOUND_SENSOR_PIN 2
#define RELAY_PIN 3

bool lightState = false;
bool previousSoundState = LOW;

void setup() {
  pinMode(SOUND_SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);  // Light initially OFF
  Serial.begin(9600);
}

void loop() {
  bool soundDetected = digitalRead(SOUND_SENSOR_PIN);

  // Detect a rising edge (clap)
  if (soundDetected == HIGH && previousSoundState == LOW) {
    lightState = !lightState;  // Toggle light state
    digitalWrite(RELAY_PIN, lightState ? HIGH : LOW);
    Serial.println(lightState ? "Light ON" : "Light OFF");
    delay(200); // Debounce delay (adjust as needed)
  }

  previousSoundState = soundDetected;
}
