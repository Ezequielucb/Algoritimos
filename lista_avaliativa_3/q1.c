#include <stdio.h>
#include <string.h>

int fromRoman(char *s)
{
    int num = 0;
    int prev_val = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        char c = s[i];
        int curr_val = 0;
        if (c == 'I')
            curr_val = 1;
        else if (c == 'V')
            curr_val = 5;
        else if (c == 'X')
            curr_val = 10;
        else if (c == 'L')
            curr_val = 50;
        else if (c == 'C')
            curr_val = 100;
        else if (c == 'D')
            curr_val = 500;
        else if (c == 'M')
            curr_val = 1000;
        if (curr_val > prev_val)
        {
            num += curr_val - 2 * prev_val;
        }
        else
        {
            num += curr_val;
        }
        prev_val = curr_val;
    }
    return num;
}

void toBinary(int num)
{
    char binary[17];
    binary[16] = '\0';
    for (int i = 15; i >= 0; i--)
    {
        binary[i] = (num % 2) + '0';
        num /= 2;
    }

    printf("na base 2: %s\n", binary);
}

void toDecimal(int num)
{
    printf("na base 10: %d\n", num);
}

int main()
{
    char roman[13];
    scanf("%s", roman);
    int decimal = fromRoman(roman);
    toBinary(decimal);
    toDecimal(decimal);
    printf("%X", decimal);
    return 0;
}