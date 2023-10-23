#include <stddef.h>

int counter(const char *string) {
    int i = 0;
    int counter = 0;

    while(string[i])
    {
        if (string[i] == 'a' || string[i] == 'b' || string[i] == 'c' || string[i] == 'i' || string[i] == 'l' || string[i] == 's' || string[i] == 't')
            counter++;

        i++;
    }

    return counter;
}

char *sabbatical(const char *string, size_t value, size_t happiness) {

    int letters = counter(string);
    int score = letters + value + happiness;

    return score>22 ? "Sabbatical! Boom!" : "Back to your desk, boy.";

}

int main(){

    const char *string = "Can I have a sabbatical?";
    size_t value = 5;
    size_t happiness = 5;

    sabbatical(string,value,happiness);

    return 0;
}