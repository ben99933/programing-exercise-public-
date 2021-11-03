#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    int hp = 10;
    int str = 2;//strength

    int str_mon[4] = {1, 2, 3, 4};
    printf("Welcome, Adventurer!\n");
    int input;//怪物的ID
    int hasSword = 0;
    
    while(hp > 0){
        int input_village;
        printf("Do you want to go to our village first (1: Yes; 0: No)? ");
        scanf("%d", &input_village);
        
        if(input_village == 1){
            
            int leave = 0;
            while(leave ==0){
                int input2;
                printf("What do you want to do in our village (1: buy a magical sword; 2: go to the bar; 3: leave the village)? ");
                scanf("%d", &input2);

                if(input2 == 1){
                    if(hasSword == 0){
                        str++;
                        printf("Nice sword! Now you have %d strength!\n", str);
                        hasSword = 1;
                    }else{
                        printf("You already brought a sword.\n");
                    }
                    
                }else if(input2 == 2){
                    if(hp < 10){
                        hp++;
                        printf("Nice beer! Now you have %d blood!\n", hp);
                    }else{
                        printf("Your blood is full. You don't need a beer.\nf");
                    }
                }else if(input2 == 3){
                    printf("You are welcome to come back anytime!\n");
                    leave = 1;
                }else{
                    printf("Invalid action! 1: buy a magical sword; 2:go to the bar; 3: leave the village\n");
                    continue;
                }
            }
        }
        hasSword = 0;//重置買武器的資格！

        printf("You have %d blood and %d strength.\n", hp, str);
        printf("Please choose which monster (1 to 4) you want to fight: ");
        scanf("%d", &input);
        
        //判斷input是否符合規定
        if(input <= 0 || 4< input){
            printf("No such monster, please enter 1 to 4 to choose the monster.\n");
            int input_exit;
            printf("Do you want to go on your adventure (1: Yes; 0: No) ?: ");
            scanf("%d", &input_exit);
            //是否退出遊戲
            if (input_exit == 1){
                continue;
            }else{
                printf("We will miss you. Bye!\n");
                return 0;
            }
        }


        printf("You are fighting Monster %d!\n", input);

        //打得過的話
        if(str > str_mon[input-1]){
            printf("You Win!\n");
            str++;
            
            int input_exit;
            printf("Do you want to go on your adventure (1: Yes; 0: No) ?: ");
            scanf("%d",&input_exit);
            //是否退出遊戲
            if (input_exit == 1){
                continue;
            }else{
                printf("We will miss you. Bye!\n");
                return 0;
            }

        }else{
            printf("You Lose!\n");
            hp -= str_mon[input-1];
            int input_exit;
            printf("Do you want to go on your adventure (1: Yes; 0: No) ?: ");
            scanf("%d",&input_exit);
            //是否退出遊戲
            if (input_exit == 1){
                continue;
            }else{
                printf("We will miss you. Bye!\n");
                return 0;
            }

        }
    }

    //這個我直接寫在WHILE之外是因為 退出遊戲的話早就RETURN了
    //能夠讀到這表示HP沒了
    printf("You Dead. Bye!\n");

    return 0;
}