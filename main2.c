#include <stdio.h>
/*
spicoli piersilvio - uniba computer science
mcd's algorithm alternative without euclide's algorithm
*/
int mcd(int, int);

int mcd(int a, int b){

    int mcd;

    while(a != b){

        if(a > b)
            a -= b;
        else
            b -= a;
    }

    mcd = a;

    return mcd;
}

int main(){

    int num1, num2;

    printf("insert two number to calculate the mcd: \n");

    scanf("%d", &num1);
    scanf("%d", &num2);

    int ris = mcd(num1, num2);

    printf("\nmcd -> %d", ris);

    return 0;
}
