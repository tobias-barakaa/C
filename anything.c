#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum { ARR_LEN = 100 };
int main()
{
int i,
// Obtain some storage space.
*pNumbers = malloc(ARR_LEN * sizeof(int));
if ( pNumbers == NULL )
{
fprintf(stderr, "Insufficient memory.\n");
exit(1);
}
srand( (unsigned)time(NULL) );
for ( i=0; i < ARR_LEN; ++i )
pNumbers[i] = rand() % 10000;
// Initialize
// random number generator.
// Store some random numbers.
printf("\n%d random numbers between 0 and 9999:\n", ARR_LEN );
for ( i=0; i < ARR_LEN; ++i )
// Output loop:
{
printf("%6d", pNumbers[i]);
// Print one number per loop
if ( i % 10 == 9 ) putchar('\n');
// iteration and a newline
}
// after every 10 numbers.
free( pNumbers );
// Release the storage space.
return 0;
}
