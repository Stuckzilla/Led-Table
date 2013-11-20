#define jdataPin 9     //Define which pins will be used for the Shift Register control
#define jlatchPin 8
#define jclockPin 10
#define oe 11


void setup()
{
    pinMode(jdataPin, OUTPUT);       //Configure each IO Pin
    pinMode(jlatchPin, OUTPUT);
    pinMode(jclockPin, OUTPUT);
    pinMode(oe, OUTPUT);
    digitalWrite(oe, LOW);
    
    digitalWrite(jlatchPin, LOW);
    for (int x = 0; x < 4; x++)  
    {             
        shiftOut(jdataPin, jclockPin, MSBFIRST, 0);        
    }  
    digitalWrite(jlatchPin, HIGH);
}

void loop()
{
  
  kitSequence();
  alienSequence();
  heartSequence();
  rotatinglineSequence();
  
}



//This is the list of Sequences refered to above

void kitSequence()
{ 
  int seq1[] = {6,129,66,36,24,36,66};						// byte #2 value

  void loop()
  {
      for (int x = 0; x < seq1[0]; x++)         //Array Index
      {
          digitalWrite(jlatchPin, LOW);  
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, seq1[x+1]);
          digitalWrite(jlatchPin, HIGH);         
          delay(75);
      }
  }
}

void alienSequence
{
 
  int row1[] = {2,24,24};    //00011000 //00011000
  int row2[] = {2,60,60};    //00111100 //00111100
  int row3[] = {2,124,124};  //01111110 //01111110
  int row4[] = {2,189,189};  //10111101 //10111101
  int row5[] = {2,255,255};  //11111111 //11111111
  int row6[] = {2,36,36};    //00100100 //00100100
  int row7[] = {2,90,66};    //01011010 //01000010
  int row8[] = {2,165,36};   //10100101 //00100100
  
  void loop()
  {
    for (int y = 0; y < 4; y++)
    {
      for (int x = 0; x < seq1[0]; x++)
      {
          digitalWrite(jlatchPin, LOW);  
          shiftOut(jdataPin, jclockPin, MSBFIRST, row1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row2[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row3[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row4[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row5[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row6[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row7[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row8[x+1]);
          digitalWrite(jlatchPin, HIGH);         
          delay(75);
      }
    }
  } 
}

void heartSequence
{
 
  int row1[] = {2,0,0};     //00000000 //00000000
  int row2[] = {2,0,102};   //00000000 //01100110
  int row3[] = {2,20,255};  //00010100 //11111111
  int row4[] = {2,62,255};  //00111110 //11111111
  int row5[] = {2,62,255};  //00111110 //11111111
  int row6[] = {2,28,126};  //00011100 //01111110
  int row7[] = {2,8,60};    //00001000 //00111100
  int row8[] = {2,0,24};    //00000000 //00011000
  
  void loop()
  {
    for (int y = 0; y < 4; y++)
    {
      for (int x = 0; x < seq1[0]; x++)
      {
          digitalWrite(jlatchPin, LOW);  
          shiftOut(jdataPin, jclockPin, MSBFIRST, row1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row2[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row3[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row4[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row5[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row6[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row7[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row8[x+1]);
          digitalWrite(jlatchPin, HIGH);         
          delay(75);
      }
    }
  } 
}


void rotatinglineSequence
{
 
  int row1[] = {2,24,24};    //11000000 //01100000 //00110000 //00011000 //00001100 //00000110 //10000011 
  int row2[] = {2,60,60};    //01100000 //00110000 //00011000 //00001100 //00000110 //10000011 //11000001 
  int row3[] = {2,124,124};  //00110000 //00011000 //00001100 //00000110 //10000011 //11000001 //01100000
  int row4[] = {2,189,189};  //00011000 //00001100 //00000110 //10000011 //11000001 //01100000 //00110000 
  int row5[] = {2,255,255};  //00001100 //00000110 //10000011 //11000001 //01100000 //00110000 //00011000
  int row6[] = {2,36,36};    //00000110 //10000011 //11000001 //01100000 //00110000 //00011000 //0000110
  int row7[] = {2,90,66};    //10000011 //11000001 //01100000 //00110000 //00011000 //00001100 //00000110
  int row8[] = {2,165,36};   //11000001 //01100000 //00110000 //00011000 //00001100 //00000110 //10000011
  
  void loop()
  {
    for (int y = 0; y < 4; y++)
    {
      for (int x = 0; x < seq1[0]; x++)
      {
          digitalWrite(jlatchPin, LOW);  
          shiftOut(jdataPin, jclockPin, MSBFIRST, row1[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row2[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row3[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row4[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row5[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row6[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row7[x+1]);
          shiftOut(jdataPin, jclockPin, MSBFIRST, row8[x+1]);
          digitalWrite(jlatchPin, HIGH);         
          delay(75);
      }
    }
  } 
}
