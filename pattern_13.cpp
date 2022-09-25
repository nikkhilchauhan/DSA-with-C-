#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    int count = 0;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i+j-2;
            cout <<ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// A 
// B C 
// C D E 
// D E F G 
// E F G H I 