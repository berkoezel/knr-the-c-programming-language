#include <stdio.h>

int main() {

   /*
    * sc -> signed char, sct -> signed char tmp, etc...
    */

   signed char sc = 0, sct = 0;
   unsigned char uc = 0, uct = 0;
   signed short ss = 0, sst = 0;
   unsigned short us = 0, ust = 0;
   signed int si = 0, sit = 0;
   unsigned int ui = 0, uit = 0;
   signed long sl = 0, slt = 0;
   unsigned long ul = 0, ult = 0;

   do { sct = sc; sc++; }while(sc > sct);
   printf("Limits of signed char are: %d <-> %d\n", sc, sct);

   do { uct = uc; uc++; }while(uc > uct);
   printf("Limits of unsigned char are: %d <-> %d\n", uc, uct);
 
   do { sst = ss; ss++; }while(ss > sst);
   printf("Limits of signed short are: %d <-> %d\n", ss, sst);
 
   do { ust = us; us++; }while(us > ust);
   printf("Limits of unsigned short are: %d <-> %d\n", us, ust);
 
   do { sit = si; si++; }while(si > sit);
   printf("Limits of signed int are: %d <-> %d\n", si, sit);

   do { uit = ui; ui++; }while(ui > uit);
   printf("Limits of unsigned int are: %u <-> %u\n", ui, uit);

   do { slt = sl; sl++; }while(sl > slt);
   printf("Limits of signed long are: %ld <-> %ld\n", sl, slt);

   do { ult = ul; ul++; }while(ul > ult);
   printf("Limits of unsigned long are: %ld <-> %ld\n", ul, ult);

return 0;
}
