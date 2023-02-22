#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while (i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j<=i-1)
        {
          cout << j;
          j++;
        }
        while (j>=1)
        {
          cout << j;
          j--;
        }
        cout <<endl;
        i++;
    }
}

//     1
//    121
//   12321
//  1234321
// 123454321