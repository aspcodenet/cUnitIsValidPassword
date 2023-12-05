#include <stdio.h>
#include <stdbool.h>
#include "password.h"


//MÅNGA ENHETSTESTER
// handlar det om att ANROPA EN FUNTKION MED SPECIFIKA VÄRDEN
// och VERIFIERA ATT DET BLIR RÄTT SVAR
// .-> exefil som kan köras - kör den så körs alla tester


int main(){
    char buffer[255];
    while(1){
        printf("The password tester\nEnter password:");
        fgets(buffer, sizeof(buffer), stdin);
        PASSWORD_ERROR error = checkPassword(buffer);
        switch(error){
            case PASSWORD_ERROR_OK:
                printf("OK\n");
                break;
            case PASSWORD_ERROR_TOO_SHORT:
                printf("Too short\n");
                break;
            case PASSWORD_ERROR_NO_UPPERCASE_LETTER:
                printf("No uppercase\n");
                break;
            case PASSWORD_ERROR_NO_LOWERCASE_LETTER:
                printf("No lowercase\n");
                break;
            case PASSWORD_ERROR_NO_NUMBER:
                printf("No number\n");
                break;
            case PASSWORD_ERROR_CANT_CONTAIN_CERTAIN_WORDS:
                printf("Cant contain certain words such as ....\n");
                break;
        }
    }
    return 0;
}