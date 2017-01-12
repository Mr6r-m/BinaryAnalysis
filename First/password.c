#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bmod(int secret) {
    printf("This is the second flag\n");
    return 0;
}

int main(void) {
    char pass[100];
    int secret = 0;

    printf("Enter the password:");
    scanf("%s", &pass);
    printf("%s\n",pass);

    if(strcmp(pass, "password")==0) {
        printf("That's an awesome password!!!\n");
        return 0;
    } else if(strcmp(pass,"Reversing") == 0) {
        printf("Good find\n");
        return 0;
    } else {
        printf("Brush up on some binary analysis skills\n");
        return 0;
    }

    if(secret)
        bmod(secret);

    }


