#include <VGAX.h>

//font generated from 2BITFONT - by Sandro Maffiodo
//font generated from 2BITFONT - by Sandro Maffiodo
//font generated from 2BITFONT - by Sandro Maffiodo
#define FNT_VARNAME_HEIGHT 16
#define FNT_VARNAME_SYMBOLS_COUNT 1
//data size=16 bytes
const unsigned char fnt_varname_data[FNT_VARNAME_SYMBOLS_COUNT][1+FNT_VARNAME_HEIGHT] PROGMEM={
{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, },	//glyph '!' code=0
};
VGAX vga;
static const char str2[] PROGMEM="            !!!!!";

static char x=-VGAX_WIDTH;

void setup() {
  //Serial.begin(9600);
  vga.begin();
  vga.clear(11);
 
  vga.printPROGMEM((byte*)fnt_varname_data, FNT_VARNAME_SYMBOLS_COUNT, FNT_VARNAME_HEIGHT, 3, 1, str2, x, VGAX_HEIGHT/2-3, 1);
}
void loop() {
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
