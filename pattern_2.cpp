#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        while(j<=n){
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}

// 11111
// 22222
// 33333
// 44444
// 55555