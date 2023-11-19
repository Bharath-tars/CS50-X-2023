#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    float aLetters = (100 / (float)words) * (float)letters;
    float aSentences = (100 / (float)words) * (float)sentences;
    int index = round(0.0588 * aLetters - 0.296 * aSentences - 15.8);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
int count_letters(string text)
{
    int count = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            count++;
        }
    }

    return count;
}
int count_words(string text)
{
    int count = 1;

    for (int i = 0; text[i] != '\0'; i++)
    {
        if (text[i] == ' ')
        {
            count++;
        }
    }

    return count;
}
int count_sentences(string text)
{
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++)
    {
        char ch = text[i];
        if (ch == '.' || ch == '!' || ch == '?')
        {
            count++;
        }
    }

    return count;
}
