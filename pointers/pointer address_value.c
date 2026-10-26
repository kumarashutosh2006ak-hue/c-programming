#include <stdio.h>

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

    int *address=&num;
    printf("the number is :%d\n",num);
    printf("the adress of the number is :%p\n",address);
    
    return 0;
}
