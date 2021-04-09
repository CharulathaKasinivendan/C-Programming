#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,a=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
         a= a*i;
    printf("%d",a);
         
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
