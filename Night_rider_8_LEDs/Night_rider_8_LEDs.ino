#define data 9
#define clock 10
#define strobe 8
#define oe 11
int mDelay = 20;

void setup()
{
  pinMode(clock, OUTPUT); // make the clock pin an output
  pinMode(data , OUTPUT); // make the data pin an output3
  pinMode(strobe, OUTPUT);
  pinMode(oe, OUTPUT);
  digitalWrite(oe, LOW);
  digitalWrite(strobe,LOW);
}

void loop()
{
    
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B10000000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B01000000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00100000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00010000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00001000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00000100);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00000010);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00000001);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00000010);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00000100);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00001000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00010000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B00100000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    digitalWrite(strobe, LOW);
    shiftOut(data, clock, LSBFIRST, B00000000);
    shiftOut(data, clock, LSBFIRST, B01000000);
    digitalWrite(strobe, HIGH);
    delay(mDelay);
    //mDelay = mDelay - 5;
    //if ( mDelay < 5 )
    //{
    //  mDelay = 100;
    //}
}

