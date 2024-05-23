#include<stdio.h>
#include<string.h>
int main(){
  char fname[50];
  char sname[50];

  printf("Enter First Name: ");
  fgets(fname,sizeof(fname),stdin);
  printf("Enter Last Name: ");
  fgets(sname,sizeof(sname), stdin);

  printf("Length of Firstname = %lu\n", strlen(fname));
  char cpy[50];
  strcpy(cpy, sname);
  printf("");



  return 0;
}
