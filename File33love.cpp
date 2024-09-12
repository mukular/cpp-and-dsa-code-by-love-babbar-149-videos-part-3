// macros and global variables
#include<iostream>
using namespace std;
#define PI 3.14  // It does not take storage

int score = 15; // Global variable

void a(int& i)
{
    cout<<score<<" in a"<<endl;
    cout<<i<<endl;
}

void b(int& i)
{
    cout<<score<<" in b"<<endl;
    cout<<i<<endl;
}


int main()
{
    int r = 5;
    double area = PI * r * r;  // here PI is replaced by 3.14 before compiling
    // PI = PI + 1; // can't be modified // gives error
    cout<<"Area is "<<area<<endl;

    cout<<score<<" in main"<<endl;
    int i = 5;
    a(i);
    b(i);

    {
        int i = 2;
        cout<<i<<endl;
    }
    cout<<i<<endl; 
    return 0;
    
}