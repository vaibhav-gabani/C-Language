#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    // 1 methord 
    for(int i = 0 ; i <= num ; i++){
        for(int j = 1 ; j <= num - i ; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}