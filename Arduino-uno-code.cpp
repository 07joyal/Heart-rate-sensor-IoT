#define PULSE_PIN 34
#define LED_PIN 2

int signal=0;
int threshold=3200;   // Adjust if needed
bool beatDetected=false;
void setup(){
  Serial.begin(115200);
  pinMode(LED_PIN,OUTPUT);
}
void loop(){
  signal=analogRead(PULSE_PIN);
  Serial.println(signal);
  // Detect heartbeat
  if (signal>threshold && beatDetected==false) {
    digitalWrite(LED_PIN,HIGH);  // LED ON 
    beatDetected=true;
  }
  if (signal<threshold) {
    digitalWrite(LED_PIN,LOW);   // LED OFF
    beatDetected=false;
  }
  delay(20);  
}
