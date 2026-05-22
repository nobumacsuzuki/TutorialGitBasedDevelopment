
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char *name = NULL;
    char message[100];
    if (argc > 1)
    {
        name = argv[1];
        sprintf(message, "Hello World, %s!", name);
    }
    else
    {
        sprintf(message, "Hello World!");
    }
    printf("%s\n", message);
    return EXIT_SUCCESS;    
}

