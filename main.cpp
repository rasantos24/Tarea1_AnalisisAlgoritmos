#include "Test.h"
#include <iostream>
using namespace std;

bool numberExists(vector<int> ordered_numbers, int x, int start, int last)
{
    int half = (start + last)/2;

    if(start > last)
        return false;

    if(x == ordered_numbers[half])
        return true;

    if(ordered_numbers[half] < x)
        return numberExists(ordered_numbers, x, half+1, last);
    else if(ordered_numbers[half] > x)
        return numberExists(ordered_numbers, x, start, (half-1));
    else
        return false;
}

bool numberExists(vector<int> numbers, int x)
{
   return numberExists(numbers, x, 0, numbers.size()-1);
}

int main ()
{
    test();
    return 0;
}
