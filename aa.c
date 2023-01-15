#include <stdio.h>

void fun(int arr[], int t, int sum);
int main()
{
    int t,sum;
    cout<<"enter no of elements";
    cin>>t;
    cout<<"enter sum";
    cin>>sum;
    int arr[t];
    for(int i=0;i<t;i++)
    {
      cin>>arr[i];
    }
    fun(arr, t, sum);
 
    return 0;
}

void fun(int arr[], int t, int sum)
{
    for (int i = 0; i < t-1; i++)
    {
     for (int j = i + 1; j < t; j++)
      {
        if (arr[i] + arr[j] == sum)
        {
         printf("Match found (%d, %d)\n", arr[i], arr[j]);
        }
      }
    }
    printf("Match not found");
}
