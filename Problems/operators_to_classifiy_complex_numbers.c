//
//  main.c
//  operators to process complex numbers
//
//  Created by Saeed Aliyu on 8/10/15.
//  Copyright (c) 2015 Saeed Aliyu. All rights reserved.
//

/*
 *
 *operators to process complex numbers
 */


#include <stdio.h>
#include <math.h>


// user define comples number type

typedef struct{
    double real, imag;
}complex_t;

int scan_complex(complex_t *c);
void print_complex(complex_t);
complex_t add_complex(complex_t c1, complex_t c2);
complex_t subtract_complex(complex_t c1, complex_t c2);
complex_t multiply_complex(complex_t c1, complex_t c2);
complex_t divide_complex(complex_t c1, complex_t c2);
complex_t abs_complex(complex_t c);

//driver; for testing and seeing how it works

int main()
{
    complex_t com1, com2;
    
    
    // gets two complex numbers
    printf("Enter the real and imaginary parts of a complex number\n");
    printf("seperated by space> ");
    scan_complex(&com1);
    printf("Enter a second complex number > ");
    scan_complex(&com2);
    
    // Forms and dispalys the sum
    printf("\n");
    print_complex(com1);
    printf(" = ");
    print_complex(add_complex(com1, com2));
    
    
    // forms and displays the difference
    printf("\n\n");
    print_complex(com1);
    printf(" - ");
    print_complex(subtract_complex(com1, com2));
    
    // forms and displays the absolute vale
    
    printf("\n\n|");
    print_complex(com1);
    printf("| = ");
    print_complex(abs_complex(com1));
    printf("\n");
    
    return 0;
}
/* 
 * comples number input function returns standard scanning error code 1 => valid scan, 0 => error, 
 * negatvie EOF value => end of file 
 */

int
scan_complex(complex_t *c) // OUTPUT - address of complex variable to fill

{
    int status;
    status = scanf("%lf%lf", &c->real, &c->imag);
    
    if(status == 2)
        status = 1;
    else if (status != EOF);
        status = 0 ;
    
    return status; 
    
}

/* 
 * Complex ouput function displays value as (a + bi) or ( a - bi)
 * fropping a or b if they round to 0 unless both round to 0 
 */

void
print_complex(complex_t c) // input - complex number to display
{
    double a, b;
    char sign;
    
    a = c.real;
    b = c.imag;
    
    printf("(");
    
    if (fabs(a) < .005 && fabs(b) < .005) {
        printf("%.2f", 0.0);
    }else if (fabs(b) < .005){
        printf("%.2f", a);
    }else if ( fabs(a) < .005){
        printf("%.2f", b);
    }else {
        if ( b < 0)
            sign = '-';
        else
            sign = '+';
        
        printf("%2.f %c %2.fi", a, sign, fabs(b));
        
    }
    
    printf(")");
}

/*
 * Returns sum of complex values c1 and c2
 */
complex_t
add_complex (complex_t c1, complex_t c2) // input - values to add.
{
    complex_t csum;
    
    csum.real = c1.real + c2.real;
    csum.imag = c1.imag + c2.imag;
    
    return (csum);
}

/*
 * Returns difference c1 - c2 
 */
complex_t
subtract_complex (complex_t c1, complex_t c2) // input - values to add.
{
    complex_t cdiff;
    
    cdiff.real = c1.real - c2.real;
    cdiff.imag = c1.imag - c2.imag;
    
    return (cdiff);
}
/* ** Stub**
 * Returns product of complex values c1 and c2
 */

complex_t
multiply_complex(complex_t c1, complex_t c2)
{
    printf("Function multiply_complex returning first argument \n");
    return c1;
}

/* ** Stub **
 * Return quotient of complex values (c1 / c2)
 */

complex_t
divide_complex(complex_t c1, complex_t c2) // input parameters
{
    printf("Function divide_complex reurning firt argument\n");
    
    return c1;
}

/* 
 * Returns absolute value of complex number c
 */

complex_t
abs_complex(complex_t c) //input paramters
{
    complex_t cabs;
    
    cabs.real = sqrt(c.real *c.real + c.imag * c.imag);
    cabs.imag = 0;
    
    return cabs;
}

