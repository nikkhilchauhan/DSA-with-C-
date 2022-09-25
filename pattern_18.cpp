#include<iostream>
using namespace std;

int main(){
    int n;
    int i = 1;
    cin >> n;
    while (i<=n)
    {
        int space = i-1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j<=n-i+1)
        {
          cout << j+i-1;
          j++;
        }
        cout <<endl;
        i++;
    }
}

// 12345
//  2345
//   345
//    45
//     5