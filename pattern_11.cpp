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
            char ch = 'A' + i+j-2;
            cout <<ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I 