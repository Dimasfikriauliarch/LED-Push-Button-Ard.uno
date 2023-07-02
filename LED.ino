const int button= 4;
const int led1= 1;
const int led2= 2;
const int led3= 3;
int buttonstatus;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);

}
void loop(){
 if (digitalRead (button)== HIGH){
    buttonstatus ++;
    delay(500);
    }
    if (buttonstatus == 1){
      digitalWrite(led1, HIGH);
    }
    else if (buttonstatus == 2){
      digitalWrite(led2, HIGH);
      digitalWrite(led1, LOW);
    }
    else if (buttonstatus == 3){
      digitalWrite(led3, HIGH);
      digitalWrite(led2, LOW);
    }
    else if (buttonstatus == 4){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }
    else if (buttonstatus == 5){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
    }
    else if (buttonstatus == 6){
      buttonstatus = 0;
    }
    else {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }
}
