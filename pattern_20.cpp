#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        while (j<=n-i+1)
        {
          cout << j;
          j++;
        }
        int k = (i-1)*2;
        while (k>=1)
        {
          cout << "*";
          k--;
        }
        int l = n-i+1;
        while (l>=1)
        {
          cout << l;
          l--;
        }
        cout <<endl;
        i++;
    }
}

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1