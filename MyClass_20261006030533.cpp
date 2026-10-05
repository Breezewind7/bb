#include <iostream>
#include <vector>
using namespace std;

class MyClass
{
public:
    void
fun(vector<int>& arr)
    {
        int minlndex = 0;
        for (int i = 1; i < arr.size(); i++)
        {
           if (arr[i] < arr[minlndex])
           {
                minlndex = i;
           }
        }
        swap(arr[minlndex], arr.back());
    }
};

int main()
{
    int n;
    cin>> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i =  0; i < n; i++)
    {
        cout << arr[i];
        if(i != n-1) cout << " ";
    }
    cout << endl;
    MyClass obj;
    obj.fun(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i != n-1) cout << " ";
    }
    cout << endl;

    return 0;
}
