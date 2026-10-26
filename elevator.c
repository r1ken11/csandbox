#include <stdio.h>

int main()
{
    int vova;
    if (scanf("%d", &vova) != 1) {
        return 0;
    }

    short nuradi = 0;
    int time = 0; 

    for(int i = 0; i < vova; i++) {
        int nextFloor;
        scanf("%d", &nextFloor);
        
        if (nextFloor > nuradi){
            time += (nextFloor - nuradi) * 6;
        } else if (nextFloor < nuradi){
            time += (nuradi - nextFloor) * 4;
        }

        time += 5;

        nuradi = nextFloor;
    }
    printf("%d", time);

return 0; 
}
