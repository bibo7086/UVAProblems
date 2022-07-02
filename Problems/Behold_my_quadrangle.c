
#include <stdio.h>

int main()
{
    int t, count = 1;
    int side1, side2, side3, side4;
    scanf("%d", &t);
    while(count <= t)
    {
        scanf("%d %d %d %d", &side1, &side2, &side3, &side4);
        if (side1==side2 && side2==side3 &&side3==side4)
            printf("square\n");
        else if (((side1 == side2) && (side3 == side4))
                 || ((side1 == side3) && (side2 == side4))
                 || (( side2 == side3)&&(side1 == side4)))
            printf("rectangle\n");
        
        else
        {
            int max = 0;
            if ( side1 > max)
                max = side1;
            if ( side2 > max)
                max = side2;
            if ( side3 > max)
                max = side3;
            if ( side4 > max)
                max = side4;
            
            
            if (side1 == max)
                (side2 + side3 + side4 >= max)?  printf("quadrangle\n"): printf("banana\n");
            else if (side2== max)
                ((side1 + side3 + side4) >=max)? printf("quadrangle\n"): printf("banana\n");
            else if (side3 ==  max)
                
                (side1 + side2 + side4)>= max?  printf("quadrangle\n"): printf("banana\n");
            
            else if (side4 == max)
                (side1 + side2 + side3 >=max)? printf("quadrangle\n"): printf("banana\n");
            
        }
        count++;
        
    }
    
    
    return (0);
}