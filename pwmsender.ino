int analogsender = 11;
int val = 0;


void setup() {
  pinMode (analogsender,OUTPUT);
  Serial.begin(9600);
    

}

void loop() {
  val++;
  if(val>=255){
    val=0;
  }
  Serial.println(val);
  analogWrite(analogsender,val);
  delay (100);
  
}
