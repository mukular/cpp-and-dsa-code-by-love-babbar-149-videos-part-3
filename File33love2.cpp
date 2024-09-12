// inline function and default arguments
#include<iostream>
using namespace std;

inline int getMax(int& a, int& b)
{
    // tertary operator
    return (a>b) ? a : b;
}

void print(int arr[], int n = 0, int start = 0) // default argument start
// void print(int arr[], int n = 0, int start) // default argument should be rightmost means this statement is wrong
{
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int a = 1, b = 2;
    int ans = 0;
    ans = getMax(a, b);
    // Above statement is replaced by this line before compile ans = (a>b) ? a : b; 
    cout<<ans<<endl;

    a = a + 3;
    b = b + 1;
    ans = getMax(a, b);
    cout<<ans<<endl;

    int arr[5] = {1,4,7,8,9};
    int size = 5;
    print(arr, size, 0);
    cout<<endl;
    print(arr, size);
    cout<<endl;
    print(arr, size, 2);

    return 0;
}