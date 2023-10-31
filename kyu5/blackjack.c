#include <stddef.h>
#include <stdio.h>

int score_hand(size_t n, const char cards[n]) {
    int score = 0;
    int s1 = 0;
    int s2 = 0;
    int aces = 0;

    while (n!=0) {
        if (cards[n-1] >= 49 && cards[n-1] <= 57)
            score += (cards[n-1]-48);
        else if (cards[n-1] != 65)
            score += 10;
        else 
            aces ++;
        n--;
    }
    
    s1 = score;
    s2 = score;

    while (aces != 0) {
        s1++;
        if (s2+11 <= 21)
            s2 += 11;
        else
            s2++;
        aces--;
    }

    if (s1 == s2)
        return s1;
    else if (s1 < s2 && s2 <= 21)
        return s2;
    else 
        return s1;
}

int main(){
    size_t n = 4;
    const char cards[4] = {'A', 'A', 'A', 'J'};
    int result = score_hand(n,cards);
    printf("score:%d", result);    
    return 0;
}

/*    if(score < 21 && aces > 0) {
        while (aces != 0) {
        if (score+11 <= 21)
            score+=11;
        else
            score++;
        aces--;
        }
    }

    else if(score > 21 && aces > 0) 
        score += aces;*/