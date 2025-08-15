#include <stdio.h>

int main(){
    int a[10] = {};
    int odd,even = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &a[i]);
        if(a[i]%2==0){
            odd +=1;
        }
        else {
            even +=1;
        }
    }
    printf("Even numbers: %d\n",even);
    printf("odd numbers: %d\n",odd);


    return 0;
}