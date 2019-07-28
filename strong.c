#include<stdio.h>
int Check(int b);
int checkStrong(int a){
    int fact,sum=0,temp;
    temp=a;
    if(temp==0){
        printf("it is not the strong number");
    }
    else if(temp==1){
        printf("it is the strong number");
    }
    else if(temp<0){
        printf("please enter the valid input");
    }
    else{
        while(temp!=0){
            int rem=temp%10;
            fact=Check(rem);
            sum=sum+fact;
            temp=temp/10;
        }
        if(a==sum){
            printf("yes It is the Strong Number");
        }
        else
        {
            printf("It is not a strong number");
        }
    }
}
int Check(int b){

    if(b==0){
        return 1;
    }
    else if(b==1){
        return 1;
    }
    else{
        b=b*Check(b-1);
    }
}
int main(void){
    int num;
    printf("enter the number for checking the number is strong or not");
    scanf("%d",&num);
    checkStrong(num);

}