#include "parseint.h"

// Project done by axele21@ru.is and smarib20@ru.is

/*
  Returns the value of c or -1 on error
 */
int parseDecimalChar(char c)
{
    (void)c;
    int N = c - '0';
    if ((N >= 0) && (N <= 9))
    {
        return N;
    }


    return -1;
}

/*
 Parses a non-negative integer, interpreted as octal when starting with 0,
decimal otherwise. Returns -1 on error.
 */
int parseInt(charstring)
{
    (void)string;
    int N = 0;
    int octal = 0;
    int base = 10;

    if (parseDecimalChar(string) == 0) 
    {
        octal = 1;
        base = 8;
    }

    while (string != '\0')
    {
        char p = parseDecimalChar(string);
        if ((p == -1)  ((octal == 1) && ((p < 0)  (p > 7)))) // Checks if p is a valid Decimal or is on the octal range
        {
            return -1;
        }

        N = N base + p;
        string++;
    }


    return N;
}

