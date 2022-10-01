#include<stdio.h>

int main(){
    float n;

    
    printf("Enter your Marks : ");
    scanf("%f",&n);
    
   if(n<=100 && n>=90){
    printf("Grade: A");
   }
   else if(n<=89 && n>=86){
    printf("Grade: A-");
   }
   else if(n<=85 && n>=82){
    printf("Grade: B+");
   }
   else if(n<=81 && n>=78){
    printf("Grade: B");
   }
   else if(n<=77 && n>=74){
    printf("Grade: B-");
   }
   else if(n<=73 && n>=70){
    printf("Grade: C+");
   }
   else if(n<=69 && n>=66){
    printf("Grade: C");
   }
   else if(n<=65 && n>=62){
    printf("Grade: C-");
   }
   else if(n<=61 && n>=58){
    printf("Grade: D+");
   }
   else if(n<=57 && n>=55){
    printf("Grade: D");
   }
   else if(n<=54 && n>=0){
    printf("Grade: F");
   }
   else
    printf("Please Inpute a valid makes (0 to 100)");
    return 0;
}