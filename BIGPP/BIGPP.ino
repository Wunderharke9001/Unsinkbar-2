//variables

//left button
#define Dleft 11
//right button
#define Dright 12
//select button
#define hauptinput 13
/*
   G ateway
   A lternative
   Y oucontroll

   Saves the gameplay
   */
int gay[5][5];
int Knopf = 0;
/*
  Y-axis
  E thernal
  E xtraction
  T erminal

  Sets the collum
  */
int yeet = 0;
int player = 1;
/*
B iological
I nput
G amma,
P rime
P oint

inputs your decision
*/
bool bigpp = false;

void setup()
{
  // put your setup code here, to run once:
  //initialize array
  reset_game();
}

void loop()
{
  // put your main code here, to run repeatedly:
  CUM();
  if (Knopf != 0)
  {
    if (Knopf == 1 && yeet != 0){yeet -= 1;}
    if (Knopf == 2 && yeet != 5){yeet += 1;}
  }
  if (bigpp == true){ass();}
  if (player == 1){player == 0;}
  else(player == 1;)


}

/*
C heck
U serinput
M echanism

Checks the users input and sets game variables accordingly
*/
void CUM()
{ //überprüft, welche knöpfe gedrückt wurden
  if (digitalRead(Dleft) == HIGH && digitalRead(Dright) == HIGH){reset_game();return;}
  if (digitalRead(Dleft) == HIGH){Knopf = 1;}
  if (digitalRead(Dright) == HIGH){Knopf = 2;}
  if (digitalRead(hauptinput) == HIGH){bigpp = true;}
  else{Knopf = 0;}
  return;
}

//functions

/*
 A lternative
 S aving
 S ystem

 Inserts gameplay data
 */
void ass()
{
  /*
   J ust
   O ver
   E xtracted
   M ultidimensional
   A xis
   
   Searches for the highest unset point of yeet
   */
  for (int joema = 0; joema < 5; joema++;)
  {
    if (gay[yeet][joema] == 0)
    {
      gay[yeet][joema] = player;
      return;
    }
  }
}

//resets game environment
void reset_game()
{
  //reset array
  for (int i = 0; i < 5; i++)
  {
    for (int o = 0; o < 5; o++)
    {
      gay[i][o] = 0;
    }
  }
  //reset game variables
  int yeet = 0;
  int player = 1;
}

void display()
{
  
}