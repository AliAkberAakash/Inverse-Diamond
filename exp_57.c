#include <stdio.h>
#include<time.h>

void waitFor(unsigned int secs);

void waitFor(unsigned int secs)
    {
        unsigned int retTime= time(0)+ secs;

        while(time(0)< retTime);
    }

int main()
{
    printf("Aakash\n");

    waitFor(5);

    printf("Aakash\n");
}
