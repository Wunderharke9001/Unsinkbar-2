#define Dleft 1 
#define Dright 2
#define hauptinput 3
void setup() {
  // put your setup code here, to run once:
  /*
   G ateway
   A lternative
   Y oucontroll
   */
  
int gay[5][5];
int Knopf = 0;
/*
  Y-axis
  E thernal
  E xtraction
  T erminal
  */
int yeet = 0;
/*
B iological
I nput
G amma,
P rime
P oint
*/
bool bigpp = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  CUM();
  if(Knopf != 0){
    if(Knopf == 1){ if(yeet != 0){
      yeet = yeet - 1;

    }
    }
    if(Knopf == 2){ if(yeet != 5){
      yeet = yeet + 1;

    }
  }
}

if(bigpp==true){
for()
}

  }

/*
C heck
U serinput
M echanism
*/
 void CUM(){ //überprüft, welche knöpfe gedrückt wurden
   if(digitalRead(Dleft)==HIGH{ Knopf = 1;})
   if(digitalRead(Dright)==HIGH){ Knopf = 2;}
   else{Knopf=0;}
  return;
 }
 bool bigpp(){
   if(digitalRead(hauptinput)==HIGH){return = true;}
   return = false;
 }