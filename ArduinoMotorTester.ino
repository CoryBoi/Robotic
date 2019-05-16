//Reciever port
#define RX 0
//Sender port
#define TX 1

//PWM Pin out for motors(control motor speed)
#define MOTOR1PWM 9
#define MOTOR2PWM 10
//MotorDirection Pin out(control relays)
#define MOTOR1RLY 8
#define MOTOR2RLY 7

//
int Motor1Direction;
int Motor2Direction;
int Motor1Speed;
int Motor2Speed;

void setup() {
  Motor1Direction = 0;
  Motor2Direction = 0;
  Motor1Speed = 0;
  Motor2Speed = 0;
  pinMode(MOTOR1PWM, OUTPUT);
  pinMode(MOTOR2PWM, OUTPUT);
  pinMode(MOTOR1RLY, OUTPUT);
  pinMode(MOTOR2RLY, OUTPUT);
  

  //serial code default speed 
  Serial.begin(9600);
  
  
}

void loop() {
    
}


//Changes Motor 1 speed and direction
void motor1Controller(){
  if(Motor1Direction < 0){
    analogWrite(MOTOR1PWM, 0);
    delay(1000);
    digitalWrite(MOTOR1RLY, HIGH);
    
  }
  
  else if(Motor1Direction > 0){
    analogWrite(MOTOR1PWM, 0);
    delay(1000);
    digitalWrite(MOTOR1RLY, LOW);
  }
  
  else if(Motor1Direction == 0){
    analogWrite(MOTOR1PWM, 0);
    delay(1000);
  }
  analogWrite(MOTOR1PWM, Motor1Speed);
}


//Changes Motor 2 speed and direction
void motor2Controller(){
  if(Motor2Direction < 0){
    analogWrite(MOTOR2PWM, 0);
    delay(1000);
    digitalWrite(MOTOR2RLY, HIGH);
  }
  
  else if(Motor2Direction > 0){
    analogWrite(MOTOR2PWM, 0);
    delay(1000);
  }
  
  else if(Motor2Direction == 0){
    analogWrite(MOTOR2PWM, 0);
    delay(1000);
    digitalWrite(MOTOR2RLY, HIGH);
  }
  analogWrite(MOTOR2PWM, Motor2Speed);
  
}
