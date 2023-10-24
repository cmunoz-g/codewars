#include <stddef.h> 
#include <stdlib.h>

int size(const char *camelCase) {
    int i = 0;

    while(camelCase[i]) {
        i++;
    }
    
    return i;
}

char* solution(const char *camelCase) {
    int i = 0;
    int j = size(camelCase);
    int k = 0;
    char *result = (char *) malloc(j);
    

    while(camelCase[i]) {
        if (camelCase[i] > 65 && camelCase[i] < 90) {
            j++;
            result = realloc(result, j);
            k = j;

            while(result[k] != result[i]) {
                result[k] = result[k-1];
                k--;
            }
        }

        i++;
    }

    return result;
}

int main() {
    const char *camelCase = "testWord";
    solution(camelCase);
    return 0;
}