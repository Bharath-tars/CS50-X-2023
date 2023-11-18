#include <cs50.h>
#include <stdio.h>

int get_size(void);
int get_pop(int);
int get_year(int, int);
int main(void)
{
    // TODO: Prompt for start size
    int pop1 = get_size();
    // TODO: Prompt for end size
    int pop2 = get_pop(pop1);
    // TODO: Calculate number of years until we reach threshold
    int year = get_year(pop1, pop2);
    // TODO: Print number of years
    printf("Years: %i\n",year);
}







int get_size(void)
{
    int n;
    do
    {
        n = get_int("Enter start popu: ");
    }
    while(n<9);
    return n;
}
int get_pop(int pop1)
{
    int n;
    do
    {
        n = get_int("Enter end popu: ");
    }
    while(n < pop1);
    return n;
}
int get_year(int pop1, int pop2)
{
    int count = 0;
    if(pop1 == pop2)
    {
        return count;
    }
    do
    {
        int born = pop1/3;
        int die = pop1/4;
        pop1 = pop1 + (born - die);
        count++;
    }
    while(pop1 < pop2);
    return count;
}
