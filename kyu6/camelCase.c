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
    int nummayus = mayus(camelCase);
    char *result = (char *) malloc(nummayus + size(camelCase) + 1);
 
    while (nummayus != 0) {
        while(camelCase[i] <= 65 || camelCase[i] >= 90) {
            result[i] = camelCase[i];
            i++;
        }

        k = i;

        if(k == 0)
            result[i] = camelCase[i];

        else {
            result[k] = ' ';
            result[k+1] = camelCase[k];
            k++;

            while(camelCase[k] <= 65 || camelCase[k] >= 90) {
                result[k+1] = camelCase[k];
                k++;
            }
        }
        
        i++;
        nummayus--;
    }

    result[k] = '\0';
    
    //if (nummayus == 0)
        //return camelCase;

    return result;
}

int main() {
    const char *camelCase = "TestTestTest";
    char *result = solution(camelCase);

    printf("Modified string:%s\n", result);
    return 0;
}