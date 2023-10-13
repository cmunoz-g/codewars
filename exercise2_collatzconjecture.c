#include <unistd.h>
#include <stdio.h>

unsigned hotpo(unsigned n) {
    
    int count;
    count = 0;

    while (n != 1){
        
        if (n % 2 != 0) {
            n = (3*n)+1;
        }

        else {
            n = n / 2;
        }
        
        count++;
    }

    printf("%d", count);
    return count;
}

int main(){

    unsigned n;
    n = 6;

    hotpo(n);

    return(0);
}