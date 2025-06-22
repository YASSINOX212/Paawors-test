#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char password[25];
    int f;
    int u;
    int c;
    int k;
    int i;
    f = u = c = k = 0;
    printf("This is just an testing program\n");
    printf("\nYou password must have these characteristic:\nHave at least one upper case letter\nYour password must have more than 8 characters\nYour password must have at least one number\n\nWhat is your password?: "); scanf("%s", password);
    while (strlen(password) < 8) {printf("Your password is less than 8 characaters, try again: ");scanf("%s", &password);}
    for (i = 0; i < strlen(password); i++)
    {
        if (isalpha(password[i])) {f = 1;}
        if (islower(password[i])) {u = 1;}
        if (isdigit(password[i])) {c = 1;}
        if (isupper(password[i])) {k = 1;}
    }
    
    if (f == 1 && u == 1 && c == 1 && k == 1){
        printf("\n\nYou have a decent password (you maybe would want to add special characters\nTho I you can't verify it here!)");}
         else
         { printf("Your password is ASS (ง'̀-'́)"); }
    
    
    
}
    



