#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

    int x, y;
    scanf("(%d, %d)", &x, &y);
        if(x == 0){
            printf("(%d, %d) is on the y-axis\nThe value of squared distance is %d", x, y, y*y);
            
        }
        if(y==0){
            printf("(%d, %d) is on the x-axis\nThe value of squared distance is %d", x, y, x*x);
            
        }
        if(x >0 && y> 0){
            printf("(%d, %d) is in Quadrant I\nThe value of squared distance is %d", x, y, (x*x + y*y));
        }
        if(x < 0 && y> 0){
            printf("(%d, %d) is in Quadrant II\nThe value of squared distance is %d", x, y, (x*x + y*y));
        }
        if(x < 0 && y < 0){
            printf("(%d, %d) is in Quadrant III\nThe value of squared distance is %d", x, y, (x*x + y*y));
        }
        if(x >0 && y < 0){
            printf("(%d, %d) is in Quadrant IV\nThe value of squared distance is %d", x, y, (x*x + y*y));
        }
    printf("\n");
    return 0;
}