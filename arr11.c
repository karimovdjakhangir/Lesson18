// Array11

#include <stdio.h>
#include <math.h>

int main() {

int K=5, massive[]={2, 3, 5, 6, 7, 2, 3, 54, 54, 356, 546, 54, 6};

    for(int i=K; i<13; i+=K){

        printf("massive [%d]=", i);
        printf("[%d]\n", massive[i]);
    }

    return 0;
}