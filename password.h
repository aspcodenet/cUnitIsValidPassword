#ifndef __PASSWORD_H 
#define __PASSWORD_H

typedef enum {
    PASSWORD_ERROR_OK,
    PASSWORD_ERROR_TOO_SHORT,
    PASSWORD_ERROR_NO_UPPERCASE_LETTER,    
    PASSWORD_ERROR_NO_LOWERCASE_LETTER,
    PASSWORD_ERROR_NO_NUMBER,
    PASSWORD_ERROR_CANT_CONTAIN_CERTAIN_WORDS,
    PASSWORD_ERROR_TOO_LONG                
} PASSWORD_ERROR;

PASSWORD_ERROR  checkPassword(const char *password);

#endif