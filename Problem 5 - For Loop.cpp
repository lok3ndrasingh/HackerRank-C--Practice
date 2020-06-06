// Link : https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Complete the code.
    string s[]={"one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;
    if(n>=1 && n<=9)
    {
        cout<<s[n-1];
    }
    else if(n%2==0)
    {
        cout<<"even";
    }
    else cout<<"odd";

    return 0;
}
