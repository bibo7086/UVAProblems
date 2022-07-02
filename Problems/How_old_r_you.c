//
//  main.c
//  how_old_r_you
//
//  Created by Saeed Aliyu on 03/12/15.
//  Copyright © 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int t, current_date, current_year, currentmonth, birth_day, birth_year, birthmonth, count =1, age;
    char m;
    
    scanf("%d", &t);
    while (count<= t) {
        scanf("%d %c %d %c %d", &current_date,&m, &currentmonth, &m ,&current_year);
        scanf("%d %c %d %c %d", &birth_day,&m,  &birthmonth, &m, &birth_year);
        
        age = current_year - birth_year;
        if (birthmonth > currentmonth)
            --age;
        else if (currentmonth == birthmonth)
        {
            if (current_date < birth_day)
              --age;
        }
        
        if ( age < 0)
            printf("Case #%d: Invalid birth date\n", count++);
        else if (age > 130)
            printf("Case #%d: Check birth date\n", count++);

        else
            printf("Case #%d: %d\n",count++, age);
        
        

    }
    return (0);

}