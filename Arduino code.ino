void setup() {
  // put your setup code here, to run once:
//Initialise the Motor outpu pins
    pinMode (6, OUTPUT);
    pinMode (9, OUTPUT);
    pinMode (10, OUTPUT);
    pinMode (11, OUTPUT);

//By default turn off both the motors
    analogWrite(6,HIGH);
    analogWrite(9,LOW);
    analogWrite(10,HIGH);
    analogWrite(11,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
