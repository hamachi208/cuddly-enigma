#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int intelligence,stamina,charisma;
    int max = 20;
    
    srand(time(0));
    
    intelligence = (rand() % max - 2) + 1;
    stamina = (rand() % (max - intelligence - 1)) + 1;
    charisma = max-(intelligence+stamina);
    
    char *job;
    if (intelligence >= stamina && intelligence >= charisma)
    {
        job = "mage";
    }
    else if(stamina >= intelligence && stamina >= charisma)
    {
        job = "knight";    
    }
    else
    {
        job ="thief";
    }
    printf("class:%s\n",job);
    printf("intelligence:%d\n",intelligence);
    printf("stamina:%d\n",stamina);
    printf("charisma:%d\n",charisma);

    return 0;
}