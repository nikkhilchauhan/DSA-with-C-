#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j-1;
            cout <<ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 