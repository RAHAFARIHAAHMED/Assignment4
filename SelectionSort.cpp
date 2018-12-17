#include"Selection.h"

using namespace std;
Selection::Selection()
{
}
Selection::~Selection()
{
}
inline void Swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}
void Selection::Selectioner(int arr[], int arr_size)
{
    for(int i = 0; i < arr_size - 1; ++i)
    {
        int min = i;
        for(int j = i+1; j < arr_size; ++j)
            if(arr[j] < arr[min])
                min = j;
                Swap(arr[min], arr[i]);
    }
}


