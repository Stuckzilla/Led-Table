//#define DEBUG 1


#define ON  1
#define OFF 0

typedef struct
{
  uint8_t  frameData[8];
  int      delay;     // display this frame for this many milliseconds
} FrameT;

typedef struct
{
  int       numberFrames;
  FrameT    *frames;
} SequenceT;

#define B(d) 0b##d
