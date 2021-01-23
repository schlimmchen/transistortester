// table of the bits for the 7x12 character set
// each byte hold 8 bits of a row, the upper bit is 1, the bit for the 8th line is 128
//
#ifdef LCD_CYRILLIC
 #define CHAR_COUNT 0xa0
#else
 #if defined LANG_CZECH || defined LANG_SLOVAK
  #define S_caron       'S' /* (S with caron) */
  #define s_caron       's' /* (s with caron) */
  #define Z_caron       'Z' /* (Z with caron) */
  #define z_caron       'z' /* (z with caron) */
  #define C_caron       'C' /* (C with caron) */
  #define c_caron       'c' /* (c with caron) */
  #define O_acute       'O' /* (O with acute) */
  #define o_acute       'o' /* (o with acute) */
  #define A_acute       'A' /* (A with acute) */
  #define a_acute       'a' /* (a with acute) */
  #define E_acute       'E' /* (E with acute) */
  #define e_acute       'e' /* (e with acute) */
  #define U_acute       'U' /* (U with acute) */
  #define u_acute       'u' /* (u with acute) */
  #define I_acute       'I' /* (I with acute) */
  #define i_acute       'i' /* (i with acute) */
  #define Y_acute       'Y' /* (Y with acute) */
  #define y_acute       'y' /* (y with acute) */
  #define D_caron       'D' /* (D with caron) */
  #define d_caron       'd' /* (d with caron) */
  #define E_caron       'E' /* (E with caron) */
  #define e_caron       'e' /* (e with caron) */
  #define R_caron       'R' /* (R with caron) */
  #define r_caron       'r' /* (r with caron) */
  #define T_caron       'T' /* (T with caron) */
  #define t_caron       't' /* (t with caron) */
  #define N_caron       'N' /* (N with caron) */
  #define n_caron       'n' /* (n with caron) */
  #define u_above       'u' /* (u with above) */
  #define CHAR_COUNT 128
 /* ---------------------------------- */
 #elif defined LANG_FRANCAIS || defined DANISH
  // Caractères accentues francais
  #define Fr_a_grave	'a' /* (a with grave) */
  #define a_circ       'a' /* (a with circle above) */
  #define Fr_e_acute	'e' /* (e with acute) */
  #define Fr_e_circ    'e' /* (e with circle above */
  #define Fr_e_grave   'e' /* (e with grave) */
  #define o_slash	'o' /* (o with / )   */
  #define a_e          'a' /* ae */
  #define CHAR_COUNT 128
 /* ---------------------------------- */
 #elif defined LANG_POLISH
  #define A_ogonek     'A' /* (A with ogonek) */
  #define a_ogonek     'a' /* (a with ogonek) */
  #define S_acute      'S' /* (S with acute)  */
  #define s_acute      's' /* (s with acute)  */
  #define L_stroke     'L' /* (L with stroke  */
  #define l_stroke     'l' /* (l with stroke) */
  #define O_acute      'O' /* (O with acute)  */
  #define o_acute      'o' /* (o with acute)  */
  #define C_acute      'C' /* (C with acute)  */
  #define c_acute      'c' /* (c with acute)  */
  #define Z_acute      'Z' /* (Z with acute)  */
  #define z_acute      'z' /* (z with acute)  */
  #define Z_dotAbove   'z' /* (Z with dot above) */
  #define z_dotAbove	'z' /* (z with dot above) */
  #define E_ogonek     'E' /* (E with ogonek) */
  #define e_ogonek     'e' /* (e with ogonek) */
  #define N_acute      'N' /* (N with acute)  */
  #define n_acute      'n' /* (n with acute)  */
  #define CHAR_COUNT 128
/* ---------------------------------- */
 #elif defined LANG_GERMAN || defined LANG_ALBANIAN
  #define A_uml      	'A' /* (A with Umlaut) */
  #define a_uml      	'a' /* (a with Umlaut) */
  #define D_uml      	'D' /* (O with Umlaut) */
  #define o_uml      	'o' /* (o with Umlaut) */
  #define U_uml      	'U' /* (U with Umlaut) */
  #define u_uml      	'u' /* (u with Umlaut) */
  #define E_uml      	'E' /* (E with Umlaut) */
  #define e_uml      	'e' /* (e with Umlaut) */
  #define C_cedilla	'C' /* (C with cedilla)   */
  #define c_cedilla	'c' /* (c with cedilla)   */
  #define s_sharp      's' /* (sharp s)          */
  #define CHAR_COUNT 128
 #else
  #define CHAR_COUNT 128
 #endif
#endif

#define LastChar (CHAR_COUNT - 1)
                               
#if defined(MAIN_C)
const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))]={
 /* 0x00 Resistor3  */
{ 0x40,0xF0,0x10,0x10,0x10,0xF0,0x40,
  0x00,0x01,0x01,0x01,0x01,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x01 Diode1  */
{ 0x40,0xF8,0xF0,0xE0,0x40,0xF8,0x40,
  0x00,0x03,0x01,0x00,0x00,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x02 Diode2  */
{ 0x40,0xF8,0x40,0xE0,0xF0,0xF8,0x40,
  0x00,0x03,0x00,0x00,0x01,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x03  ' ' */
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x04 Capacitor  */
{ 0x40,0xFC,0xFC,0x00,0xFC,0xFC,0x40,
  0x00,0x07,0x07,0x00,0x07,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x05  ' ' */
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x06 Resistor2  */
{ 0x40,0xF8,0x08,0x08,0x08,0x08,0x08,
  0x00,0x03,0x02,0x02,0x02,0x02,0x02
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x07 Resistor1  */
{ 0x08,0x08,0x08,0x08,0x08,0xF8,0x40,
  0x02,0x02,0x02,0x02,0x02,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x08  Line1 */
{ 0x40,0x40,0x40,0x40,0x40,0x40,0x40,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x09  Inductor1 */
{ 0x40,0x40,0xC0,0x00,0x00,0x80,0x00,
  0x00,0x00,0x01,0x02,0x02,0x01,0x02
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x0a  Inductor2 */
{ 0x00,0x80,0x00,0x00,0xC0,0x40,0x40,
  0x02,0x01,0x02,0x02,0x01,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x0b  ' ' */
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x0c Beta  */ 
{ 0x00,0xFC,0x02,0x12,0x12,0xEC,0x00,
  0x0E,0x03,0x00,0x01,0x01,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x0d Omega  */
{ 0xE0,0x10,0x10,0x10,0xE0,0x00,0x00,
  0x04,0x07,0x00,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x0e mu  */
{ 0x00,0xF8,0x00,0x00,0xF0,0x00,0x00,
  0x0E,0x01,0x02,0x01,0x03,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x0f  ' ' */
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */


 #if defined LANG_FRANCAIS || LANG_DANISH
 /* 0x10 Fr_a_grave */  
 { 0xC0,0x28,0x29,0x4A,0xF0,0x00,0x00,
   0x03,0x04,0x04,0x04,0x03,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x11 Fr_a_circ */  
 { 0xC0,0x2A,0x29,0x4A,0xF0,0x00,0x00,
   0x03,0x04,0x04,0x04,0x03,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x12 Fr_e_aigu */
 { 0xE0,0x90,0x8A,0x89,0x90,0xE0,0x00,
   0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x13 Fr_e_circ */
 { 0xE0,0x92,0x89,0x8A,0x90,0xE0,0x00,
   0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x14 Fr_e_grave */
 { 0xE0,0x90,0x89,0x8A,0x90,0xE0,0x00,
   0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 

 /* 0x15  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x16  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x17  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x18  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x19  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1a  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1b  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1c  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1d  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1e  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1f  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 

 #elif defined LANG_CZECH || LANG_SLOVAK
/*----------------------------------------------------*/ 
 /* 0x10 Cz_a */  
{ 0xC0,0x28,0x2A,0x49,0xF0,0x00,0x00,
  0x03,0x04,0x04,0x04,0x03,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x11 Cz_c */
{ 0xE0,0x11,0x0A,0x0A,0x11,0x38,0x00,
  0x01,0x02,0x04,0x04,0x04,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x12 Cz_d*/ 
{ 0xF0,0x08,0x08,0x10,0xFE,0x04,0x03,
  0x03,0x04,0x04,0x04,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x13 Cz_e */
{ 0xE0,0x90,0x8A,0x89,0x90,0xE0,0x00,
  0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x14 ,Cz_ee */  
{ 0xE0,0x91,0x8A,0x8A,0x91,0xE0,0x00,
  0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x15 Cz_i */
{ 0x00,0x00,0x10,0xF4,0x02,0x00,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x16 Cz_n */
{ 0x08,0xF9,0x12,0x0A,0x09,0xF0,0x00,
  0x04,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x17  Cz_o */  
{ 0xE0,0x10,0x08,0x0A,0x11,0xE0,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x18  Cz_r */  
{ 0x08,0xF9,0x22,0x12,0x09,0x30,0x00,
  0x04,0x07,0x04,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x19  Cz_s */  
{ 0x30,0x49,0x4A,0x4A,0x91,0x38,0x00,
  0x02,0x04,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1a  Cz_t */  
{ 0x00,0x10,0xFE,0x10,0x04,0x03,0x00,
  0x00,0x00,0x03,0x04,0x04,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1b  Cz_u */  
{ 0xF8,0x00,0x02,0x01,0xF8,0x08,0x00,
  0x03,0x04,0x04,0x02,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1c  Cz_uu */  
{ 0xF8,0x02,0x05,0x02,0xF8,0x08,0x00,
  0x03,0x04,0x04,0x02,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1d  Cz_y */  
{ 0x08,0xF8,0x00,0x02,0xF9,0x08,0x00,
  0x00,0x09,0x0A,0x0A,0x07,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
/* 0x1e  Cz_z */  
{ 0x18,0x09,0x8A,0x4A,0x29,0x18,0x00,
  0x06,0x05,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
/* 0x1f  Cz_Z */  
{ 0x06,0x83,0x42,0x22,0x13,0x0E,0x00,
  0x07,0x04,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	
/*----------------------------------------------------*/ 
// #elif defined LANG_SERBIAN || LANG_CROATIAN || LANG_SLOWENIAN || LANG_BOSNIAN 
/*----------------------------------------------------*/ 
// #elif defined LANG_POLISH
/*----------------------------------------------------*/ 
// #elif defined LANG_GERMAN || LANG_ALBANIAN
/*----------------------------------------------------*/ 
// #elif defined LANG_HUNGARIAN
/*----------------------------------------------------*/ 
// #elif defined LANG_ROMANIAN
/*----------------------------------------------------*/ 
 #else
 /* 0x10 Cyr_tsch */
{ 0x08,0xF8,0x00,0x00,0xF8,0x08,0x00,
  0x00,0x00,0x01,0x05,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x11 Cyr_sch */
{ 0xF8,0x00,0xF0,0x00,0xF8,0x00,0x00,
  0x07,0x04,0x07,0x04,0x07,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x12 Cyr_hh */
{ 0x38,0x08,0xF8,0x40,0x20,0xC0,0x00,
  0x00,0x04,0x07,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x13 Cyr_y */
{ 0xF8,0x40,0x20,0xC0,0x00,0xF8,0x00,
  0x07,0x04,0x04,0x03,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x14 Cyr_ww */
{ 0x08,0xF8,0x40,0x20,0x20,0xC0,0x00,
  0x04,0x07,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x15 Cyr_e */
{ 0x38,0x10,0x48,0x48,0x50,0xE0,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x16 Cyr_ju */
{ 0xF8,0x40,0xF0,0x08,0x08,0xF0,0x00,
  0x07,0x00,0x03,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x17 Cyr_ja */
{ 0x70,0x88,0x88,0x88,0xF0,0x08,0x00,
  0x04,0x06,0x01,0x00,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x18 Cry_D */  
 { 0x00,0xF8,0x04,0x02,0xFE,0x02,0x00,
   0x0C,0x07,0x04,0x04,0x07,0x0C,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x19 Cyr_C */
 { 0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,
   0x07,0x04,0x04,0x04,0x07,0x0C,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1a Cyr_Schtsch*/ 
 { 0xFE,0x00,0xFE,0x00,0xFE,0x00,0x00,
   0x07,0x04,0x07,0x04,0x07,0x0C,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1b Cyr_d */
 { 0x00,0xE0,0x10,0x08,0xF8,0x08,0x00,
   0x0C,0x07,0x04,0x04,0x07,0x0C,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1c ,Cyr_f */  
 { 0xE0,0x14,0xFC,0x14,0xE0,0x00,0x00,
   0x01,0x0A,0x0F,0x0A,0x01,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1d Cyr_c */
 { 0xF8,0x00,0x00,0x00,0xF8,0x00,0x00,
   0x07,0x04,0x04,0x04,0x07,0x0C,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1e Cyr_scht */
 { 0xF8,0x00,0xF8,0x00,0xF8,0x00,0x00,
   0x07,0x04,0x07,0x04,0x07,0x0C,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x1f  */  
 { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
   0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
 #endif
	 
 /* 0x20 ' ' */  
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x21 '!' */  
{ 0x00,0x00,0x3C,0xFE,0x3C,0x00,0x00,
  0x00,0x00,0x00,0x1B,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x22 '"' */  
{ 0x00,0x16,0x0E,0x00,0x16,0x0E,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x23 '#' */  
{ 0x08,0xFE,0x08,0x08,0xFE,0x08,0x00,
  0x01,0x07,0x01,0x01,0x07,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x24 '$' */  
{ 0x38,0xFE,0x44,0x84,0xFE,0x08,0x00,
  0x04,0x1F,0x08,0x08,0x1F,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x25 '%' */  
{ 0x1C,0x14,0x9C,0x40,0x20,0x18,0x00,
  0x06,0x01,0x00,0x0E,0x0A,0x0E,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x26 '&' */  
{ 0x88,0x54,0x22,0x54,0x88,0xC0,0x00,
  0x03,0x04,0x04,0x02,0x01,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x27 ''' */  
{ 0x00,0x00,0x16,0x0E,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x28 '(' */  
{ 0xF0,0x08,0x04,0x02,0x02,0x00,0x00,
  0x03,0x04,0x08,0x10,0x10,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x29 ')' */  
{ 0x00,0x02,0x02,0x04,0x08,0xF0,0x00,
  0x00,0x10,0x10,0x08,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x2a '*' */  
{ 0x48,0x50,0xE0,0xE0,0x50,0x48,0x00,
  0x02,0x01,0x00,0x00,0x01,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x2b '+' */  
{ 0x00,0x40,0x40,0xF0,0x40,0x40,0x00,
  0x00,0x00,0x00,0x01,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x2c ',' */  
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x16,0x0E,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x2d '-' */  
{ 0x40,0x40,0x40,0x40,0x40,0x40,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x2e '.' */  
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x06,0x06,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x2f '/' */  
{ 0x00,0x00,0x80,0x40,0x20,0x10,0x00,
  0x02,0x01,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x30 '0' */  
{ 0xF8,0x04,0x02,0x02,0x04,0xF8,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x31 '1' */  
{ 0x00,0x08,0x04,0xFE,0x02,0x00,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x32 '2' */  
{ 0x08,0x04,0x82,0x42,0x24,0x18,0x00,
  0x06,0x05,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x33 '3' */  
{ 0x06,0x02,0x12,0x12,0x2A,0xC6,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x34 '4' */  
{ 0xE0,0x98,0x86,0x80,0xF8,0x80,0x00,
  0x00,0x00,0x00,0x04,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x35 '5' */  
{ 0x3E,0x22,0x12,0x12,0x22,0xC6,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x36 '6' */  
{ 0xF8,0x24,0x12,0x12,0x22,0xC0,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x37 '7' */  
{ 0x06,0x02,0xC2,0x62,0x32,0x1E,0x00,
  0x00,0x00,0x07,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x38 '8' */  
{ 0x88,0x54,0x22,0x22,0x54,0x88,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x39 '9' */  
{ 0x38,0x44,0x82,0x82,0x44,0xF8,0x00,
  0x00,0x04,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x3a ':' */  
{ 0x00,0x00,0x30,0x30,0x00,0x00,0x00,
  0x00,0x00,0x06,0x06,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x3b ';' */  
{ 0x00,0x00,0x30,0x30,0x00,0x00,0x00,
  0x00,0x00,0x0A,0x06,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x3c '<' */  
{ 0x00,0x40,0xA0,0x10,0x08,0x04,0x00,
  0x00,0x00,0x00,0x01,0x02,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x3d '=' */  
{ 0x20,0x20,0x20,0x20,0x20,0x20,0x00,
  0x01,0x01,0x01,0x01,0x01,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x3e '>' */  
{ 0x00,0x04,0x08,0x10,0xA0,0x40,0x00,
  0x00,0x04,0x02,0x01,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x3f '?' */  
{ 0x18,0x04,0x82,0x42,0x24,0x18,0x00,
  0x00,0x00,0x0D,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x40 '@' */  
{ 0xF8,0x04,0x62,0x92,0x94,0xF8,0x00,
  0x01,0x02,0x04,0x04,0x04,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x41 'A' */  
{ 0x00,0xF8,0x84,0x82,0x84,0xF8,0x00,
  0x00,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x42 'B' */  
{ 0x02,0xFE,0x22,0x22,0x22,0xDC,0x00,
  0x04,0x07,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x43 'C' */  
{ 0xF8,0x04,0x02,0x02,0x04,0x0E,0x00,
  0x01,0x02,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x44 'D' */  
{ 0x02,0xFE,0x02,0x02,0x04,0xF8,0x00,
  0x04,0x07,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x45 'E' */  
{ 0x02,0xFE,0x22,0x72,0x02,0x06,0x00,
  0x04,0x07,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x46 'F' */  
{ 0x02,0xFE,0x22,0x72,0x02,0x06,0x00,
  0x04,0x07,0x04,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x47 'G' */  
{ 0xF8,0x04,0x02,0x82,0x84,0x8E,0x00,
  0x01,0x02,0x04,0x04,0x02,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x48 'H' */  
{ 0x00,0xFE,0x20,0x20,0x20,0xFE,0x00,
  0x00,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x49 'I' */  
{ 0x00,0x00,0x02,0xFE,0x02,0x00,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x4a 'J' */  
{ 0x00,0x00,0x00,0x02,0xFE,0x02,0x00,
  0x00,0x02,0x04,0x04,0x03,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x4b 'K' */  
{ 0x02,0xFE,0x22,0xF0,0x9C,0x06,0x00,
  0x04,0x07,0x04,0x00,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x4c 'L' */  
{ 0x02,0xFE,0x02,0x00,0x00,0x00,0x00,
  0x04,0x07,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x4d 'M' */  
{ 0x00,0xFE,0x1C,0x70,0x1C,0xFE,0x00,
  0x00,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x4e 'N' */  
{ 0xFE,0x1C,0x70,0xC0,0xFE,0x00,0x00,
  0x07,0x00,0x00,0x01,0x07,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x4f 'O' */  
{ 0xF8,0x04,0x02,0x02,0x04,0xF8,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x50 'P' */  
{ 0x02,0xFE,0x42,0x42,0x42,0x3C,0x00,
  0x04,0x07,0x04,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x51 'Q' */  
{ 0xF8,0x04,0x02,0x02,0x04,0xF8,0x00,
  0x01,0x02,0x04,0x05,0x02,0x05,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x52 'R' */  
{ 0x02,0xFE,0x42,0xC2,0x42,0x3C,0x00,
  0x04,0x07,0x00,0x00,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x53 'S' */  
{ 0x0C,0x12,0x22,0x22,0x44,0x8E,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x54 'T' */  
{ 0x00,0x0E,0x02,0xFE,0x02,0x0E,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x55 'U' */  
{ 0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,
  0x00,0x03,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x56 'V' */  
{ 0x00,0x7E,0xC0,0x00,0xC0,0x7E,0x00,
  0x00,0x00,0x01,0x07,0x01,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x57 'W' */  
{ 0x00,0xFE,0x80,0xF8,0x80,0xFE,0x00,
  0x00,0x01,0x07,0x01,0x07,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x58 'X' */  
{ 0x8E,0xD8,0x70,0x70,0xD8,0x8E,0x00,
  0x07,0x00,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x59 'Y' */  
{ 0x3E,0x60,0xC0,0x60,0x3E,0x00,0x00,
  0x00,0x04,0x07,0x04,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x5a 'Z' */  
{ 0x06,0x82,0x42,0x22,0x12,0x0E,0x00,
  0x07,0x04,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x5b '[' */  
{ 0x00,0xFE,0x02,0x02,0x02,0x00,0x00,
  0x00,0x0F,0x08,0x08,0x08,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x5c '\' */  
{ 0x08,0x10,0x20,0x40,0x80,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x01,0x02
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x5d ']' */  
{ 0x00,0x02,0x02,0x02,0xFE,0x00,0x00,
  0x00,0x08,0x08,0x08,0x0F,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x5e '^' */  
{ 0x00,0x08,0x04,0x02,0x04,0x08,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x5f '_' */  
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x08,0x08,0x08,0x08,0x08,0x08,0x08
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x60 '`' */  
{ 0x00,0x00,0x0E,0x16,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x61 'a' */  
{ 0xC0,0x28,0x28,0x48,0xF0,0x00,0x00,
  0x03,0x04,0x04,0x04,0x03,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x62 'b' */  
{ 0x02,0xFE,0x12,0x08,0x08,0xF0,0x00,
  0x04,0x07,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x63 'c' */  
{ 0xE0,0x10,0x08,0x08,0x10,0x38,0x00,
  0x01,0x02,0x04,0x04,0x04,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x64 'd' */  
{ 0xF0,0x08,0x08,0x10,0xFE,0x02,0x00,
  0x03,0x04,0x04,0x04,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x65 'e' */  
{ 0xE0,0x90,0x88,0x88,0x90,0xE0,0x00,
  0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x66 'f' */  
{ 0x00,0x10,0xFC,0x12,0x12,0x04,0x00,
  0x00,0x04,0x07,0x04,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x67 'g' */  
{ 0xF0,0x08,0x08,0x08,0xF0,0x08,0x00,
  0x01,0x0A,0x0A,0x09,0x07,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x68 'h' */  
{ 0x02,0xFE,0x10,0x08,0x08,0xF0,0x00,
  0x04,0x07,0x04,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x69 'i' */  
{ 0x00,0x00,0x16,0xF6,0x00,0x00,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x6a 'j' */  
{ 0x00,0x00,0x00,0x16,0xF6,0x00,0x00,
  0x00,0x04,0x08,0x08,0x07,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x6b 'k' */  
{ 0x02,0xFE,0x40,0xF0,0x98,0x08,0x00,
  0x04,0x07,0x04,0x00,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x6c 'l' */  
{ 0x00,0x00,0x02,0xFE,0x00,0x00,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x6d 'm' */  
{ 0x08,0xF8,0x08,0xF0,0x08,0xF0,0x00,
  0x04,0x07,0x00,0x07,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x6e 'n' */  
{ 0x08,0xF8,0x10,0x08,0x08,0xF0,0x00,
  0x04,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x6f 'o' */  
{ 0xE0,0x10,0x08,0x08,0x10,0xE0,0x00,
  0x01,0x02,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x70 'p' */  
{ 0x08,0xF0,0x08,0x08,0x08,0xF0,0x00,
  0x08,0x0F,0x09,0x02,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x71 'q' */  
{ 0xF0,0x08,0x08,0x08,0xF0,0x08,0x00,
  0x01,0x02,0x02,0x09,0x0F,0x08,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x72 'r' */  
{ 0x08,0xF8,0x20,0x10,0x08,0x30,0x00,
  0x04,0x07,0x04,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x73 's' */  
{ 0x30,0x48,0x48,0x48,0x90,0x38,0x00,
  0x02,0x04,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x74 't' */  
{ 0x00,0x10,0xFE,0x10,0x10,0x00,0x00,
  0x00,0x00,0x03,0x04,0x04,0x02,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x75 'u' */  
{ 0xF8,0x00,0x00,0x00,0xF8,0x08,0x00,
  0x03,0x04,0x04,0x02,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x76 'v' */  
{ 0x78,0xC0,0x00,0xC0,0x78,0x00,0x00,
  0x00,0x01,0x07,0x01,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x77 'w' */  
{ 0xF8,0x80,0xF0,0x80,0xF8,0x00,0x00,
  0x01,0x07,0x01,0x07,0x01,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x78 'x' */  
{ 0x18,0xB0,0xC0,0xC0,0xB0,0x18,0x00,
  0x06,0x03,0x00,0x00,0x03,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x79 'y' */  
{ 0x08,0xF8,0x00,0x00,0xF8,0x08,0x00,
  0x00,0x09,0x0A,0x0A,0x07,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x7a 'z' */
{ 0x18,0x08,0x88,0x48,0x28,0x18,0x00,
  0x06,0x05,0x04,0x04,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x7b '{' */  
{ 0x00,0x40,0xA0,0x1C,0x02,0x02,0x00,
  0x00,0x00,0x00,0x07,0x08,0x08,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x7c '|' */     
{ 0x00,0x00,0x00,0x3E,0x00,0x00,0x00,
  0x00,0x00,0x00,0x1F,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x7d '}' */  
{ 0x00,0x02,0x02,0x1C,0xA0,0x40,0x00,
  0x00,0x08,0x08,0x07,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x7e '~' */  
{ 0x04,0x06,0x02,0x06,0x04,0x06,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */
	
 /* 0x7f  */ 
{ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */

 #if defined LANG_CZECH || defined LANG_SLOVAK
 #elif defined LANG_POLISH 
 #elif defined LCD_CYRILLIC                                                              
 /* 0x80 Cyr_B  */
{ 0x02,0xFE,0x22,0x12,0x12,0xE6,0x00,
  0x04,0x07,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x81 Cyr_G  */
{ 0x02,0xFE,0x02,0x02,0x02,0x06,0x00,
  0x04,0x07,0x04,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x82 Cyr_Jo  */
{ 0x16,0xF6,0x90,0xD0,0x16,0x36,0x00,
  0x04,0x07,0x04,0x05,0x04,0x06,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x83 Cyr_Tsch  */
{ 0x00,0xDE,0x70,0xFE,0x70,0xDE,0x00,
  0x00,0x07,0x00,0x07,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x84 Cyr_Z  */
{ 0x0E,0x04,0x22,0x22,0x54,0x88,0x00,
  0x02,0x04,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x85 Cyr_I  */
{ 0x00,0xFE,0xC0,0x70,0x1C,0xFE,0x00,
  0x00,0x07,0x01,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x86 Cyr_J  */
{ 0x00,0xF8,0x82,0xC6,0x62,0xF8,0x00,
  0x00,0x07,0x01,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x87 Cyr_L  */
{ 0x00,0xF8,0x04,0x02,0xFE,0x02,0x00,
  0x04,0x07,0x00,0x04,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x88 Cyr_P  */
{ 0x00,0xFE,0x02,0x02,0x02,0xFE,0x00,
  0x00,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x89 Cyr_U  */
{ 0x02,0x3E,0x40,0x40,0xFE,0x02,0x00,
  0x00,0x02,0x04,0x04,0x03,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x8a Cyr_F */
{ 0xE0,0x10,0x0A,0xFE,0x0A,0x10,0xE0,
  0x00,0x01,0x0A,0x0F,0x0A,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x8b Cyr_Tsch */
{ 0x02,0x7E,0x80,0x42,0xFE,0x02,0x00,
  0x00,0x00,0x00,0x04,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x8c Cyr_Sch */
{ 0x00,0xFE,0x00,0xFE,0x00,0xFE,0x00,
  0x00,0x07,0x04,0x07,0x04,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x8d Cyr_HH */
{ 0x02,0xFE,0x42,0x20,0x20,0xC0,0x00,
  0x04,0x07,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x8e Cyr_Y */
{ 0xFE,0x40,0x20,0xC0,0x00,0xFE,0x00,
  0x07,0x04,0x04,0x03,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x8f Cyr_E */
{ 0x0E,0x04,0x72,0x22,0x24,0xF8,0x00,
  0x02,0x04,0x04,0x04,0x02,0x01,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x90 Cyr_Ju */
{ 0xFE,0x20,0xFC,0x02,0x02,0xFC,0x00,
  0x07,0x00,0x03,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x91 Cyr_Ja */
{ 0x3C,0x42,0xC2,0x42,0xFE,0x02,0x00,
  0x04,0x07,0x01,0x00,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x92 Cyr_b */
{ 0x00,0xF0,0x48,0x24,0x26,0xC2,0x00,
  0x00,0x03,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x93 Cyr_v */
{ 0x08,0xF8,0x48,0x48,0x48,0xB0,0x00,
  0x04,0x07,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x94 Cyr_g */
{ 0x08,0xF8,0x08,0x08,0x08,0x18,0x00,
  0x04,0x07,0x04,0x00,0x00,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x95 Cyr_jo */
{ 0xC6,0xA6,0x90,0x90,0xA6,0xC6,0x00,
  0x01,0x02,0x04,0x04,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x96 Cyr_zsch */
{ 0x00,0xB8,0xC0,0xF8,0xC0,0xB8,0x00,
  0x00,0x07,0x00,0x07,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x97 Cyr_z */
{ 0x38,0x10,0x08,0x48,0xA8,0x10,0x00,
  0x03,0x04,0x04,0x04,0x04,0x03,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x98 Cyr_i */
{ 0x00,0xF8,0x80,0xC0,0x60,0xF8,0x00,
  0x00,0x07,0x01,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x99 Cyr_j */
{ 0x00,0xF0,0x00,0x8C,0xC6,0xF0,0x00,
  0x00,0x07,0x03,0x01,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x9a Cyr_k */
{ 0x08,0xF8,0x48,0xE0,0x38,0x08,0x00,
  0x04,0x07,0x04,0x01,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x9b Cyr_l */
{ 0x00,0xE0,0x10,0x08,0xF8,0x08,0x00,
  0x04,0x07,0x00,0x04,0x07,0x04,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x9c Cyr_m */
{ 0x00,0xF8,0x70,0xC0,0x70,0xF8,0x00,
  0x00,0x07,0x00,0x01,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x9d Cyr_n */
{ 0x00,0xF8,0x40,0x40,0x40,0xF8,0x00,
  0x00,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x9e Cyr_p */
{ 0x00,0xF8,0x08,0x08,0x08,0xF8,0x00,
  0x00,0x07,0x00,0x00,0x00,0x07,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 /* 0x9f Cyr_t */
{ 0x00,0x38,0x08,0xF8,0x08,0x38,0x00,
  0x00,0x00,0x04,0x07,0x04,0x00,0x00
    },  /* x=0, y=0, w=7, h=16 */ 
	 
 #endif 
};
#else
 #ifndef __ASSEMBLER__
extern const unsigned char PROGMEM font[CHAR_COUNT][(FONT_WIDTH * ((FONT_HEIGHT + 7)/8))];
 #endif
#endif 
