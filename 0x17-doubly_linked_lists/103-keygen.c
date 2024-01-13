#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff_half1, diff_half2;
    srand(time(0));

    while (sum < 2772)
    {
        password[index] = 33 + rand() % 94;
        sum += password[index];
        if (sum >= 2772)
            break;
        password[index] = ',';
        index++;
    }
    password[index] = '\0';

    if (sum != 2772)
    {
        printf("Error\n");
        return (1);
    }
    diff_half1 = (sum - 2772) / 2;
    diff_half2 = (sum - 2772) / 2;
    if ((sum - 2772) % 2 != 0)
        diff_half1++;

    for (index = 0; password[index]; index++)
    {
        if (password[index] >= 'a' && password[index] <= 'z')
        {
            if (password[index] - 'a' < diff_half1)
                password[index] = 'a' + (password[index] - 'a' + diff_half1);
            else
                password[index] = 'a' + (password[index] - 'a' - diff_half1);
        }
        else if (password[index] >= 'A' && password[index] <= 'Z')
        {
            if (password[index] - 'A' < diff_half2)
                password[index] = 'A' + (password[index] - 'A' + diff_half2);
            else
                password[index] = 'A' + (password[index] - 'A' - diff_half2);
        }
    }
    printf("%s", password);
    return (0);
}
