#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MIN 0

int main(){

    int ale, cuenta;
    float ale2;

    srand(time(NULL));
    float caja[100]={0};
    for(cuenta=0; cuenta<=99;cuenta++){

        ale=rand()%(MAX-MIN+1)+MIN;
        ale2=ale/100.0;
        caja[cuenta]=ale2;
    }
    for(cuenta=0; cuenta<=99;cuenta++){

    if((cuenta%10==0) && cuenta != 0)

    printf("\n");
    printf("%.2f ",caja[cuenta]);

    }
return 0;
}

