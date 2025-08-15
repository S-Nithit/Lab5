#include <stdio.h>

int main(){
    int c = 0;
    printf("Input:\n");
    printf("Enter number of elements: ");
    scanf("%d",&c);
    int a[c] = {};
    printf("Enter %d integers: ",c);
    for (int i = 0; i < c; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < c; i++) {
        int count = 0;
        int Print = 0;

        for (int j = 0; j < i; j++) {
            if (a[j] == a[i]) {
                Print = 1;
                break;
            }
        }

        if (!Print) {
            for (int j = 0; j < c; j++) {
                if (a[j] == a[i]) {
                    count++;
                }
            }
            printf("Element %d occurs %d times\n", a[i], count);
        }
    }

    




    return 0;
}