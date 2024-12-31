#include <iostream>
using namespace std;
void sort(int arr[], int n, bool asc = true)
{
    int i, r, temp;
    if (asc)
    {
        for (r = 0; r <= n - 1; r++)
        {
            for (i = 0; i <= n - 1; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }
    else{
        for (r = 0; r <= n - 1; r++)
        {
            for (i = 0; i <= n - 1; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
    }
    
}
int main()
{
    int arr[] = {1, 8, 6, 4, 7, 2, 3, 5, 9};
    sort(arr, 9, false);
    return 0;
}