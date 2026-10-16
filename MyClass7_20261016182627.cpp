#include <iostream>
using namespace std;
class MyClass7
{
public:
    void fun(int arr[],int len)
    {
        int minpos = 0;
        for(int i=1; i<len; i++)
        {
           if( arr[i] < arr[minpos] ) minpos= i;
        }
    
        int t= arr[minpos];
        arr[minpos] = arr[len-1];
        arr[len-1] = t;
    }
}; 

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }  
    for(int i=0; i<n; i++) 
    {   
        cout<< arr[i] << " ";
    }
    cout << endl;

    MyClass7 obj;
    obj.fun(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}


