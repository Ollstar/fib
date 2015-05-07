//
//  main.c
//  Fibonacci
//
//  Created by Oliver Andrews on 2015-05-06.
//  Copyright (c) 2015 Oliver Andrews. All rights reserved.
//Version 1 - Using Iteration


//First, create a function that uses interation. Should you use a while loop or a for loop? What parameters should the function take? How would this affect memory on the stack?
//
//Version 2 - Using Recursion (Pass By Value)
//Second, create a function that uses recursion and passes by value. Use the function prototype int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber). Think about how this should handle the first, second and third Fibonacci numbers. Think about the base case: what should happen when remainingSteps is equal to 0?
//
//Version 3 - Using Recursion (Pass By Reference)
//Lastly, create a function that uses recursion and passes by reference. Use the function prototype int recursiveReferenceFibonacci(int remainingSteps, int *previousnumber, int *previousPreviousNumber). Use the pointers to change the values at the memory address they point to. How does this affect memory on the stack?

#include <stdio.h>
#include <stdlib.h>


//Version 2--------------------
//int n;
//int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber);


int main(int argc, const char * argv[]) {
//Version 2--------------------
//    
//    printf("Enter the desired Fibonacci term\n");
//    scanf("%d",&n);
//    
//    
//    if (n < 2) {
//        printf("The first Fibonacci number is 0.\n");
//    } else {
//        int remainingSteps = n-2;
//        int previousNumber = 0;
//        int previousPreviousNumber =1;
//        
//        int num = recursiveValueFibonacci(remainingSteps, previousNumber, previousPreviousNumber);
//        printf("%d\n", num);
//    }
    
    
//Version 1=====================
    
        int n, first = 0, second = 1, next = 0, c;
        
        printf("Enter the desired Fibonacci term\n");
        scanf("%d",&n);
    
        
        for ( c = 0 ; c < n ; c++ )
        {
            if ( c <= 1 )
                next = c;
            else
            {
                next = first + second;
                first = second;
                second = next;
            }

        }
            printf("%d corresponds to that term\n",next);
        return 0;
}
//
//Version 2---------------------
//int recursiveValueFibonacci(int remainingSteps, int previousNumber, int previousPreviousNumber) {
//    int newNumber = previousNumber + previousPreviousNumber;
//    if (remainingSteps == 0) {
//        return newNumber;
//    } else {
//        previousPreviousNumber = previousNumber;
//        previousNumber = newNumber;
//        remainingSteps--;
//        return recursiveValueFibonacci(remainingSteps, previousNumber, previousPreviousNumber);
//    }
//}