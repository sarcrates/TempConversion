//
//  main.c
//  TempConversion
//
//  Created by sarcrates on 12/26/13.
//  Copyright © 2013 sarcrates. All rights reserved.
//

#include <stdio.h>

int main ()
{
    float fahr, cel;
    printf("Enter in C:\n");
    scanf("%f", &cel);
    fahr = (1.8*cel)+32;
    printf("%fº C is %0.1fº F\n", cel, fahr);
    
}
