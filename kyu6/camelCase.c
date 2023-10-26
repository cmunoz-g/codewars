#include <stddef.h> 
#include <stdlib.h>
#include <stdio.h>

int size(const char *camelCase) {
    int i = 0;

    while(camelCase[i]) {
        i++;
    }
    return i;
}

int mayus(const char *camelCase) {
    int i = 0;
    int mayus = 0;

    while(camelCase[i]) {
        if(camelCase[i] >= 65 && camelCase[i] <= 90) 
            mayus++;
        i++;
    }
    return mayus;
}

char* solution(const char *camelCase) {
    int i = 0;
    int k = 0;
    int howlong = size(camelCase);
    int nummayus = mayus(camelCase);

    char *result = (char *) malloc(nummayus + howlong + 1);
 
    while (nummayus+1 != 0) {
        while(camelCase[i] < 65 || camelCase[i] > 90) {
            result[k] = camelCase[i];
            i++;
            k++;
        }
        
        if(k == 0) {
            result[k] = camelCase[i];
            k++;
        }
        
        else {
            result[k] = ' ';
            k++;
            result[k] = camelCase[i];
            k++;
        }

        i++;
        nummayus--;
    }

    result[k] = '\0';
    return result;
}

int main() {
    const char *camelCase = "CamelCase";
    char *result = solution(camelCase);

    printf("Modified string:%s\n", result);
    return 0;
}