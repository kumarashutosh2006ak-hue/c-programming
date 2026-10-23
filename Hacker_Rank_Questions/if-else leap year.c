#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    if(n<=0 || n>=100000){
        printf("The given year %d is Invalid year.",n);
        return 0;
    }
    if((n%4==0 && n%100!=0 )|| (n%400==0)){
        printf("Yes, %d is a leap year.",n);
    }
    else{
        printf("No, %d is not a leap year.",n);
    }

    return 0;
}
