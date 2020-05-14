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
/*
State of button input
0 = none
1 = left
2 = right
*/
int Knopf = 0;
/*
  Y axis
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
  //initialize array
  reset_game();
  Serial.begin(9600);
  Serial.println("Hello World!");
  display();
}

void loop()
{
  // put your main code here, to run repeatedly:
  CUM();
  if (Knopf != 0)
  {
    if (Knopf == 1 && yeet != 0)
    {
      yeet -= 1;
      display();
    }
    if (Knopf == 2 && yeet != 5)
    {
      yeet += 1;
      display();
    }
  }
  if (bigpp == true)
  {
    ass();
   if (player == 1)
    {
      player = 2;
    }
    else
    {
      player = 1;
    }
    display();
  }
}

/*
  C heck
  U serinput
  M echanism

  Checks the users input and sets game variables accordingly
*/
void CUM()
{ //überprüft, welche knöpfe gedrückt wurden
  String input = Serial.readString();
  if(input == "left"){Knopf = 1; return;}
  if(input == "right"){Knopf = 2; return;}
  if(input == "reset"){reset_game(); return;}
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
    (M anaging
    A ssistant)

    Searches for the highest unset point of yeet
  */
  for (int joemama = 0; joemama < 5; joemama++)
  {
    if (gay[yeet][joemama] == 0)
    {
      gay[yeet][joemama] = player;
      return;
    }
  }
}

//resets game environment
void reset_game()
{
  //reset array
  for (int x = 0; x < 5; x++)
  {
    for (int y = 0; y < 5; y++)
    {
      gay[x][y] = 0;
    }
  }
  //reset game variables
  int yeet = 0;
  int player = 1;
}

void display()
{
  Serial.println("Board:");
  //Print board
  Serial.println();
  Serial.println("| 1 | 2 | 3 | 4 | 5 |");
  Serial.println();
  Serial.println("_____________________");
  for(int x = 0; x < 5; x++)
  {
    Serial.print("| ");
    for(int y = 0; y < 5; y++)
    {
      Serial.print(gay[x][y]);
      Serial.print(" | ");
    }
    Serial.println();
    Serial.println();
  }
  Serial.print("Current Row ");
  Serial.println(yeet);
  //Print player
  Serial.print("Current player ");
  Serial.println(player);

}
