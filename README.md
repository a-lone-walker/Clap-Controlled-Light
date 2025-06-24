🔊 Sound-Based Cellar Light Control (Clap Switch Light)
An Arduino-based smart automation project that turns a light ON/OFF based on sound (like claps). Ideal for cellars, basements, or any room where switch access is limited or hands-free control is desired.

📌 Project Overview
This project uses a sound sensor module (KY-038 or LM393), an Arduino, and a relay module to detect claps or loud sounds and toggle a light. Each valid clap (or sharp sound) triggers a toggle action – switching the light ON if it was OFF, and vice versa.

🎯 Features
✅ Toggle light using clap or any sharp sound

✅ Hands-free operation – great for dark or hard-to-reach places

✅ Simple hardware with minimal cost

✅ Can be adapted for real-world AC light control

✅ Easily modifiable for double-clap or timer features

🧰 Components Required
Component	Quantity
Arduino Uno / Nano	1
Sound Sensor (KY-038 / LM393)	1
5V Relay Module	1
Bulb + Holder (AC)	1
Jumper Wires	~10
Breadboard (optional)	1
USB Cable for Arduino	1

🔌 Circuit Connections
Sound Sensor Pin	Connects to Arduino
VCC	5V
GND	GND
OUT (Digital)	D2

Relay Pin	Connects to Arduino
IN	D3
VCC	5V
GND	GND

💡 Note: Use proper safety precautions while connecting AC bulbs.

💻 Code
The Arduino sketch toggles the relay state every time a rising edge (clap/sound) is detected from the sound sensor.

📁 Click here to view the code

cpp
Copy
Edit
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

  if (soundDetected == HIGH && previousSoundState == LOW) {
    lightState = !lightState;
    digitalWrite(RELAY_PIN, lightState ? HIGH : LOW);
    Serial.println(lightState ? "Light ON" : "Light OFF");
    delay(200); // Debounce
  }

  previousSoundState = soundDetected;
}
📸 Images / Demo Video
(Add pictures or a YouTube demo link here if available)

⚠️ Safety Notes
If using an AC bulb with relay, ensure proper insulation.

Never touch relay terminals while powered.

Use optically isolated relays for better safety.

📦 Future Improvements
➕ Add double-clap logic for toggle

⏲️ Auto-off after fixed time

📱 Control via Bluetooth or Wi-Fi

🌡️ Add temperature or light sensors for adaptive lighting

📄 License
This project is open-source under the MIT License. Feel free to use, modify, and share it with credit.

