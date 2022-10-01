#include<stdio.h>
int main(){
    float A,HW,CT,MT,TF,n;
    int s,i;

    printf("Students: ");
    scanf("%d",&s);

    for(i=1; i<=s; i++){
    printf("Attendance (max: 5): ");
    scanf("%f",&A);
    printf("\nAssignments  (max: 10): ");
    scanf("%f",&HW);
    printf("\nClass Tests (max: 15): ");
    scanf("%f",&CT);
    printf("\nMidterm  (max: 50): ");
    scanf("%f",&MT);
    MT= (MT/100)*60;
    printf("\nFinal  (max: 100): ");
    scanf("%f",&TF);
    TF = (TF/100)*40;

    n = A+HW+CT+MT+TF;

    if(n<=100 && n>=90){
    printf("Student %d: A\n",i);
       }
   else if(n<=89 && n>=86){
    printf("Student %d: A-\n",i);
   }
   else if(n<=85 && n>=82){
    printf("Student %d: B+\n",i);
   }
   else if(n<=81 && n>=78){
    printf("Student %d: B\n",i);
   }
   else if(n<=77 && n>=74){
    printf("Student %d: B-\n",i);
   }
   else if(n<=73 && n>=70){
    printf("Student %d: C+\n",i);
   }
   else if(n<=69 && n>=66){
    printf("Student %d: C\n",i);
   }
   else if(n<=65 && n>=62){
    printf("Student %d: C-\n",i);
   }
   else if(n<=61 && n>=58){
    printf("Student %d: D+\n",i);
   }
   else if(n<=57 && n>=55){
    printf("Student %d: D\n",i);
   }
   else if(n<=54 && n>=0){
    printf("Student %d: F\n",i);
   }
   else
    printf("total is grater then 100 or less then 0");

    }
    
    return 0;
}