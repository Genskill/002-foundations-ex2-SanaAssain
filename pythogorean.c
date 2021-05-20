//pythagorean.c

#include<stdio.h>
#include<cs50.h>

int main(void){
int a= get_int(" Side 1:");
int b= get_int(" Side 2:");
int c= get_int(" Side 3:");

if(a>b && a>c){
    if(b*b + c*c == a*a)
      printf("Passed\n");
    else
      printf("Failed\n");


  }    
 else if(b>a && b>c){
    if(a*a +c*c == b*b)
       printf("Passed\n");
    else
       printf("Failed\n");            
 }
 else if(c>a && c>b){
    if(b*b + a*a == c*c)
      printf("Passed\n");
    else
      printf("Failed\n");
 }
 printf("All good");
}
