#include <stdio.h>

int main(void)
{
    for(int i = 0; i <= 8; i++){
        for(int j = 0; j <= 8; j++){
            int product = i * j;

            int value = (product % 9 == 0) ? 9 : (product % 9);

            printf("%i ", value);
        }
        printf("\n");
    }
    return 0;
}
