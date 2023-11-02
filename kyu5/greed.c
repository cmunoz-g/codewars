#include <stdio.h>

int repeat(const int dice[5]) {
    int i = 0;
    int j = 1;
    int count = 0;

    while (dice[i]) {
        while (dice[j]) {
            if (dice[i] == dice[j]) {
                count++;
            }
            j++;

            if (count == 2) {
                return dice[i] == 1 ? (dice[i]*1000) : (dice[i]*100);
            }
        }
        i++;
        j = i+1;
        count = 0;
    }
    return 0;
}

int highnum(const int dice[5]) {
    int i = 0;
    int ones = 0;
    int fives = 0;

    while (dice[i]) {
        if (dice[i] == 1)
            ones++;
        else if (dice[i] == 5)
            fives++;
        i++;
    }

    printf("ones:%d\n", ones);
    printf("fives:%d\n", fives);

    if (ones != 0 && ones < 3)
        ones *= 100;
    else if (ones != 0 && (ones == 4 || ones == 5))
        ones = (ones-3)*100;
    else 
        ones = 0;

    if (fives != 0 && fives < 3)
        fives *= 50;
    else if (fives != 0 && (fives == 4 || fives == 5))
        fives = (fives-3)*50;
    else 
        fives = 0;

    return fives+ones;
}

int score(const int dice[5]) {
    int repeated = repeat(dice);
    int highest = highnum(dice);

    int length = 5;

    for (int i = 0; i < length; i++) {
        printf("%d ", dice[i]);
    }

    printf("%d", repeated+highest);
    return repeated+highest;
}

int main() {
    const int dice[5] = {5, 5, 3, 4, 1};
    int result = score(dice);
    printf("%d points", result);
    return 0;
}