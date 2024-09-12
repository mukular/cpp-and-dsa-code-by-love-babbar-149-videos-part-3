// Dynamic memory allocation of 2-d array
#include<iostream>
using namespace std;

int main()
{
    /*
    Input:-
    3 4 
    1 2 3 4 5 6 7 8 9 10 11 12
    */
    int row;
    cin>>row;
    int col;
    cin>>col;
    // creating a 2-d array
    int** arr = new int*[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // creation done

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    
    // output
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releasing / deleting memory
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;
    
    return 0;
}