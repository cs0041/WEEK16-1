#include <iostream>
#include <algorithm>
using namespace std;

struct xy
{
    int x;
    int y;
    int f;
};


void swap(int *x,int *y)
{
    int test;
    test  = *x;
    *x = *y;
    *y = test;
}
int main(void) 
{
    xy number[100];
    int max;
    cin >> max;
    for (int i = 0; i < max; i++)
    {
        cin >> number[i].x;
        number[i].y = number[i].x;
        number[i].f = 0;
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if (number[i].x == number[j].y)
            {
                number[i].f++;
            }
        }
    }
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            if (number[i].f < number[j].f)
            {

                swap(&number[i].f,&number[j].f);
                swap(&number[i].x, &number[j].x);
            }
            else if( number[i].f == number[j].f && number[i].x > number[j].x)
            {
                swap(&number[i].x, &number[j].x);

            }
        }
    }
    
   for (int i = 0; i < max; i++)
   {
       cout << number[i].x << "\t";
   }

  
    return 0;
}
