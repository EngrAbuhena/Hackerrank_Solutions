//
// HackerRank
// Sherlock and Squares
// Passed all testcases
//
// Created by Abuhena Rony
//

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int squares(int a, int b)
{
    int count = 0;
    int sq;
    int start = sqrt(a);
    int end = sqrt(b);
    cout << "Square Root of a: " << start << ", "
         << "Square Root of b: " << end << endl;
    cout << "Square of i: " << endl;
    for (int i = start; i <= end; i++)
    {
        sq = i * i;
        cout << sq << " ";
        if (sq >= a && sq < b + 1)
            count++;
    }
    cout << endl;
    return count;
}

int main()
{
    int a = 35;
    int b = 70;
    int result = squares(a, b);
    cout << result << endl;
    return 0;
}
