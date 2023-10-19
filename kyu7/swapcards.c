#include <stdbool.h>
#include <stdint.h>

bool swap_cards(uint8_t a, uint8_t b) {
    int holder;

    int a1 = a / 10;
    int a2 = a % 10;

    int b1 = b / 10;
    int b2 = b % 10;

    if(a1>a2)
    {
        holder = b1;
        b1 = a2;
        a2 = holder;
    }

    else
    {
        holder = b1;
        b1 = a1;
        a1 = holder;
    }

    a = (a1*10)+a2;
    b = (b1*10)+b2;

    return a>b ? true : false;

}

int main() {
    uint8_t a;
    uint8_t b;

    a = 41;
    b = 98;

    swap_cards(a,b);
    return 0;
}