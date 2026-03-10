#include <Servo.h>

//  定義伺服
Servo servo0;
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

//  定義數位腳位
int potpin0 = 0;
int val0;

int potpin1 = 1;
int val1;

int potpin2 = 2;
int val2;

int potpin3 = 3;
int val3;

int potpin4 = 4;
int val4;

int potpin5 = 5;
int val5;

//  定義伺服
void setup() {
  servo0.attach(7);
  servo1.attach(8);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  servo5.attach(12);
}


void loop(){
  //  val0等於從potpin0的電位器讀取的值
  val0 = analogRead(potpin0);
  val0 = map(val0, 0, 1023, 0, 179);
  //  告訴servo1寫入val0
  servo0.write(val0);

  //  val1等於從potpin1的電位器讀取的值
  val1 = analogRead(potpin1);
  val1 = map(val1, 0, 1023, 0, 179);
  //  告訴servo1寫入val1
  servo1.write(val1);

  //  val2等於從potpin2的電位器讀取的值
  val2 = analogRead(potpin2);
  val2 = map(val2, 0, 1023, 0, 179);
  //  告訴servo2寫入val2
  servo2.write(val2);

  //  val3等於從potpin3的電位器讀取的值
  val3 = analogRead(potpin3);
  val3 = map(val3, 0, 1023, 0, 179);
  //  告訴servo3寫入val3
  servo3.write(val3);

  //  val4等於從potpin4的電位器讀取的值
  val4 = analogRead(potpin4);
  val4 = map(val4, 0, 1023, 0, 179);
  //  告訴servo4寫入val4
  servo4.write(val4);

  //  val5等於從potpin5的電位器讀取的值
  val5 = analogRead(potpin5);
  val5 = map(val5, 0, 1023, 0, 179);
  //  告訴servo5寫入val5
  servo5.write(val5);
}