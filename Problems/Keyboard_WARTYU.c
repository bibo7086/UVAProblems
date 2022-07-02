//
//  main.c
//  Keyboard_WARTYU
//
//  Created by Saeed Aliyu on 8/6/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>


char a[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};

char f(char letter)
{
    int i,length;
    length = strlen(a);
    for (i = 0; i <length; i++) {
        if ( a[i] == letter)
            return a[i-1];
    }
    return letter;
}
int main()
{
    char string[1000];
    int i;
    
    while (gets(string)) {
        int len = strlen(string);
        for (i = 0; i < len; i++)
            string[i] = f(string[i]);
            puts(string);
        
    }
    return 0;
}