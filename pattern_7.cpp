#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        while(j<=i){
            cout <<i+j-1 <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// 1
// 23
// 345
// 4567
// 56789