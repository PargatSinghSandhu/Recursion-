#include<iostream>

using namespace std;

#define ll long long unsigned int
void print(int n)
{

    if (n == 1)
    {
        cout << n << " ";
        return;
    }    
    print(n - 1);
    cout << n << " ";
}
int main()
{
    
    int tc;
    cout << "Insert the value:";
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        print(n);
        cout << endl;


    }
    return 0;
}
