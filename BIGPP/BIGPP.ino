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
    if (Knopf == 1 && yeet != 0)
    {
      yeet -= 1;
    }
    if (Knopf == 2 && yeet != 5)
    {
      yeet += 1;
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
      player = 1
    }
  }


  display();
  homo1();
}

/*
C heck
U serinput
M echanism

Checks the users input and sets game variables accordingly
*/
void CUM()
{ //überprüft, welche knöpfe gedrückt wurden
  if (digitalRead(Dleft) == HIGH && digitalRead(Dright) == HIGH)
  {
    reset_game();
    return;
  }
  if (digitalRead(Dleft) == HIGH)
  {
    Knopf = 1;
  }
  if (digitalRead(Dright) == HIGH)
  {
    Knopf = 2;
  }
  if (digitalRead(hauptinput) == HIGH)
  {
    bigpp = true;
  }
  else
  {
    Knopf = 0;
  }
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
//all of the playing players are shown
//everything of the enemie is shown, except the one next to the playing player
//every unclaimed is shown, except the lowest one
void display()
{
  for (int pp = 0; pp < 5; pp++)
  {
    for (int greaterpp = 0; greaterpp < 5; greaterpp++)
    {
      digitalWrite(pp + 5, LOW);
      digitalWrite(greaterpp, LOW);
      if (gay[pp][greaterpp] == 0)
      {
        if (gay[pp][greaterpp - 1] == 0)
        {
          digitalWrite(pp + 5, HIGH);
          digitalWrite(greaterpp, HIGH);
        }
      }
      if (gay[pp][greaterpp] != 0)
      {
        if (player == 1)
        {
          if (gay[pp][greaterpp] == 1)
          {
            digitalWrite(pp + 5, HIGH);
            digitalWrite(greaterpp, HIGH);
          }
          if (gay[pp][greaterpp] == 2)
          {
            if (gay[pp][greaterpp - 1] != 1)
            {
              if (gay[pp][greaterpp - 1] != 1)
              {
                digitalWrite(pp + 5, HIGH);
                digitalWrite(greaterpp, HIGH);
              }
            }
          }
        }
        if (player == 2)
        {
          if (gay[pp][greaterpp] == 2)
          {
            digitalWrite(pp + 5, HIGH);
            digitalWrite(greaterpp, HIGH);
          }
          if (gay[pp][greaterpp] == 1)
          {
            if (gay[pp][greaterpp - 1] != 2)
            {
              if (gay[pp][greaterpp - 1] != 2)
              {
                digitalWrite(pp + 5, HIGH);
                digitalWrite(greaterpp, HIGH);
              }
            }
          }
        }
      }
    }
  }
}
/*
H ome
O ffice
M onitoring
O bservation
*/
void homo1()
{
    for( int greaterpp = 0; greaterpp < 2; greaterpp++)
    {
      for( int pp = 0; pp < 5; pp++)
      {
          for( int homie = 1; homie < 4; homie++)
          {
             if( homie == 4)
             {reset_game;}
             if(gay[greaterpp][pp + homie] != gay[greaterpp][pp])
             {
                homo2();
                return;
             }
          }
      }
    }
}
void homo2()
{
    for( int greaterpp = 0; greaterpp < 2; greaterpp++)
    {
      for( int pp = 0; pp < 5; pp++)
      {
          for( int homie = 1; homie < 4; homie++)
          {
             if( homie == 4)
             {reset_game;}
             if(gay[greaterpp + homie][pp] != gay[greaterpp][pp])
             {
                homo3();
                return;
             }
          }
      }
    }
}
void homo3()
{
    for( int greaterpp = 0; greaterpp < 2; greaterpp++)
    {
      for( int pp = 0; pp < 5; pp++)
      {
          for( int homie = 1; homie < 4; homie++)
          {
             if( homie == 4)
             {reset_game;}
             if(gay[greaterpp + homie][pp + homie] != gay[greaterpp][pp])
             {
                homo4();
                return;
             }
          }
      }
    }
}
void homo4()
{
    for( int greaterpp = 0; greaterpp < 2; greaterpp++)
    {
      for( int pp = 0; pp < 5; pp++)
      {
          for( int homie = 1; homie < 4; homie++)
          {
             if( homie == 4)
             {reset_game;}
             if(gay[greaterpp + homie][pp - homie] != gay[greaterpp][pp])
             {
                return;
             }
          }
      }
    }
}
