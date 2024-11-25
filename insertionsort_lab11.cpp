#include <iostream>
using namespace std;
void insertionSort(int arr[] , int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;

        //Move element of arr{0..i-1}that are greater than key 
        // to one position ahead of their current position
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
void printArray(int arr[], int n)
{
  for(int i=0; i<n; i++) 
  {
    cout<< arr[i] <<" ";
  }
  cout<<endl;
}
int main()
{
    int arr[]={55691, 55632, 55469, 55181, 55223, 56177, 56983};
    int n= sizeof(arr)/ sizeof(arr[0]);

    cout<<" Original Array ";
    printArray(arr, n);
    
    insertionSort(arr, n);

    cout<<" Sorted Array in Ascending Order is: ";
    printArray(arr, n);
    
    return 0;
}