//
//  main.c
//  Bafana_bafana
//
//  Created by Saeed Aliyu on 25/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
int main()
{
    int T, N, K = 0, P, count = 1, count_int = 1;
    scanf("%d", &T);
    
    while ( count <= T)
    {
    scanf("%d %d %d", &N, &K, &P);
        if( K + P <=N)
        printf("Case %d: %d\n",count, K+P);
    
     else if ( K + P > N){
        count_int = 1;
        while (count_int <= P ) {
            
            K++;
            if (K > N)
                K = 1;
        count_int++;
        }
        printf("Case %d: %d\n",count, K);

        
    }
        count++;
    }
    
    return 0;
}