#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j,m,n;
    scanf("%d", &m);
    int a[m][m];
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n);
    int b[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][m];
    for(i=0;i<n;i++)
    {
        for(j=0; j<n; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The First matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("The Second matrix is:\n");
    for(i=0; i<n ;i++)
    {
        for(j=0; j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Addition:\n");
    for(i=0; i<m;i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}