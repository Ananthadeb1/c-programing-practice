#include <stdio.h>

int main()
{
    int a[100];
    int b[100];

    int i = 0, j = 0,m,n,n1,n2;

    printf("Enter a number :");
      scanf("%d",n1);
    for(i=0;i<n1;i++){
      scanf("%d",a[i]);
    }

    printf("Enter a number :");
      scanf("%d",n2);
    for(i=0;i<n2;i++){
      scanf("%d",b[i]);
    }

    while (i < m && j < n) {
        if (a[i] < b[j])
            printf(" %d ", a[i++]);
        else if (b[j] < a[i])
            printf(" %d ", b[j++]);
        else {
            printf(" %d ", b[j++]);
            i++;
        }
    }

    while (i < m)
        printf(" %d ", a[i++]);
    while (j < n)
        printf(" %d ", b[j++]);
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    printUnion(a, b, m, n);
    getchar();
    return 0;
}
