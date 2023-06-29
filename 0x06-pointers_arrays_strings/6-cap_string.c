#include <ctype.h>
#include <stdbool.h>

char *cap_string(char *str)
{
    bool capitalize = true; // Start by capitalizing the first character
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (capitalize && isalpha(*ptr))
        {
            *ptr = toupper(*ptr);
            capitalize = false;
        }
        else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
                 *ptr == ',' || *ptr == ';' || *ptr == '.' ||
                 *ptr == '!' || *ptr == '?' || *ptr == '"' ||
                 *ptr == '(' || *ptr == ')' || *ptr == '{' ||
                 *ptr == '}')
        {
            capitalize = true;
        }

        ptr++;
    }

    return str;
}

