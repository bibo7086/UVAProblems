//
//  main.c
//  Change_in_thermal_unit
//
//  Created by Saeed Aliyu on 15/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

float convert_temp(float c1, float F)
{
    float new_c, c2;
    
    c2 = ((5.0*F)/9.0);
    new_c = c1 + c2;
    
    return new_c;
}

int main()
{
    int T;
    int count = 1;
    
    scanf("%d", &T);
    float c1, F;
    while (count <= T)
    {
        scanf("%f %f", &c1, &F);
        printf("Case %d: %.2f\n", count, convert_temp(c1, F));
        count++;
      
    }
    
return 0;
    
}