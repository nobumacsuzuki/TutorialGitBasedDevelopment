
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    char *name = NULL;
    char* message = NULL;
    const char messagePrefix[] = "Hello World";
    const char messageDelimiter[] = ", ";
    const char messageSuffix[] = "!";
    if (argc == 2)
    {
        name = argv[1];
        size_t nameLength = strlen(name);
        message = (char*)malloc(sizeof(char) * 
            (sizeof(messagePrefix) 
            + sizeof(messageDelimiter)
            + strlen(name) 
            + sizeof(messageSuffix)));
        sprintf(message, "%s%s%s%s", messagePrefix, messageDelimiter, name, messageSuffix);
    }
    else
    {
        message = (char*)malloc(sizeof(char) * (sizeof(messagePrefix) + sizeof(messageSuffix)));
        sprintf(message, "%s%s", messagePrefix, messageSuffix);
    }
    printf("%s\n", message);
    return EXIT_SUCCESS;    
}

