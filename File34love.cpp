// Recursion
#include<iostream>
using namespace std;

// factorial of n
int factorial(int n)
{
    // base case
    if(n == 0)
    {
        return 1;
    }

    return n * factorial(n-1);
}

// power of 2
int power(int n)
{
    // base case
    if(n == 0)
    {
        return 1;
    }

    int smallerProblem = power(n-1);
    int biggerProblem = 2 * smallerProblem;

    return biggerProblem;
}

// print counting reverse
// Tail recursion
void print(int n)
{
    // base case
    if(n == 0)
    {
        return;
    }
    cout<<n<<endl;
    print(n-1);
}

// print counting
// Head Recursion
void print2(int n)
{
    // base case
    if(n == 0)
    {
        return;
    }
    print2(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;

    int ans2 = power(n);
    cout<<ans2<<endl;

    int n2;
    cin>>n2;
    cout<<endl;

    print(n2);
    print2(n2);
    return 0;
}