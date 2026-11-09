#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);

    total = a + b + c + d + e;

    percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = .2%f\n", percentage);

    return 0;
}