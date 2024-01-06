
#include "VGAX.h"

//font generated from BITFONZI - by Sandro Maffiodo
#define FNT_NANOFONT_HEIGHT 20
#define FNT_NANOFONT_SYMBOLS_COUNT 40

#define BTN_R 14
#define BTN_G 15
#define BTN_B 16
#define BTN_W 17
#define BTN_Y 18
//data size=570 bytes
const unsigned char fnt_nanofont_data[FNT_NANOFONT_SYMBOLS_COUNT][1+FNT_NANOFONT_HEIGHT] PROGMEM={
//пробел
{ 1, 0, 0, 0, 0, 0, 0, }, //glyph '!' code=0
{ 3, 160, 160, 0, 0, 0, 0, }, //glyph '"' code=1
//{ 5, 80, 248, 80, 248, 80, 0, },  //glyph '#' code=2
{ 3,  1, 0, 0, 0, 0, 0, },
{ 5, 120, 160, 112, 40, 240, 0, },  //glyph '$' code=3
{ 5, 136, 16, 32, 64, 136, 0, },  //glyph '%' code=4
{ 5, 96, 144, 104, 144, 104, 0, },  //glyph '&' code=5
{ 2, 128, 64, 0, 0, 0, 0, },  //glyph ''' code=6
{ 2, 64, 128, 128, 128, 64, 0, }, //glyph '(' code=7
{ 2, 128, 64, 64, 64, 128, 0, },  //glyph ')' code=8
//{ 3, 0, 160, 64, 160, 0, 0, },  //glyph '*' code=9
//Ж
{ 7, 0,0,0, 240, 248, 60, 30, 15, 7, 3,1,3,7,15,30,60,120,240,240,224,},  //glyph '*' code=9
{ 7, 0,0,0,120,120, 120, 121, 123, 255,255,254,255,255,123,121,120,120,120,120, }, //glyph '+' code=10
{ 7, 0,0,0,60, 124, 240, 224, 192, 128,0,  0,  0,  128,192,224,240,120, 60,60, 28},  //glyph ',' code=11
//Ё
{ 7, 25, 25, 0, 255, 255, 224,224,  224,  224,  224, 255,255,224,224, 224,224, 224,224,255,255 }, //glyph '-' code=12
{ 4, 128, 128, 0, 255, 255, 0,0,  0,  0,  0, 224,224,0,0, 0,0, 0,0,255,255 }, //glyph '.' code=13
{7, 0,0,0,31, 31, 28, 28, 28,   28,  28, 28,28,28,28, 28,28, 28,220,252,120  },  //glyph '/' code=14
{6, 0,0,0,255, 255, 14, 14,  14,  14,  14, 14,14,14,14, 14,14, 14,14,14,14 }, //glyph '0' code=15
{ 7, 0,0,0,255, 255,  14,14,  14,  14,  14, 14,14,14,14, 14,14, 14,14,14,14 },  //glyph '1' code=16
{ 3, 0,0,0,224, 224, 0,0,  0,  0,  0, 0,0,0,0, 0,0, 0,0,0,0 }, //glyph '2' code=17
{ 7, 0,0,0, 224, 224, 224, 224, 224, 224,224,  255,  255,  224,224, 224,224, 224,224,255,255 },  //glyph '3' code=18
{ 7, 0,0,0, 7, 7, 7, 7, 7, 7,7,  135,  199,  231, 103,103,103,103, 231,199, 135}, //glyph '4' code=19
{ 7, 12,7,0, 224, 224, 224, 224, 224, 225,227,  231,  239,  254, 252,248,240,224, 224,224, 224},  //glyph '5' code=20
{ 7, 192,128,0, 56, 56, 120, 248, 248, 248,184,  56,  56,  56, 56,56,56,56, 56,56, 56}, //glyph '6' code=21
{ 7, 0,0,0,224,224,224, 225, 227, 231, 238, 252, 254,238,  231,  227,  225, 224,224,224,224 }, //glyph '7' code=22
{ 7, 0,0,0,56,120,224, 192, 128, 0, 0, 0, 0,0,  0,  128,  192, 224,112,56,24  },  //glyph '8' code=23
{ 7, 0,0,0,255,255, 224,224, 224,224, 224,224, 255,255,224,  224,  224, 224,224,224,224 },  //glyph '9' code=24
{ 3, 0,0,0,128,192, 224,96, 96,96,96,224, 192,128, 0,  0,  0, 0,0,0,0}, //glyph ':' code=25
{ 7, 0,0,0,3,3, 7,15, 14,14,28,28, 28,56, 63,  63,  112, 112,224,224,192},  //glyph ';' code=26
{ 6, 0,0,0,128,128, 192,224, 224,224,112,112, 112,56, 248,  248,  28, 28,14,14,6 }, //glyph '<' code=27
{ 7, 0,0,0,7,31, 56,112, 112,224,192,192, 192,192, 192,  192,  224, 112,56,31,7}, //glyph '=' code=28
{6, 0,0,0,224,248, 28,14, 6,0,0,0, 0,0, 6, 6, 14,  28, 56,248,240 },  //glyph '>' code=29
{ 7, 0,0,0,224,224, 224,224, 224,224,224,255, 255,224, 224,  224,  224, 224,224,224,224},  //glyph '?' code=30
{ 5, 0,0,0,56,56, 56,56, 56,56,56,248, 248,56, 56,  56,  56, 56,56,56,56 },  //glyph '@' code=31
//Б
{7, 0,0,0, 255, 255, 224, 224, 224, 224,224,  255,  255,  224,224, 224,224, 224,224,255,255},  //glyph 'A' code=32
{5, 0,0,0, 224, 224, 0, 0, 0, 0,0,  224,  240, 120, 56, 56,56,56,120,240, 224  }, //glyph 'B' code=33
//З
{7, 0,0,0, 63, 127, 224, 192, 192, 0,0,  7,  7,  0,0, 192,192, 224,112,63,31 }, //glyph 'C' code=34
{5, 0,0,0, 224, 240, 112, 56, 56, 56,240, 224,  224,240,120,56, 56,56,112,224,192  }, //glyph 'D' code=35
//Е
{  7, 0, 0, 0, 255, 255, 224,224,  224,  224,  224, 255,255,224,224, 224,224, 224,224,255,255}, //glyph 'E' code=36
{ 4, 0, 0, 0, 255, 255, 0,0,  0,  0,  0, 224,224,0,0, 0,0, 0,0,255,255 }, //glyph 'F' code=37
//И
{7, 0,0,0, 224, 224, 224, 224, 224, 225,227,  231,  239,  254, 252,248,240,224, 224,224, 224 }, //glyph 'G' code=38
{7, 0,0,0, 56, 56, 120, 248, 248, 248,184,  56,  56,  56, 56,56,56,56, 56,56, 56}, //glyph 'H' code=39
};

VGAX vga;
// желтый g~lt}y
// синий siniy
// красный krasn}y
// зеленый zel~n}y
// белый bel}y
/////////////////////////////////////Ж  Ё  Л  Т  Ы  Й
static const char str1[] PROGMEM="!!!*+,!-.!/0!12!34!56"; // жёлтый
///////////////////////////////////КРАСНЫЙ
static const char str2[] PROGMEM="78!9:!;<!=>!?@!34!56";
///////////////////////////////////БЕЛЫЙ
static const char str3[] PROGMEM="AB!EF!/0!34!56";
//////////////////////////////////ЗЕЛЕНЫЙ
static const char str4[] PROGMEM="CD!EF!/0!-.!?@!34!56";
//////////////////////////////////CИНИЙ
static const char str5[] PROGMEM="=>!GH!?@!GH!56";
static const char str6[] PROGMEM="";
static char x=0;//-VGAX_WIDTH;

int rowHeight = 20;
void setup() {
   for(int i = 14; i <19; i++){
    pinMode(i, INPUT_PULLUP);
  }
  pinMode(13, OUTPUT);
  Serial.begin(9600);
 
  vga.begin();
  
  vga.clear(8);
  
 //СИНИЙ
 // vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str5, 20, rowHeight, 3);
 //ЖЁЛТЫЙ
 //vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str1, 10, rowHeight, 3);
 //КРАСНЫЙ
 //vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str2, 0, rowHeight, 1);
 //БЕЛЫЙ
 vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str3, 15, rowHeight, 2);
 //ЗЕЛЕНЫЙ
 // vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str4, 0, rowHeight, 3);
 //   vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str6, x, rowHeight*5, 3);
 // Serial.println(VGAX_HEIGHT);

 randomSeed(analogRead(5));

}

unsigned long timeLast = 0;
bool led = false;
int incomingByte = 0;
bool lastState = false;
bool nowState = false;
int score =0;
int target =1;
int level =1;
void loop() {
  if (Serial.available() > 0) {  //если есть доступные данные
        // считываем байт
        incomingByte = Serial.read()-48;
 
        // отсылаем то, что получили
        //Serial.print("I received: ");
        //Serial.println(incomingByte, DEC);

       Color(incomingByte, 3);
    }

  for(int i = 14; i < 19; i++){
    if(!digitalRead(i)){ 
      nowState = true;
      if(i-13 == target){
        score++;
        int lasttarget = target;
        while(lasttarget == target){
          target = random(4)+1;
        }        
        if(level ==1) Color(target, 3);
        else Color(target, random(3)+1);
        if (score >5) level =2;
      } 
      break;
      //Color(14-13, 3);
    }
    nowState = false;
  }
  /*
   if(lastState != nowState && lastState == false){
        
        if(nowState) Color(14-13, 1);
        else Color(14-13, 3);
    }
   else if(lastState != nowState && lastState == true)  {
     Color(14-13, 2);
     
    } 
    
    lastState == nowState;
*/
/*
  if(millis() - timeLast>= 2000){
    led = !led;
    digitalWrite(13, led);
    timeLast=millis();
    Serial.println("blynk");
  }
  */

  //for(int i = 1; i < 6;i++){
  //  Color(i, 3);
  //  delay(50000);
  //}
  /*
  if (x<100)
    vga.tone(440+x);
  else 
    vga.noTone();
  vga.clear(11);
  vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str0, x, VGAX_HEIGHT/2-3, 1);
  vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str1, x, VGAX_HEIGHT/2+4, 2);
  x++;
  if (x==VGAX_WIDTH)
    x=-VGAX_WIDTH;
  vga.delay(17);
  */
}



void Color(int x, int c){
  if(c< 1 || c > 3 || x < 1|| x > 6) return;
  switch (x){
    case 1:
    vga.clear(8);
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str1, 0, rowHeight, c);
    break;
    case 2:
    vga.clear(8);
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str2, 0, rowHeight, c);
    break;
    case 3:
    vga.clear(8);
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str3, 0, rowHeight, c);
    case 4:
    vga.clear(8);
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str4, 0, rowHeight, c);
    break;
    case 5:
    vga.clear(8);
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str5, 0, rowHeight, c);
    break;
    case 6:
    vga.clear(8);
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str6, 0, rowHeight, c);
    break;
  }
}   
