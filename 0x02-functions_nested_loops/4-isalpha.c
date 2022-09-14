#include "main.h"

/** 
*
*main : check is letter is capital
*
*Description : A program to check if the letter is capital
*
*return : 1 on success and 0 on failure
*/

int _isalpha(int c) {

    if(c >= 'A' &&  c <= 'Z')
    {
        return 1 ;

    }else if (c >= 'a' && c <= 'z')
    {
        return 1 ;
    }else
    {
        return 0 ;
    }

}
