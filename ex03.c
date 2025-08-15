#include <stdio.h>

int main(){
    int a[4] = {};
    printf("Enter the marks of student 1: ");
    scanf("%d",&a[0]);
    printf("Enter the marks of student 2: ");
    scanf("%d",&a[1]);
    printf("Enter the marks of student 3: ");
    scanf("%d",&a[2]);
    printf("Enter the marks of student 4: ");
    scanf("%d",&a[3]);
    printf("Enter the marks of student 5: ");
    scanf("%d",&a[4]);

    printf("Total Marks : %d\n",a[4]+a[3]+a[2]+a[1]+a[0]);

    if(a[0] > a[1] && a[0] > a[2] && a[0] > a[3] && a[0] > a[4]){
        printf("Highest Marks: %d\n",a[0]);
    }
    else if(a[1] > a[0] && a[1] > a[2] && a[1] > a[3] && a[1] > a[4]){
        printf("Highest Marks: %d\n",a[1]);
    }
    else if(a[2] > a[0] && a[2] > a[1] && a[2] > a[3] && a[2] > a[4]){
        printf("Highest Marks: %d\n",a[2]);
    }
    else if(a[3] > a[0] && a[3] > a[1] && a[3] > a[2] && a[3] > a[4]){
        printf("Highest Marks: %d\n",a[3]);
    }
    else if(a[4] > a[0] && a[4] > a[1] && a[4] > a[2] && a[4] > a[3]){
        printf("Highest Marks: %d\n",a[4]);
    }

    return 0;
}