#include <stdio.h>
#include <string.h>
void LongestWord(char *sen) {
  char word[20]="";
  char buff[20]="";
  int n=0,i;
  for(i=0;i<strlen(sen);i++)
  {
      if((sen[i]>=97 && sen[i]<=122)||(sen[i]>=65 && sen[i]<=90)||(sen[i]>=48 && sen[i]<=57))
	  buff[n++]=sen[i];
      else
	    n=0;
      if(strlen(buff)>strlen(word))
            strcpy(word,buff);
  }

    printf("%s",word);
}
int main(void) { 
  LongestWord(gets(stdin));
  return 0;
}