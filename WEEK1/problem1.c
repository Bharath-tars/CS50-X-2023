#include <cs50.h>
#include <stdio.h>

int get_inte(void);
void execute(int);

int main(void)
{
    int size = get_inte();
    execute(size);
}

int get_inte(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while(n < 1 || n>8);
    return n;
}

void execute(int size)
{
    int n = size;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j >= (n-1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
