#define Dleft x //mit Pins ersetzen
#define Dright x
void setup() {
  // put your setup code here, to run once:
  /*
   G ateway
   A lternative
   Y oucontroll
   */
int gay[2][5] = {{0,0,0,0,0}, {0,0,0,0,0}};
int Knopf = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  CUM();
  if(Knopf != 0){
    
  }
}
/*
C heck
U serinput
M echanism
*/
 void CUM(){ //überprüft, welche knöpfe gedrückt wurden
   if(digitalRead(Dleft)==HIGH{ Knopf = 1;})
   if(digitalRead(Dright)==HIGH{ Knopf = 2;})
   else{Knopf=0;}
  return;
 }