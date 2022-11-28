#include<stdio.h>

int main(){
    float a;
    int b;
    printf("Enter a real number: ");
    scanf("%f",&a);
    b=a;
    if(b==a){
    printf("The floor value is %d.",b);
    printf("The ceiling value is %d ",b);
    }
    else if(b<a){
        
        printf("The floor value is %d.\n",b);
        printf("The ceiling value is %d.",b+1);
    }
    else{
        printf("The ceiling value is %d.\n",b);
        printf("The floor value is %d.",b-1);
    }
    return 0;

}