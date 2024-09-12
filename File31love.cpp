// Reference variable
#include<iostream>
using namespace std;

// int& func(int a)
// {
//     int num = a;
//     int& ans = num;
//     return ans; // here we are returning reference variable ans which does not exist after func call so it is wrong.
// } 

// similarly it is wrong.
// int* func(int n)
// {
//     int* ptr = &n;
//     return ptr; 
// } 

void update2(int& n)  // pass by reference
{
    n++;
}

void update(int n)  // pass by value
{
    n++;
}

int main()
{
    int i = 5;
    // create a reference variable
    int& j = i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    
    int n = 5;
    cout<<"Before "<<n<<endl;
    update(n);
    cout<<"After "<<n<<endl;

    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<n<<endl;

}