#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

int main(){
    int m;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &m);
    if(m>=20){
        n20 = m/20;
        m -= 20 * n20;
    }
    if(m>=10){
        n10 = m/10;
        m -= 10 * n10;
    }
    if(m>=5){
        n5 = m/5;
        m -= 5 * n5;
    }
    if(m>=1){
        n = m;
        m -= n;
    }
    printf("$20 bills: %d\n", n20);
    printf("$10 bills: %d\n", n10);
    printf("$5 bills: %d\n", n5);
    printf("$1 bills: %d\n", n);
    return 0;

    
}