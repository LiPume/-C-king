#include<stdio.h>
#include<ctype.h>
#define alpha 26
int main()
{
    char word[100];
    int count[alpha] = { 0 };
    int index;
    int i=0;

    scanf("%99s", word);
    while (word[i] != '\0')
    {
        word[i] = tolower(word[i]);
        if (isalpha(word[i]))
        {
            index = word[i] - 'a';
            count[index]++;
        }
        i++;
    }
    for (int j = 0; j < alpha; j++)
    {
        if (count[j] != 0)
            printf("%c:%d ", 'a' + j, count[j]);
    }

}
