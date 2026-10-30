#include<stdio.h>
#include<stdlib.h>
int maze();
int main(){
    
    maze();
    
    return 0;
}
int maze(){
    
    int n1,n2,n3,n4,n5,n22;
    
    scanf("%d",&n1);
    if(n1>3 || n1<1){
        return 0;
    }
    switch(n1){
        //Player chooses the Left path.
        case 1:printf("Player chooses the Left path.\n");
        
               scanf("%d",&n2);
               switch(n2){
                   
                   case 1:printf("Poor choice, Game Over!\n");
                   return 0;
                   
                   case 2:printf("Player found a bridge.\n");
                   scanf("%d",&n22);
                        
                        switch(n22){
                            case 1:printf("Player crosses the bridge safely.\n");
                            scanf("%d",&n5);
                                switch(n5){
                                    case 1:printf("All that glitters is not gold, Game Over!\n");
                                    return 0;
                                    case 2:printf("All your efforts were for nothing, Game Over!\n");
                                    return 0;
                                    case 3:printf("Congratulations!! You won the treasure.\n");
                                    return 0;
                                }
                            case 2:printf("Poor luck, Game Over!\n");
                            return 0;
                        }
                break;
            }
        break;
        case 2:printf("Player chooses the Middle path.\n");
               scanf("%d",&n3);
               /*puzzel: I am a three-digit number. 
                My second digit is four times bigger than the third digit, 
                my first digit is three less than the second digit, 
                and the sum of my digits is 15. What number am I*/
                
               if(n3==582){
                   printf("Player solved the puzzle.\n");
               }
               else{
                   printf("Foolish player, Game Over!\n");
                   return 0;
               }
               scanf("%d",&n5);
               switch(n5){
                   case 1:printf("All that glitters is not gold, Game Over!\n");
                   return 0;
                   case 2:printf("All your efforts were for nothing, Game Over!\n");
                   return 0;
                   case 3:printf("Congratulations!! You won the treasure.\n");
                   return 0;
               }
            break; 
               
        case 3:printf("Player chooses the Right path.\n");
               scanf("%d",&n4);
               /*Puzzle: "What number comes next in the sequence: 2, 6, 12, 20, __?"*/
               if(n4==30){
                   printf("Player solved the puzzle.\n");
                   
               }
               else{
                   printf("Foolish player, Game Over!\n");
                   return 0;
               }
               scanf("%d",&n5);
                switch(n5){
                   case 1:printf("All that glitters is not gold, Game Over!\n");
                   return 0;
                   case 2:printf("All your efforts were for nothing, Game Over!\n");
                   return 0;
                   case 3:printf("Congratulations!! You won the treasure.\n");
                   return 0;
               }
    }
    return 0;
}
