



byte seven_seg_digits[10][7] = { { 1,1,1,1,1,1,0 },  // = 0
                                 { 0,1,1,0,0,0,0 },  // = 1
                                                           { 1,1,0,1,1,0,1 },  // = 2
                                                           { 1,1,1,1,0,0,1 },  // = 3
                                                           { 0,1,1,0,0,1,1 },  // = 4
                                                           { 1,0,1,1,0,1,1 },  // = 5
                                                           { 1,0,1,1,1,1,1 },  // = 6
                                                           { 1,1,1,0,0,0,0 },  // = 7
                                                           { 1,1,1,1,1,1,1 },  // = 8
                                                           { 1,1,1,0,0,1,1 }   // = 9
                                                           };

int GEAR_1 = 9;
int GEAR_2 = 10;
int GEAR_3 = 11;
int GEAR_4 = 12;
int GEAR_5 = 13;
          

int gear_1 = HIGH;
int gear_2 = HIGH;
int gear_3 = HIGH;
int gear_4 = HIGH;
int gear_5 = LOW;


void setup() {                
  pinMode(2, OUTPUT);   
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
 

  pinMode(GEAR_1, INPUT);  
  pinMode(GEAR_2, INPUT);
  pinMode(GEAR_3, INPUT);  
  pinMode(GEAR_4, INPUT);
  pinMode(GEAR_5, INPUT);
  
  
}




void sevenSegWrite(byte digit) {
  byte pin = 2;
  for (byte segCount = 0; segCount < 7; ++segCount) {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
}

void loop() {
  gear_1 = digitalRead(GEAR_1);
  gear_2 = digitalRead(GEAR_2);
  gear_3 = digitalRead(GEAR_3);
  gear_4 = digitalRead(GEAR_4);
  gear_5 = digitalRead(GEAR_5);


  if(gear_1 == LOW) {
    sevenSegWrite(1);
  } else if (gear_2 == LOW) {
    sevenSegWrite(2);
  } else if (gear_3 == LOW) {
    sevenSegWrite(3);
  } else if (gear_4 == LOW) {
    sevenSegWrite(4);
  } else if (gear_5 == LOW) {
    sevenSegWrite(5);
  } else {          // neutral
    sevenSegWrite(0); 
    }
      delay(100);
}