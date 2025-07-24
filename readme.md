# Temperature-Based Heater Control System using ESP32 + FreeRTOS

## 🔧 Project Description
This project demonstrates a real-time temperature-based heater control system using **ESP32** and **FreeRTOS**. A potentiometer is used to simulate temperature values, while LEDs indicate heater status and overheat condition. The system is structured as a FreeRTOS task that runs periodically, reading the simulated temperature and updating the system state accordingly.

## 🛠️ Hardware (Simulated on Wokwi)
- ESP32 DevKitC
- Potentiometer (as simulated temperature sensor)
- Red LED (heater indicator)
- Green LED or buzzer (overheat indicator)

## 💻 Software Tools
- [Wokwi Simulator](https://wokwi.com/)
- Arduino Framework with ESP32 core
- FreeRTOS

## 🔌 Circuit Description
- **Potentiometer** is connected to **GPIO34** to simulate varying temperature (20°C to 60°C range).
- **Red LED** on **GPIO5** represents the heater.
- **Green LED** or buzzer on **GPIO4** signals an overheat condition.

## ▶️ Simulation Instructions
1. Open the Wokwi simulation:  
   🔗 [Click here to run the simulation](https://wokwi.com/projects/373648528282731521)
2. Rotate the potentiometer to simulate temperature changes.
3. Observe the Serial Monitor for temperature and state logs.
4. Red LED (heater) turns ON during heating and stabilizing.
5. Green LED (overheat) turns ON if temperature exceeds 50°C.

## 📈 State Explanation

| State            | Temperature Range | Heater | Overheat Indicator |
|------------------|-------------------|--------|---------------------|
| IDLE             | < 30°C            | OFF    | OFF                 |
| HEATING          | 30–39°C           | ON     | OFF                 |
| STABILIZING      | 40–44°C           | ON     | OFF                 |
| TARGET REACHED   | 45–50°C           | OFF    | OFF                 |
| OVERHEAT         | > 50°C            | OFF    | ON                  |

## 📁 File Structure
