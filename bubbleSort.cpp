#include <iostream>
using namespace std;
// Function to implement Bubble sort
void bubbleSort(int arr[], int n)
{
  for(int i=0; i<n-1; i++)
    {
        // last i element are already sorted
        for (int j=0; j < n-i-1; j++)
        {
          // swap if the element found is greater than the next element
          if(arr[j] > arr[j+1])
          {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
          }
        }
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
    
    bubbleSort(arr, n);

    cout<<" Sorted Array in Ascending Order is: ";
    printArray(arr, n);
    
    return 0;
}