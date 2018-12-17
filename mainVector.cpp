#include"Selection.cpp"
#include"Insertion.cpp"
#include"Bubble.cpp"
#include"Merge.cpp"
#include<vector>
#include<iostream>
using namespace std;

void SelectionSort(vector <int> &num)
{
      int i, j, first, temp;
      int numLength = num.length( );
      for (i= numLength - 1; i > 0; i--)
     {
           first = 0;
           for (j=1; j<=i; j++)
          {
                 if (num[j] < num[first])
                 first = j;
          }
         temp = num[first];
         num[first] = num[i];
         num[i] = temp;
     }
     return;
}
void InsertionSort( vector <int> &num)
{
     int i, j, key, numLength = num.length( );
     for(j = 1; j < numLength; j++)
    {
           key = num[j];
           for(i = j - 1; (i >= 0) && (num[i] < key); i--)
          {
                 num[i+1] = num[i];
          }
         num[i+1] = key;
     }
     return;
}
void BubbleSort(vector <int> &num)
{
      int i, j, flag = 1;
      int temp;
      int numLength = num.length( );
      for(i = 1; (i <= numLength) && flag; i++)
     {
          flag = 0;
          for (j=0; j < (numLength -1); j++)
         {
               if (num[j+1] > num[j])
              {
                    temp = num[j];
                    num[j] = num[j+1];
                    num[j+1] = temp;
                    flag = 1;
               }
          }
     }
     return;
}
void MergeSort(vector <int> &arrayA, vector <int> &arrayB, vector <int> &arrayC)
{
     int indexA = 0;
     int indexB = 0;
     int indexC = 0;

     while((indexA < arrayA.length( )) && (indexB < arrayB.length( ))
     {
          if (arrayA[indexA] < arrayB[indexB])
          {
                 arrayC[indexC] = arrayA[indexA];
                 indexA++;
          }
         else
         {
                 arrayC[indexC] = arrayB[indexB];
                 indexB++;
         }
        indexC++;
     }

     while (indexA < arrayA.length( ))
     {
           arrayC[indexC] = arrayA[indexA];
           indexA++;
           indexC++;
     }
     while (indexB < arrayB.length( ))
     {
           arrayC[indexC] = arrayB[indexB];
           indexB++;
           indexC++;
     }
     return;
}
