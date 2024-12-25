# Temperature LED Indicator with Interrupt

An Arduino-based temperature monitoring system that displays temperature ranges using LED indicators and features an interrupt-driven LED flash sequence.

## 🛠️ Components Used

- 1x Arduino Uno
- 5x LEDs
- 1x TMP36 Temperature Sensor
- 1x Push Button
- Resistors (220Ω)
- Jumper Wires
- 1x Breadboard

## 📋 Features

- Real-time temperature monitoring
- 5-LED display system
- Temperature range: -40°C to 125°C
- Interrupt-driven LED flash sequence
- Different display patterns for positive/negative temperatures

## 🎮 Pin Configuration

### LED Array
- 5 LEDs connected to pins: 3, 4, 5, 6, 7
- Sequential temperature level display

### Sensors and Controls
- Temperature Sensor: A5
- Interrupt Button: Pin 2

## 📺 Circuit Diagram

![Frantic Curcan-Kup](https://github.com/user-attachments/assets/fb72bcbf-73e7-4825-b3bb-bd2cf7a5cddb)


## 💡 Usage

1. Power up the Arduino board
2. LEDs will display current temperature:
   - Positive temps: Sequential lighting up
   - Negative temps: Reverse sequential lighting
3. Press button to trigger LED flash sequence

## ⚡ Temperature Ranges

### Positive Temperature (0°C to 50°C)
- LED 1: > 10°C
- LED 2: > 20°C
- LED 3: > 30°C
- LED 4: > 40°C
- LED 5: > 50°C

### Negative Temperature (-25°C to 0°C)
- LED 5: < -25°C
- LED 4: < -20°C
- LED 3: < -15°C
- LED 2: < -10°C
- LED 1: < -5°C

## ⚠️ Important Notes

- Ensure correct temperature sensor orientation
- Verify button connections for interrupt
- Check LED polarity
- Use appropriate current-limiting resistors
- Calibrate temperature sensor if needed

## 🔧 Assembly Instructions

1. **Temperature Sensor Setup**
   - Connect TMP36 to A5
   - Ensure proper power supply
   - Add filtering capacitor if needed

2. **LED Array**
   - Connect LEDs with current-limiting resistors
   - Verify correct pin assignments
   - Check polarity

3. **Interrupt Button**
   - Connect to pin 2 (interrupt-capable)
   - Add pull-down resistor
   - Verify clean signal
     
## 🔍 Troubleshooting

| Problem | Possible Solution |
|---------|------------------|
| Inaccurate readings | Calibrate temperature sensor |
| LEDs not lighting | Check connections and polarity |
| Button not responding | Verify interrupt setup |
| Erratic behavior | Check power supply stability |

## 🔄 Version History

- v1.0 (Initial Release)
  - Basic temperature monitoring
  - LED indicator system
  - Interrupt-driven flash sequence
 
## 📝 License

This project is licensed under the MIT License 
