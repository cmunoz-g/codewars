#include <stdbool.h>
#include <stdio.h>

int counter(int num){
    int i = 0;
    while(num > 0) {
        num /= 10;
        i++;
    }
    return i;
}

int raise(int storage, int exponent) {
    if(exponent == 0)
        return(1);
    else
        return(storage*raise(storage,exponent-1));
}

int comp(int num, int exponent) {
    int storage = 0;
    int result = 0;
    int i = exponent;

    while(i!=0) {
        storage = num % 10;
        num /= 10;
        result = raise(storage, exponent) + result; 
        i--;
    }

    return result;
}

bool narcissistic(int num)
{
    int exponent = counter(num);
    int compnumber = comp(num,exponent);

    return compnumber == num ? true : false;
}

int main(){
    int num = 153;
    bool result = narcissistic(num);
    printf("%d", result);
    return 0;
}