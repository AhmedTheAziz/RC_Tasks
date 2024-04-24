/*
Ahmed AbdelAziz
Robotics Corner
Session 19's Task:
( Insertion Sorting)
*/

#include <iostream>
// main Functions Sorting
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void Swap(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}
// Insertion Sorting (Insertion.exe)
void InsertionSorting(int arr[], int size) // Comemnted Lines are used to to explain the Steps.
{
    for (int i = 0; i < size - 1; i++)
    {
        //std::cout << "i " << i << std::endl;
        int key = i + 1;
        for (int j = 0; j < size; j++)
        {
          //  std::cout << "j " << j << std::endl;
            while (arr[j] < arr[j - 1])
            {
            //    std::cout << "while " << j << std::endl;
                if (arr[j] < arr[j - 1])
                {
              //      std::cout << "if " << j << std::endl;

                    key = j;
                }
                //std::cout << "swap " << j << std::endl;

                Swap(&arr[key], &arr[j - 1]);
                //print(arr, size);
            }
        }
    }
}
// Insersetion pseudocode (PseudoCode.exe)
void Insertionpseudocode(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            // arr[j]=arr[j-1];
            j = j - 1;
            arr[j + 1] = key;
        }
    }
}
int main()
{

    // Insertion Sorting (Insertion.exe)

    int arr[]={64,34,25,12,22,11,90};
  // int arr[] = {4, 9, 10, 3, 5, 8};
   int n = sizeof(arr) / sizeof(arr[0]);
   print(arr, n);
   InsertionSorting(arr, n);
   print(arr, n);
   return 0;

    // Insersetion pseudocode (PseudoCode.exe)
    /*
    //   int arr[]={64,34,25,12,22,11,90};
    int arr[] = {4, 9, 10, 3, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr, n);
    Insertionpseudocode(arr, n);
    print(arr, n);
    return 0;
    */
}