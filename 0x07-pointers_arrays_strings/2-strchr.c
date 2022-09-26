#include "main.h"
#define NULL 0

/**
 *_strchr - locate character in string
 *@s: string
 *@c: character
 */

char *_strchr(char *s, char c)
{
        int i;
        for (i=0; s[i] != '\0'; i++)
        {
                if (s[i] == c)
                        return (c);
                else
                        return(NULL);
        }
}
