# 🔊 Clap-Controlled Light (Sound-Based Cellar Light Automation)

This project uses an Arduino, a sound sensor, and a relay to toggle a light ON or OFF with a clap or sharp sound. It’s perfect for hands-free control in areas like cellars, basements, or dark rooms.

---

## 📦 Project Description

The system listens for sound spikes (like a clap) and toggles a light each time it detects a valid signal. It uses an Arduino-compatible board and a digital sound sensor (like KY-038 or LM393) to detect claps and trigger a relay, which switches the light ON or OFF.

---

## 🧰 Components Required

| Component                      | Quantity |
|-------------------------------|----------|
| Arduino Uno / Nano            | 1        |
| Sound Sensor Module (KY-038 or LM393) | 1        |
| 5V Relay Module               | 1        |
| Light Bulb + Holder (AC)      | 1        |
| Jumper Wires                  | ~10      |
| Breadboard (optional)         | 1        |
| USB Cable for Arduino         | 1        |

---

## 🔌 Wiring Instructions

### Sound Sensor → Arduino:
- **VCC** → 5V  
- **GND** → GND  
- **OUT (Digital)** → D2  

### Relay Module → Arduino:
- **IN** → D3  
- **VCC** → 5V  
- **GND** → GND  

> ⚠️ Make sure to use an opto-isolated relay when dealing with 230V AC light bulbs. Keep AC wiring separate and well insulated.

---

## 💡 How It Works

1. The sound sensor detects a sharp sound (like a clap).
2. The Arduino reads the sensor’s digital output.
3. On detecting a rising signal (sound spike), the system toggles the state of the relay.
4. The relay switches the light ON if it was OFF, or OFF if it was ON.

---

## 🚀 Getting Started

1. Wire the components as per the wiring section.
2. Open the `.ino` file in the Arduino IDE.
3. Select the correct board (e.g., Arduino Uno/Nano) and port.
4. Upload the code to the Arduino.
5. Power the circuit and test by clapping near the sensor.

---

## 🎯 Use Cases

- Cellar or basement lighting
- Night-time room automation
- Elderly assistance systems
- Low-cost smart home installations

---

## ⚠️ Safety Tips

- If you’re switching AC appliances, handle with extreme care.
- Do not touch the relay terminals when powered.
- Use a 2-pin plug and proper casing to cover exposed connections.

---

## 📈 Future Enhancements

- Double-clap or triple-clap pattern detection
- Auto-off after a timer
- Wireless (Bluetooth/Wi-Fi) override control
- Integration with ambient light sensors for smarter activation

---

## 📜 License

This project is licensed under the MIT License – feel free to modify and use it in your own projects.

---

### 👨‍🔧 Created with ❤️ by [YourNameHere]
