
#include "VGAX.h"

//font generated from BITFONZI - by Sandro Maffiodo
#define FNT_NANOFONT_HEIGHT 20
#define FNT_NANOFONT_SYMBOLS_COUNT 50

#define BTN_R 14
#define BTN_G 15
#define BTN_B 16
#define BTN_Y 17

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
//0
{ 7,0,0,0,60,126,231,195,195,195,195,195,195,195,195,195,195,231,126,60},  //glyph 'I' code=40
//1
{ 4, 0,0,0,24,56,120,216,152,24,24,24,24,24,24,24,24,24,24,24 },  //glyph 'J' code=41
//2
{ 7, 0,0,0,56,126,199,195,3,3,3,6,12,24,56,112,224,192,255,255 }, //glyph 'K' code=42
//3
{ 7, 0,0,0,56,126,199,195,3,3,3,30,28,2,3,3,3,198,254,124 }, //glyph 'L' code=43
//4
{ 7, 0,0,0,195,195,195,195,195,227,255,127,3,3,3,3,3,3,3,3 }, //glyph 'M' code=44
//5
{ 7, 0,0,0,255,255,192,192,192,224,254,127,3,3,3,3,3,7,254,252 }, //glyph 'N' code=45
//6
{ 7, 0,0,0,62,126,224,192,192,224,254,255,231,195,195,195,195,231,254,124 }, //glyph 'O' code=46
//7
{ 7, 0,0,0,255,255,1,1,3,6,6,12,12,24,24,48,48,96,96,96 }, //glyph 'P' code=47
//8
{ 7, 0,0,0,60,126,231,195,195,195,102,60,126,231,195,195,195,231,126,60 },  //glyph 'Q' code=48
//9
{ 7, 0,0,0,60,126,231,195,195,195,231,127,63,3,3,3,3,7,62,60 }, //glyph 'R' code=49
};

VGAX vga;
// желтый g~lt}y
// синий siniy
// красный krasn}y
// зеленый zel~n}y
// белый bel}y
/////////////////////////////////////Ж  Ё  Л  Т  Ы  Й
static const char str1[] PROGMEM="!!!!*+,!-.!/0!12!34!56"; // жёлтый
///////////////////////////////////КРАСНЫЙ
static const char str2[] PROGMEM="!78!9:!;<!=>!?@!34!56";
///////////////////////////////////БЕЛЫЙ
static const char str3[] PROGMEM="AB!EF!/0!34!56";
//////////////////////////////////ЗЕЛЕНЫЙ
static const char str4[] PROGMEM="CD!EF!/0!-.!?@!34!56";
//////////////////////////////////CИНИЙ
static const char str5[] PROGMEM="=>!GH!?@!GH!56";
/////////////////////////////////СТАРТ
static const char str6[] PROGMEM="!!!!!!!!!!=>!12!;<!9:!12";
/////////////////////////////////ИЗ
static const char strX[] PROGMEM="!!!!GH!CD";
static const char str00[] PROGMEM="!I!";
static const char str11[] PROGMEM="!J!";
static const char str22[] PROGMEM="!K!";
static const char str33[] PROGMEM="!L!";
static const char str44[] PROGMEM="!M!";
static const char str55[] PROGMEM="!N!";
static const char str66[] PROGMEM="!O!";
static const char str77[] PROGMEM="!P!";
static const char str88[] PROGMEM="!Q!";
static const char str99[] PROGMEM="!R!";
static char x=0;//-VGAX_WIDTH;

int rowHeight = 20;
void setup() {
   for(int i = 14; i <18; i++){
    pinMode(i, INPUT_PULLUP);
  }
  pinMode(13, OUTPUT);
  //Serial.begin(9600);
 
  vga.begin();
  
  vga.clear(8);
  
 //СИНИЙ
 // vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str5, 20, rowHeight, 3);
 //ЖЁЛТЫЙ
// vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str1, 10, rowHeight, 3);
 //КРАСНЫЙ
 //vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str2, 0, rowHeight, 1);
 //БЕЛЫЙ
 vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str3, 15, rowHeight, 2);
 //Color(3,3,3);
 Start();

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
int mistake =0;
int lastMistake =14;
int target =1;
int level =1;
bool game = false;
void loop() {
  /*
  if (Serial.available() > 0) {  //если есть доступные данные
        // считываем байт
        incomingByte = Serial.read()-48;
 
        // отсылаем то, что получили
        //Serial.print("I received: ");
        //Serial.println(incomingByte, DEC);

       Color(incomingByte, 3);
    }
*/
  for(int i = 14; i < 18; i++){
    if(!digitalRead(i)){ 
      if(!game){
        game = true;
        score =0;
        mistake =0;
        target = random(4)+1;
        Color(target, 3,0);
      } 
      nowState = true;
    //  Serial.println(i);
      if(i-13 == target){
        lastMistake=i;
        score++;
        int lasttarget = target;
        while(lasttarget == target){
          target = random(4)+1;
        }        
         if(level ==1) Color(target, 3,0);
        else if(level ==2) Color(target, random(3)+1,8);
        else Color(target, random(3)+1,random(3)+9);
        if (score >5 && score < 10) level =2;
        else if( score >= 10 && score <15 )level = 3;
        else if(score >= 15){
          unsigned long nowtime = millis();
         X(score-mistake);
         vga.delay(5000);
         
          level =1;
          score =0;
          game = false;
          mistake=0;
          Start();
         
        
        }
      }
      else{
        if(i != lastMistake){
          lastMistake = i;
          mistake++;
          //Serial.print("mitake  ");
         // Serial.println(mistake);
          vga.delay(500);
        }
        
      } 
      break;
      //Color(14-13, 3);
    }
    nowState = false;
  }
 
}



void Color(int x, int c, int bg){
  if(c< 1 || c > 3 || x < 1|| x > 6) return;
  if(bg - 8 == c) bg--;
 vga.clear(bg);//8-черный 11-желтый 10 - красный 9- зеленый
  if(x==1){
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str1, 0, rowHeight, c);
  }
  else if(x==2){
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str2, 0, rowHeight, c);
  }
  else if(x==3){
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str5, 0, rowHeight, c);
  }
  else if(x==4){
     vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str4, 0, rowHeight, c);
  }

}   

void Start(){
  vga.clear(8);//8-черный 11-желтый 10 - красный 9- зеленый
  
    vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str6, 0, rowHeight, 3);

}

void X(int chislo){
  int des = -1;
 
  if(chislo>9){
    des = chislo/10;
    chislo = chislo%10;    
  }
  vga.clear(8);//8-черный 11-желтый 10 - красный 9- зеленый
  if(des != -1){
    if(des == 1)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str11,x+ VGAX_WIDTH/2-55, VGAX_HEIGHT/2-rowHeight, 3);
    else if(des == 2)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str22,x+ VGAX_WIDTH/2-55, VGAX_HEIGHT/2-rowHeight, 3);
    else if(des == 3)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str33,x+ VGAX_WIDTH/2-55, VGAX_HEIGHT/2-rowHeight, 3);
    else if(des == 4)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str44,x+ VGAX_WIDTH/2-55, VGAX_HEIGHT/2-rowHeight, 3);
  }
  if(chislo == 1)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str11,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 2)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str22,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 3)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str33,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 4)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str44,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 5)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str55,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 6)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str66,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 7)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str77,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 8)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str88,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 9)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str99,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
  else if(chislo == 0)vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str00,x+ VGAX_WIDTH/2-45, VGAX_HEIGHT/2-rowHeight, 3);
 vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, strX,x+ VGAX_WIDTH/2-30, VGAX_HEIGHT/2-rowHeight, 3);
 vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str11,x+ VGAX_WIDTH/2+25, VGAX_HEIGHT/2-rowHeight, 3);
 vga.printPROGMEM((byte*)fnt_nanofont_data, FNT_NANOFONT_SYMBOLS_COUNT, FNT_NANOFONT_HEIGHT, 3, 1, str55,x+ VGAX_WIDTH/2+35, VGAX_HEIGHT/2-rowHeight, 3);

}
