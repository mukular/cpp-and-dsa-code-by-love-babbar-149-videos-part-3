// Recursion
#include<iostream>
using namespace std;

// function to print steps to reach destination
void reachHome(int src, int dest)
{
    cout<<"source "<<src<<" destination "<<dest<<endl;
    // base case
    if(src == dest)
    {
        cout<<" pahuch gya "<<endl;
        return ;
    }

    // processing - ek step aage badh jao
    src++;

    reachHome(src, dest);
}

// prints digits of number in english words
void sayDigit(int n, string arr[])
{
    // base case
    if(n == 0)
    {
        return ;
    }

    // processing
    int digit = n%10;
    n = n / 10;

    sayDigit(n, arr); 
    cout<<arr[digit]<<" ";
}

int main()
{
    int des = 10; // destination to which a boy has to reach
    int src = 1;  // source at which the boy is standing
    reachHome(src, des);

    int n;
    cin>>n; // Enter a number
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<endl<<endl<<endl;
    sayDigit(n, arr);
    cout<<endl<<endl<<endl;

    return 0;
}

/*
Q.1.
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, 
such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

Example 1:
Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Example 2:
Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

Example 3:
Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 
Constraints:
0 <= n <= 30
*/

/*
class Solution {
public:
    int fib(int n) {
        // base case
        if(n == 0)
        {
            return 0;
        }
        if(n == 1)
        {
            return 1;
        }
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};
*/

/*
Q.2. You have been given a number of stairs.Initially, you are at th 0th stair,
and you need to reach the Nth stair. Each time you can either climb one step or two steps.
You are supposed to return the distinct ways in which you can climb from the 0th step to Nth step.

Constraints:
0 <= N <= 10^5
Sample Input 1 :
2
3
Sample Output 1 :
2
3
Explanation Of Sample Input 1 :
In the first test case, there are only two ways to climb the stairs, i.e. {1,1} and {2}.

In the second test case, there are three ways to climb the stairs i.e. {1,1,1} , {1,2} and {2,1}.
Sample Input 2 :
4
5
Sample Output 2 :
5
8
Explanation Of Sample Input 2 :
In the first test case, there are five ways to climb the stairs i.e. {1,1,1,1} , {1,1,2} , {2,1,1} , {1,2,1} , {2,2}.

In the second test case, there are eight ways to climb the stairs i.e. {1,1,1,1,1} , {1,1,1,2} , {1,1,2,1}, {1,2,1,1}, {2,1,1,1},{2,2,1},{2,1,2} and {1,2,2}.
*/

/*
// This approach is not optimised , we will solve this problem later using dp
#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    if(nStairs < 0)
    {
        return 0;
    }

    if(nStairs == 0)
    {
        return 1;
    }

    int ans = countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2);
    return ans;
}
*/