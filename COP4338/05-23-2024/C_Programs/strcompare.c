#include<stdio.h>
#include<string.h>

int main(){
  char username[50];
  char password[50];
  const char correctUsername[] = "fiukfscis";
  const char correctPassword[] = "abcxyz";

  printf("Enter username: ");
    if (fgets(username, sizeof(username), stdin) != NULL)
      username[strcspn(username, "\n")] = '\0';
  
  printf("Enter password: ");
    if (fgets(password, sizeof(password), stdin) != NULL)
      password[strcspn(password, "\n")] = '\0';

  if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0)
    printf("Congrats!\n");
  else 
    printf("Try Again\n");
    
}

