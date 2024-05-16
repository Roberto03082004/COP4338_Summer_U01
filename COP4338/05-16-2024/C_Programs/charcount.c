#include<stdio.h>
int main(){

  char ch;
  printf("Enter characters (CRTL + D to EOF): ");
  //ch=getchar();
  int nc = 0, nw =0, nl=0;
  while ((ch = getchar()) != EOF){ 
    nc++;
    putchar(ch);
    if(ch == '\n')
      nl++;
    if(ch == ' ' || ch == '\t' || ch == '\n')
      nw++;
    //ch = getchar();
  }
  printf("You entered %d characters %d words %d lines\n", nc, nw, nl);



}
