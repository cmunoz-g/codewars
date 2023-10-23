#include <stdio.h>

int deadAntCount(const char* ants)
{
    int deadants = 0;
    int aliveants = 0;
    int i = 0;

    while(ants[i+2]) {
        if(ants[i] == 'a' && ants[i+1] == 'n' && ants[i+2] == 't')
            aliveants++;
        i++;
    }
    
    i = 0;

    while(ants[i]) {
        if (ants[i] != '.' && ants[i] != ' ')
            deadants++;
        i++;
    }
    //la idea va por buen camino, averiguar las diferentes posibilidades de hormigas muertas y cambiar el contador de deadants para que tire

    //i = deadants - aliveants;
    //printf("%c", i);
    return deadants = (deadants/3) - aliveants;
}

int main(){
    const char* ants = "ant anantt aantnt";
    deadAntCount(ants);
    return 0;
}