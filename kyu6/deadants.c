#include <stdio.h>

void letters(const char* ants, int arr[3]) {
    int i = 0;

    while(ants[i]) {
        if(ants[i] == 'a')
            arr[0]++;
        else if(ants[i] == 'n')
            arr[1]++;
        else if(ants[i] == 't')
            arr[2]++;
        i++;
    }
}

int alive(const char* ants) {
    int aliveants = 0;
    int i = 0;

    while(ants[i+2]) {
        if(ants[i] == 'a' && ants[i+1] == 'n' && ants[i+2] == 't')
            aliveants++;
        i++;
    }

    return aliveants;
}

int deadAntCount(const char* ants)
{
    int aliveants = alive(ants);
    int arr[3] = {0,0,0};
    letters(ants, arr);
    
    int a = arr[0];
    int n = arr[1];
    int t = arr[2];

    printf("%d\n", a);
    printf("%d\n", n);
    printf("%d\n", t);

    if((a+n+t) % 3 == 0)
        return ((a+n+t)/3) - aliveants;
    else if ((a>n && a>t) || (a == n && a>t))
        return a - aliveants;
    else if ((n>a && n>t) || (n == t && n>a))
        return n - aliveants;
    else if ((t>a && t>n) || (t == a && t<a) )
        return t - aliveants;
    else
        return 0;
}

int main() {
    const char* ants = "ant anantt aantnt";
    int result = deadAntCount(ants);
    printf("Number of dead ants: %d\n", result);

    return 0;
}
