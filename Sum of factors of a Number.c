#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int num, i,a;
  scanf("%d", &num);
  for (i = 1; i <= num; ++i){ 
        if (num % i == 0) 
            a=a+i;
  }
  printf("%d",a);
         

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
