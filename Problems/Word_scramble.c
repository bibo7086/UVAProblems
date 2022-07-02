//
//  main.c
//  word_scramble
//
//  Created by Saeed Ali on 25/04/2016.
//  Copyright © 2016 Saeed Ali. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MSG_LEN 1000
#define ll int


void reverse(char msg[MSG_LEN], ll i, ll j);
int main()
{
    char msg[MSG_LEN];
    ll i, j=0, lenght;
    
    while(gets(msg))
    {
        j = 0;
        lenght = strlen(msg);
        
        for(i = 0; i <= lenght; i++)
        {
            if(msg[i] == ' '){
                reverse(msg, i-1, j);
                j = i+1;
                printf(" ");
            }
            else
            if(i == lenght && msg[i] == '\0')
            {
                reverse(msg, i, j);
            }
            
            
            
        }
        printf("\n");
    }
    return 0;
}

void reverse(char msg[MSG_LEN], ll i, ll j)
{
    ll k = 0;
    for(k = i; k >= j; k--)
    {
        printf("%c", msg[k]);
    }
    

}