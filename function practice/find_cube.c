#include<stdio.h>

    int find_cube(int num); //function prototype;


void main(){
    int n=5;
    printf("%d",find_cube(n)); //function call 
}



int find_cube(int num){ //function work process
    int result=0;

    result+=num*num*num;
    return result;
}