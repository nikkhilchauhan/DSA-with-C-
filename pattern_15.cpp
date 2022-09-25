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
            char ch = 'A' +n-i+j-1;
            cout <<ch << " ";
            count++;
            j++;
        } 
        cout << endl;
        i++;
    }
}

// D 
// C D 
// B C D 
// A B C D 