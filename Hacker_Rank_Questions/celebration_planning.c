#include <stdio.h>
#include <stdlib.h>

void celebration(int budget, int num_guest, int foodCPguest, int decoration_C, int music_cost, int ext_expences);
int main()
{
    int budgett;
    int num_guestt;
    int foodCPguestt;
    int decoration_CC;
    int music_costt;
    int ext_expencess;
    scanf("%d",&budgett);
    scanf("%d",&num_guestt);
    scanf("%d",&foodCPguestt);
    scanf("%d",&decoration_CC);
    scanf("%d",&music_costt);
    scanf("%d",&ext_expencess);
    
    celebration(budgett, num_guestt, foodCPguestt, decoration_CC, music_costt, ext_expencess);

    return 0;
}
void celebration(int budget, int num_guest, int foodCPguest, int decoration_C, int music_cost, int ext_expences){

//int budget, int num_guest, int foodCPguest, int decoration_C, int music_cost, int ext_expences
    
    if(budget>10000      || budget<1      || 
       num_guest>100     || num_guest<1   ||
       foodCPguest>10000 || foodCPguest<1 || 
       decoration_C>10000|| decoration_C<0||
       music_cost>10000  || music_cost<0  ||
       ext_expences>10000|| ext_expences<0){
        printf("Celebration Denied\n");
        exit(0);
    }
    if(num_guest<6 || num_guest>50){
        printf("Celebration Denied\n");
        exit(0);
    }
    if((0.3*budget)<=decoration_C && (0.5*budget)<=(foodCPguest*num_guest) ){
        printf("Celebration Denied\n");
        exit(0);
    }
    if(num_guest>25 && music_cost<1){
        printf("Celebration Denied\n");
        exit(0);
    }
    //calculating total budget 
    int totalbudget=((foodCPguest*num_guest)+decoration_C+music_cost+ext_expences);
    if(totalbudget>budget){
        printf("Celebration Denied\n");
        exit(0);
    }
    printf("Celebration Approved");
    exit(0);
}
