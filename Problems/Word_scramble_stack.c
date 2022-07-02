//
//  main.c
//  word_scramble_stack
//
//  Created by Saeed Ali on 01/05/2016.
//  Copyright © 2016 Saeed Ali. All rights reserved.
//

#include <stdio.h>

int top = -1;
char string[1000], msg[1000];

void push(char c){
    string[++top] = c;
}

void pop(){
    printf("%c", string[top]);
    string[top--] = '\0';
}
int main(){
    int count = 0;
    
    while (gets(msg)){
        for (int i = 0; msg[i]; ++i){
            if (msg[i + 1] == '\0' || msg[i] != ' '){
                push(msg[i]);
                ++count;
            }
            
            if (msg[i] == ' ' || msg[i + 1] == '\0'){
                for (int j = 0; j < count; ++j){
                    pop();
                }
                count = 0;
                if(msg[i + 1] != '\0'){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}
