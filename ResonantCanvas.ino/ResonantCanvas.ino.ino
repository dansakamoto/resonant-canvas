
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

int smooth(int sensorValue) {
  int a1 = 400;
  int a2 = 600;
  int b1 = 200;
  int b2 = 400;
  int a3 = 1023;
  int b3 = 1023;
  if (sensorValue >= 0 && sensorValue < a1 ){
    //Serial.println("a1");
    return change_scale(0,a1,sensorValue,0,b1);
  } else if (sensorValue >= a1 && sensorValue < a2 ){
    //Serial.println("a2");
    return change_scale(a1,a2,sensorValue,b1,b2);
  } else if (sensorValue >= a2 && sensorValue <= a3 ){
    //Serial.println("a3");
    return change_scale(a2,a3,sensorValue,b2,b3);
  } else return sensorValue;
}

float change_scale(int a_low, int a_high, int input, 
                   int b_low, int b_high){
  float ratio = ((float)input - (float)a_low) / ((float)a_high - (float)a_low);
  //Serial.println(input);
  float result = (b_high - b_low) * ratio + b_low;
  return (int)result;
                     
}
   
// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(smooth(sensorValue));
  //Serial.println(sensorValue);
  delay(30);        // delay in between reads for stability
}
