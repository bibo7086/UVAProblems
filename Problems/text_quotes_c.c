//
//  main.c
//  text_quotes_c
//
//  Created by Saeed Ali on 24/04/2016.
//  Copyright © 2016 Saeed Ali. All rights reserved.
//

#include <stdio.h>
#include <string.h> 

int main(){
    
    long long i, count, l;
    
    char s1[10000];
    
    while(gets(s1))
    {
        l = strlen(s1);
        
        for(i = 0; i < l; i++)
        {
        if(s1[i] == '"')
        {
            count++;
            if(count%2 == 0)
                printf("''");
            else
                printf("``");
            
        }
        else
            printf("%c", s1[i]);
        }
        printf("\n");
    }
    return 0 ;
}