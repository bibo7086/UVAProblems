//
//  main.c
//  automatic_answer
//
//  Created by Saeed Aliyu on 13/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include<math.h>

int main()
{ int t, answer, i=1;
    scanf("%d %d", &t, &answer);
    while (i<= t) {
        answer = ((((((answer * 567) / 9)+7492)*235)/47) - 498);
        i++;
        printf("%d\n", abs(answer/10)%10);
        scanf("%d", &answer);
        
    }
    return (0);
}
