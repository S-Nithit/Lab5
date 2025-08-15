#include <stdio.h>

int main(){
    int a[8] = {};
    int sm,la = 0;
    for (int i = 0; i < 8; i++) {
        printf("Enter the value %d here: ", i + 1);
        scanf("%d", &a[i]);
    }
    sm = la = a[0];
    for (int i = 1; i < 8; i++) {
        if (a[i] < sm) {
            sm = a[i];
        }
        else if (a[i] > la) {
            la = a[i];
        }
    }
    printf("Smallest number: %d\n",sm);
    printf("Largest number: %d\n",la);


    return 0;
}