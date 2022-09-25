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
            char ch = 'A' + i-1;
            cout <<ch << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 