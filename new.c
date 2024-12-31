#include<stdio.h>
int main(){
int num1;
printf("enter a number");
scanf("%d",&num1);
if(num1%5==0 && num1%3==0){
printf ("it is divisible by 5 and 3");
}
else{
    printf("it isnot divisible by 5 and 3");
}
return 0;
}