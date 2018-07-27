/******************************************************************************
 * Copyright (C) 2017 by joydeep sinha chowdhury -for the course from University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <A simple C-Programming that exhibits a handful of basic c-programming
          features to show how to calculate some statistics on a set of numbers:>
 *
 *        Mean
 *        Median
 *        MAX
 *        Min
 *        Short
 * @author <Joydeep Sinha Chowdhury>
 * @date <25-07-2018 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */

#define SIZE 40
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  int i,m,n;            
  float t;                                            
   
   print_array(&test[0],SIZE);                              /* print_array function call */ 
  
  m= Find_maximum(&test[0],SIZE);                           /* Function call for Finding the max */                        
  printf("The maximum element is %d\n ", m);
  printf("\n");
  m=Find_minimum(&test[0],SIZE);                              /* Function call for finding the Min */                        
  printf("The minimum is: % d\n",m);
  printf("\n"); 
  t=Find_mean(&test[0],SIZE);                                /* Function call for Finding Mean */    
  printf("The mean of the array is: %d \n",t);
  printf("\n");
  sort_array(&test[0],SIZE);                                   /* Function Call for finding the sorted array */ 
  printf("After sorting the array :\n");
  printf("\n");
  for(i=0;i<SIZE;i++)
  printf("Value of sorted arrays test[%d] is :  %d\n",i,test[i]);  /* Printing the sorted array */
  printf("\n");
  t=find_median(&test[0],SIZE);                                     /* Function call for the Median calculation from the sorted arry */    
  printf("The Median of the array is: %d\n",t);
  printf("\n");
   
   print_statistics(&test[0],SIZE);               /* Function call for printing all the Value from the min, max, mean and median */ 
   
  

}

/* Add other Implementation File Code Here */

int print_array(unsigned char* test,int n)                                    /* Function defination of Print_array */
{
    

}

int Find_maximum(unsigned char *test,int n)                                      /* Function defination of Find_maximum */
  {
   
   }


 int Find_minimum(unsigned char *test,int n)                                       /* Function defination of find_minium */
 {
  int i, m;


 }
  
  }


  int Find_mean(unsigned char *test,int n)
  {                                                                                 /* Function defination of find_mean */
   

   }

  
   }


  void sort_array(unsigned char *test,int n)                                      /* Function defination of sort_array */

  {
 
    

        }

        void print_statistics(unsigned char *test,int n)                                    /* Function defination of print_statistics  */

       {      
          


       }





