# Heart-rate-sensor-IoT
This project presents a real-time heart rate monitoring system built using a pulse sensor and an esp32 microcontroller. It measures the user’s heart rate (BPM - Beats Per Minute) and displays the waveform on screen while enabling remote monitoring through IoT technology.
---
* FEATURES -
- Real-time heart rate monitoring
- BPM calculation using pulse sensor
- Live waveform visualization (Serial Plotter) 
- LED indication for heartbeat
- Low-cost and simple setup

---

* COMPONENTS USED -
* Hardware -\
  ESP32 microcontroller\
  Pulse Sensor\
  Jumper Wires\
  Breadboard\
  USB Cable
* Software -\
  Arduino IDE\
  ESP32 Board Package\
  Serial plotter
---
* HARDWARE CONNECTIONS -
  
* Pulse sensor - ESP32 wiring connections-\
  VCC	- 3V3\
  GND	- GND\
  Signal - G34
---
* LED Connections-\
  LED (+) - GP2\
  LED (–) - GND

  ---
* WORKING PRINCIPLE -
  
The pulse sensor detects variations in blood flow, which are then processed by the ESP32 to identify heartbeat signals. An LED is used as an indicator, blinking in synchronization with the detected pulse.

---
The ESP32 reads the analog signal from the pulse sensor, processes it to detect heartbeat peaks, and displays the resulting pulse waveform in real time on the Serial Plotter, where each peak corresponds to a heartbeat.


---
* RESULTS -
  
* When the pulse sensor is not in contact with the finger, the observed waveform remains flat, indicating the absence of any detectable pulse signal.
<h3>OFF State</h3>
<p align="center">
  <img src="https://github.com/user-attachments/assets/ff7457b5-30c3-4028-881f-59cb1acd6ad0" width="300"/>
  <img src="https://github.com/user-attachments/assets/6cab422a-a904-4726-b94c-5dc92d71d2fb" width="300"/>
</p>


* When the pulse sensor is touched, distinct spikes appear in the waveform, indicating detected heartbeats.
<h3>ON State</h3>
<p align="center">
  <img src="https://github.com/user-attachments/assets/02671b8b-9d0f-4e03-850c-f4d87b0bd171" width="300"/>
  <img src="https://github.com/user-attachments/assets/7753f84b-4ff5-402d-b55c-6bdaed6368c1" width="300"/>
</p>

