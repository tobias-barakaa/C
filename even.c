#include <stdlib.h>
#include <stdio.h>

int main() 
{
    int arrayi[] = {365, 12258, 96};
    int arrayj[] = {7, 23, 4};
    int arr;
    int bb;

    for(int i = 0; i < arrayi; i++)
    {
        arr = i;
        for(int j = 0; j < arrayj; j++) {
            if(arr * j % 2 == 0) {
            printf("number is d%\n", arr);
            }
            return (1);
            
        }
    }
    return (0);
}