//
//  main.c
//  relational_operator
//
//  Created by Saeed Aliyu on 11/05/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

#include <stdio.h>
int main()
{
    int t, i, j, count = 0;
    scanf("%d\n", &t);
    while (scanf("%d %d\n", &i, &j)==2 && (count < t))
        {
        if ( i > j )
            printf(">\n");
        else if ( i < j )
            printf("<\n");
        else
            printf("=\n");
        count++;
    }
    
    return (0);
}
/*
int t, i=0, j=0, count = 0;
scanf("%d\n", &t);
while ((count < t) &&( cin >> i>>j))
{
    if ( i > j )
        cout <<"<" << endl;
    else
        if ( i < j )
            cout <<">" << endl;
        else
            cout <<"=" << endl;
    count++;
}

return (0);
}
 */
