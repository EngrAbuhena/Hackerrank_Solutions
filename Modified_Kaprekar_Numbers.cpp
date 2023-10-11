//
// HackerRank
// Taum and B'day
// Modified Kaprekar Numbers
//
// Created by Abuhena Rony
//
#include <bits/stdc++.h>
#include<string>
using namespace std;
void kaprekarNumbers(int p, int q)
{
    string square;
    string stri;
    string left;
    string right;
    for (size_t i = p; i < q; i++)
    {
        square=to_string(i*i);
        stri=to_string(i);
        int len=stri.size();
        int n=square.size()-len;

        for (size_t j = 0; j < n; j++)
        {
            left+=square[j];
        }
        for (size_t k = n-1; k < square.size(); k--)
        {
            right+=square[k];
        }
        int result=stoi(left)+stoi(right);
        if(result==p)
        cout<<result<<" ";
    }
    
}
int main()
{
    int p, q;
    cin >> p;
    cin >> q;
    kaprekarNumbers(p, q);
    return 0;
}