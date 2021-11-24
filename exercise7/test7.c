#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>



int main(){

    printf("Input the number of row and column for the map:\n");
    int map_x,map_y;
    scanf("%d %d", &map_x, &map_y);
    int map[map_x][map_y];
    for(int i = 0;i<map_x;i++){
        for(int j = 0;j<map_y;j++){
            map[i][j] = 0;
        }
    }
    
    int canContinue_vill = 1;//1 true   0 false
    do{
        printf("Input the row and column for the village location:\n");
        int village_x,village_y;
        scanf("%d %d", &village_x, &village_y);
        if(village_x < 0 || map_x <= village_x || village_y < 0|| map_y <= village_y){
            printf("the location is outside the map\n");
            canContinue_vill = 0;
            continue;
        }
        canContinue_vill = 1;
        map[village_x][village_y] = 1;

    }while(canContinue_vill == 0);



    int mon_amount = (map_x / 10) + (map_x % 10);
    printf("You need to assign location for %d monsters in total\n", mon_amount);
    for(int i = 0;i<mon_amount;i++){
        int canContinue_mon = 1;
        int mon_x, mon_y;
        do{
            printf("Input the row and column for monster %d:\n", i);
            scanf("%d %d", &mon_x, &mon_y);
            if(mon_x < 0 || map_x <= mon_x || mon_y < 0|| map_y <= mon_y){
                printf("the location is outside the map\n");
                canContinue_mon = 0;
                continue;
            }
            if(map[mon_x][mon_y] == 1){
                printf("the location is occupied\n");
                canContinue_mon = 0;
                continue;
            }
            canContinue_mon = 1;
        }while(canContinue_mon == 0);
            map[mon_x][mon_y] = 2;
    }
        

    //print map
    for(int i =0;i<map_x;i++){
        for(int j = 0;j<map_y;j++){
            int target = map[i][j];
            if(target == 0){
                printf(". ");
            }else if(target == 1){
                printf("v ");
            }else{
                printf("m ");
            }
        }
        printf("\n");
    }


    return 0;
}