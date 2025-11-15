#include <stdio.h>
//adding even numbers between 1 and 150 using for loop
int main(){
    int sum = 0;
    for(int i=1; i<=150;i++){
        if(i%2 == 0){
            sum = sum + i;
        }
    }
    printf("sum of even = %d", sum);
    return 0;
}