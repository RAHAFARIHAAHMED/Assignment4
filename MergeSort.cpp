#include"Merge.h"
Merge::Merge()
{
}
Merge::~Merge()
{
}
void Merger(int arr[], int lo, int mi, int hi)
{
int *temp = new int[hi-lo+1];

int i = lo, j = mi + 1;

int k = 0;

while(i <= mi && j <=hi)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
            else
            temp[k++] = arr[j++];
    }

while(i <= mi)
        temp[k++] = arr[i++];

while(j <= hi)
        temp[k++] = arr[j++];

for(k = 0, i = lo; i <= hi; ++i, ++k)
arr[i] = temp[k];
delete []temp;
}
void MergeHelper(int arr[], int lo, int hi)
{
int mid;
if(lo < hi)
    {
        mid = (lo + hi)  / 2;
        MergeHelper(arr, lo, mid);
        MergeHelper(arr, mid+1, hi);
        Merger(arr, lo, mid, hi);
    }
}
void Merge::Mergeer(int arr[], int arr_size)
{
    MergeHelper(arr, 0, arr_size-1);
}
