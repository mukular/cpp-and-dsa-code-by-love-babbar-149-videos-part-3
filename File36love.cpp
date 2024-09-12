#include<iostream>
using namespace std;

// function to check array is sorted or not
bool isSorted(int arr[], int size)
{
    // base case
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

// function to sum elements of array
int getSum(int* arr, int size)
{
    // base case
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}

// function to find key is present in array or not
// Linear search
bool linearSearch(int arr[], int size, int k)
{
    // base case
    if(size == 0)
    {
        return false;
    }
    if(arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr+1, size-1, k);
        return remainingPart;
    }
}

// function to find key is present in array or not
// Binary search
bool binarySearch(int* arr, int s, int e, int k)
{
    // base case
    if(s > e)
    {
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == k)
    {
        return true;
    }
    if(arr[mid] < k)
    {
        return binarySearch(arr, mid+1, e, k);
    }
    else
    {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main()
{
    int arr[5] = {2,4,9,9,9};
    int size = 5;
    bool ans = isSorted(arr, size);
    if(ans)
    {
        cout<<"Array is sorted "<<endl;
    }
    else
    {
        cout<<"Array is not sorted "<<endl;
    }

    int sum = getSum(arr, size);
    cout<<"Sum is "<<sum<<endl;

    int arr2[5] = {3,5,1,2,6};
    int key = 3;
    bool Ans = linearSearch(arr2, size, key);
    if(Ans)
    {
        cout<<"Present "<<endl;
    }
    else
    {
        cout<<"absent "<<endl;
    }

    int arr3[6] = {2,4,6,10,14,18};
    int size3 = 6;
    int key3 = 16;
    cout<<"Present or not "<<binarySearch(arr3, 0, 5, key3)<<endl;

    return 0;
}