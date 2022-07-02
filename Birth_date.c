//
//  main.c
//  Birth_date
//
//  Created by Saeed Aliyu on 7/26/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
int main()
{
    int N, actual_day, actual_month,actual_year, day,month, year, age;
    char slash;

    scanf("%d", &N);
    
    for (int i = 1 ; i <= N; i++) {
        scanf("%d%c%d%c%d", &actual_day,&slash, &actual_month,&slash, &actual_year);
        scanf("%d%c%d%c%d", &day,&slash, &month,&slash, &year);
        
        if (year > actual_year)
            printf("Case#%d: Invalid birth date\n", i);
        else if ((year > actual_year)||(month > actual_month && year > actual_year)) || day > actual_day && month <= actual_month && year <= actual_year)
            printf("Case#%d: Invalid birth date\n", i);
        else{
            if ( actual_year - year > 130)
                printf("Case #%d Check birth date\n",i);
            else if
                (year < actual_year && month >= actual_month && day >= actual_day)
                printf("Case#%d: %d\n",i, actual_year - year-1);

        }
    }
    
        

        return 0;
}
