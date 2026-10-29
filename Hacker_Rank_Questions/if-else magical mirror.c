#include<stdio.h>
#include<stdlib.h>

void magical_mirror(int a);
int main(){
    
    int n;
    scanf("%d",&n);
    magical_mirror(n);
    
    return 0;
}
void magical_mirror(int a){
    int con=0;
    
    if(a>1000000 || a<1){
        printf("The verdict for the number %d is: INVALID",a);
        exit(0);
    }
    
    if(a%2==0 && a>10){
        con++;
    }
    if(a>15 && a%3==0){
        con++;
    }
    if(a%7==0){
        con++;
    }
    if(con==3){
        printf("The verdict for the number %d is: SUPERNATURAL",a);
        exit(0);
    }
    else if(con==2){
        printf("The verdict for the number %d is: MIRACULOUS",a);
        exit(0);
    }
    else if(con==1){
        printf("The verdict for the number %d is: MAGICAL",a);
        exit(0);
    }
    else if(con==0){
        printf("The verdict for the number %d is: NORMAL",a);
        exit(0);
    }
    else{
        printf("The verdict for the number %d is: INVALID",a);
        exit(0);
    }
}
