#include <stdio.h>
int main(){
  char name[20];
  int count=0,i;
  printf("\n Enter name: ");
  gets(name);
  for(i=0;name[i]!='\0';i++)
  {
    count++;
  }
  printf("\n Length of string : %d",count);
  return 0;
  }