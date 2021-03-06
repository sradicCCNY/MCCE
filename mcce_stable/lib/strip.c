#include <stdio.h>
#include <string.h>
#include "mcce.h"

int strip(char *target, char *str)
/* get the string without the leading and ending spaces, return spaces stripped */
{  int len = strlen(str);
   int i, j;
   char spc[] = " \t";

   for (i = 0; i < len; i++) if (!strchr(spc,str[i])) break;
   for (j = strlen(str) - 1; j>=i; j--) if (!strchr(spc,str[j])) break;

   strncpy(target, str+i, (j-i)+1);
   target[j-i+1] = '\0';

   return len - (j-i) - 1;
}

