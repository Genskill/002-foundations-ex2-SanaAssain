//pythagorean.c

#include<stdio.h>
#include<cs50.h>

int main(void){
float a= get_int("Side 1 ");
float b= get_int("\nSide 2 ");
float c= get_int("\nSide 3 ");

if(a>b && a>c){
    if(b*b + c*c == a*a)
      printf("\nYes");
    else
      printf("\nNo");


  }    
 else if(b>a && b>c){
    if(a*a +c*c == b*b)
       printf("\nYes");
    else
       printf("\nNo");            
 }
 else if(c>a && c>b){
    if(b*b + a*a == c*c)
      printf("\nYes");
    else
      printf("\nNo");
 }
}
