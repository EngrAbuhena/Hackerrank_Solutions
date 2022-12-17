//
// HackerRank
// Taum and B'day
// Passed all testcases
//
// Created by Abuhena Rony
//

#include <bits/stdc++.h>
using namespace std;

long taumBday(int b, int w, int bc, int wc, int z)
{
    long cost;
    if (bc + z < wc)
    {
        // wc = bc + z;
        cost = b * bc + w * (bc + z);
    }
    else if (wc + z < bc)
    {
        // bc = wc + z;
        cost = b * (wc + z) + w * wc;
    }
    else
        cost = b * bc + w * wc;
    return cost;
}

int main()
{
    int t, b, w, bc, wc, z;
    cin >> t;
    for (size_t i = 1; i <= t; i++)
    {
        cin >> b >> w;
        cin >> bc >> wc >> z;
        cout << taumBday(b, w, bc, wc, z) << endl;
    }
    return 0;
}