// Link : https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here

     string ar[]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    if(n>=1 && n<=9)
    {
        cout<<ar[n-1];
    }
    else cout<<ar[9];

    return 0;
}
