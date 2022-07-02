//
//  main.c
//  UVa 10911
//
//  Created by Saeed Aliyu on 10/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t, i, j, k, count = 0, max, s = 0;
    scanf("%d\n", &t);
    while (scanf("%d %d %d\n", &i, &j, &k))
    {
        if( count < t){
        if ( i > j && i > k){
            if( k < j )
            s = j;
            else
                s = k;
        }
        else if( j>i && j > k){
            if ( i > k)
                s = i;
            else
                s = j;
        }
            else if ( k > i && k > j)
            {

                if ( i< j)
                    s = j;
                else
                    s = i;
        }
            
            
++count;
printf("Case %d: %d\n",count, s);
        }
        else break;
    
    }
    return (0);
}