#include <stdio.h>

int result(unsigned n){
    double j = 0.5;
    double k = j*n;

    if(k - (int)k == 0)
        return 0;
    else 
        return 1;
}

const char *pofi(unsigned n) {
    static char numi[3];
        numi[0] = 'i';
        numi[1] = '\0';

    int checkn = result(n);

    if (checkn == 0){
        if((n/2) % 2 == 0)
            numi[0] = '1';

        else {
            numi[0] = '-';
            numi[1] = '1';
        }
    }

    else
        if(((n+1)/2) % 2 == 0){
            numi[0] = '-';
            numi[1] = 'i';
        }

    printf("%s", numi);

    const char *pofi = (const char *) &numi;
    return pofi;
}

int main(){
    unsigned n = 3;
    pofi(n);
    return 0;
}