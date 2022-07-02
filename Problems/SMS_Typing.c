//
//  main.c
//  SMS_Typing
//
//  Created by Saeed Aliyu on 7/22/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define len 101
int count_letters(char str[]);
int count_case(int t);



int main()
{
    int T, count = 0, i = 0, letter_count = 0;
    char string[len];
    
    scanf("%d", &T);
    while (i <= T)
{
    letter_count = count_letters(string);// call the function that counts the number of keytaps and store it in letter_count.
    printf("Case #%d: %d\n",count, letter_count);
    count++;
        ++i;
    }

    return 0;
    
    
}

int count_letters(char str[])
{
    int count = 0, i;
    
    for (i = 0 ; str[i] !='\0'; i++)
    {
        if((str[i] == 'a') || (str[i] == 'd') || (str[i] == 'g') ||(str[i] == 'j') ||(str[i] == 'm')|| str[i]== 'p' || str[i] == 't' || str[i] == 'w' || isspace(str[i]) )
            count += 1;
        else if(str[i] == 'b' || str[i] == 'e' || str[i] == 'h' ||str[i] == 'k' ||str[i] == 'n'|| str[i]== 'q' || str[i] == 'u' ||str[i] == 'x')
            count += 2;
        
        else if(str[i] == 'c' || str[i] == 'f' || str[i] == 'i' ||str[i] == 'l'|| str[i] == 'o' ||str[i] == 'r'|| str[i]== 'v' || str[i] == 'y')
            count += 3;
        else if(str[i] == 's' || str[i] == 'z')
            count += 4;
    }
    
    return count;
}


