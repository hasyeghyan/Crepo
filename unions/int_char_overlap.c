#include <stdio.h>

int main() {

   union Data {
	  int intValue;
          char charValue;
   };

   union Data d = {0};
  
   d.intValue = 97;

   printf("charValue is %c\n", d.charValue);

   return 0;
}

