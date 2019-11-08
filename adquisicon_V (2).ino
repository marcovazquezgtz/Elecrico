double period=1000;
unsigned long time_now=0;
int j=0;
float res=0;
float res2=0;
float res3=0;
float res4=0;
float res5=0;
float res6=0;
float res7=0;
float res8=0;
float res9=0;
float res10=0;
float res11=0;
float res12=0;
float res13=0;
float res14=0;
float res15=0;
float res16=0;

void print_time(unsigned long time_millis);

// the setup routine runs once when you press reset:
void setup() {

// initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
 
  Serial.print('\t');
  Serial.print("C1");
  Serial.print('\t');
  Serial.print("C2");
  Serial.print('\t');
  Serial.print("C3");
  Serial.print('\t');
  Serial.print("C4");
  Serial.print('\t');
  Serial.print("C5");
  Serial.print('\t');
  Serial.print("C6");
  Serial.print('\t');
  Serial.print("C7");
  Serial.print('\t');
  Serial.print("C8");
  Serial.print('\t');
  Serial.print("C9");
  Serial.print('\t');
  Serial.print("C10");
  Serial.print('\t');
  Serial.print("C11");
  Serial.print('\t');
  Serial.print("C12");
  Serial.print('\t');
  Serial.print("C13");
  Serial.print('\t');
  Serial.print("C14");
  Serial.print('\t');
  Serial.print("C15");
  Serial.print('\t');
  Serial.println("C16");
  
}

void loop() 

// the loop routine runs over and over again forever:
{
if (millis()>time_now + period)
{
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A4);
  int sensorValue6 = analogRead(A5);
  int sensorValue7 = analogRead(A6);
  int sensorValue8 = analogRead(A7);
  int sensorValue9 = analogRead(A8);
  int sensorValue10 = analogRead(A9);
  int sensorValue11 = analogRead(A10);
  int sensorValue12 = analogRead(A11);
  int sensorValue13 = analogRead(A12);
  int sensorValue14 = analogRead(A13);
  int sensorValue15 = analogRead(A14);
  int sensorValue16 = analogRead(A15);
  
  res=abs((0.004882*(sensorValue))-2.54);
  res2=abs((0.004882*(sensorValue2))-2.54);
  res3=abs((0.004882*(sensorValue3))-2.48);
  res4=abs((0.004882*(sensorValue4))-2.52);
  res5=abs((0.004882*(sensorValue5))-2.42);
  res6=abs((0.004882*(sensorValue6))-2.52);
  res7=abs((0.004882*(sensorValue7))-2.56);
  res8=abs((0.004882*(sensorValue8))-2.52);
  res9=abs((0.004882*(sensorValue9))-2.5);
  res10=abs((0.004882*(sensorValue10))-2.59);
  res11=abs((0.004882*(sensorValue11))-2.58);
  res12=abs((0.004882*(sensorValue12))-2.57);
  res13=abs((0.004882*(sensorValue13))-2.5);
  res14=abs((0.004882*(sensorValue14))-2.5);
  res15=abs((0.004882*(sensorValue15))-2.5);
  res16=abs((0.004882*(sensorValue16))-2.5);
  // print out the value you read:

  
  Serial.print(j);
  Serial.print('\t');
  Serial.print(res);
  Serial.print('\t');
  Serial.print(res2);
  Serial.print('\t');
  Serial.print(res3);
  Serial.print('\t');
  Serial.print(res4);
  Serial.print('\t');
  Serial.print(res5);
  Serial.print('\t');
  Serial.print(res6);
  Serial.print('\t');
  Serial.print(res7);
  Serial.print('\t');
  Serial.print(res8);
  Serial.print('\t');
  Serial.print(res9);
  Serial.print('\t');
  Serial.print(res10);
  Serial.print('\t');
  Serial.print(res11);
  Serial.print('\t');
  Serial.print(res12);
  Serial.print('\t');
  Serial.print(res13);
  Serial.print('\t');
  Serial.print(res14);
  Serial.print('\t');
  Serial.print(res15);
  Serial.print('\t');
  Serial.print(res16);
  Serial.print('\n');
time_now=millis();
    
  j=j+1;
}
}
