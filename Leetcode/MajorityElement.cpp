#include <iostream>
using namespace std;
 
int Frequent(int arr[], int n)
{
   
    sort(arr, arr + n);
 

    int max = 1, res = arr[0], curr = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr++;
        else {
            if (curr > max) {
                max = curr;
                res = arr[i - 1];
            }
            curr = 1;
        }
    }
 

    if (curr > max)
    {
        max = curr;
        res = arr[n - 1];
    }
 
    return res;
}
 

int main()
{
   int arr[100], j, num ;
   cin<<num;
   for(j=0;j<num;j++)
   {
     cin>>arr[j];
   }
  
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << Frequent(arr, n);
    return 0;
}
