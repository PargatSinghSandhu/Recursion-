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
    cout << n << " ";
    print(n - 1);
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
