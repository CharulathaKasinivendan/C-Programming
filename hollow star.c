#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int i;
    int j;
    
    for ( i=1;i<=n;i++)
    {
        for( j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n){
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
