#include <iostream>
#include"Selection.cpp"
#include"Insertion.cpp"
#include"Bubble.cpp"
#include"Merge.cpp"
using namespace std;

int main()
{

	int arr_size, arr[25], i, j, temp;
	cout<<"Enter Array Size : ";
	cin>>arr_size;
	cout<<"Enter Array Elements : ";
	for(i=0; i<arr_size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using selection sort...\n";
	for(i=0; i<arr_size; i++)
	{
		for(j=i+1; j<arr_size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Now the Array after sorting is :\n";
	for(i=0; i<arr_size; i++)
	{
		cout<<arr[i]<<" ";
	}





	for(i=1; i<arr_size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(i=0; i<arr_size; i++)
	{
		cout<<arr[i]<<" ";
	}



	int n;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" numbers :";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array using bubble sort technique...\n";
	for(i=0; i<(n-1); i++)
	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Elements sorted successfully..!!\n";
	cout<<"Sorted list in ascending order :\n";
	for(i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}



	int arr1[25], arr2[25], arr_size1, arr_size2,  k, merge[50];
	cout<<"Enter Array 1 Size : ";
	cin>>arr_size1;
	cout<<"Enter Array 1 Elements : ";
	for(i=0; i<arr_size1; i++)
	{
		cin>>arr1[i];
	}
	cout<<"Enter Array 2 Size : ";
	cin>>arr_size2;
	cout<<"Enter Array 2 Elements : ";
	for(i=0; i<arr_size2; i++)
	{
		cin>>arr2[i];
	}
	for(i=0; i<arr_size1; i++)
	{
		merge[i]=arr1[i];
	}
	arr_size=arr_size1+arr_size2;
	for(i=0, k=arr_size1; k<arr_size && i<arr_size2; i++, k++)
	{
		merge[k]=arr2[i];
	}
	cout<<"Now the new array after merging is :\n";
	for(i=0; i<arr_size; i++)
	{
		cout<<merge[i]<<" ";
	}

}
