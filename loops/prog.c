#include <stdlib.h>
#include <stdio.h>

int main(void) 
{
    int n = 10, i, values = 0, another, val, j;
    for(i = 0; i<=n; i = i + 1) {
    values += i;
    printf("values are %d\n", values);
    
 
    }
   another = n * n;

     for(j = 0; j <= another; j++) {
    val += j;
   printf ("Triangular number %i\n", val);
   }

    return (0);
}