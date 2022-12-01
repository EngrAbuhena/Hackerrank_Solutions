//
// HackerRank
// Equalize The Array
// Passed all testcases
//
// Created by Abuhena Rony
//

#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector<int> arr)
{
    int maxcount = 0;
    int len = (int)arr.size();

    for (int i = 0; i < len; i++)
    {
        int count = 0;
        for (int j = i; j < len; j++)
        {
            if (arr.at(i) == arr.at(j))
            {
                count++;
                cout << count << " ";
            }
        }
        if (count >= maxcount)
            maxcount = count;
    }
    cout << endl;
    cout << "Length: " << len << " Max: " << maxcount << "\n";
    int result = len - maxcount;
    return result;
}

int main()
{
    int result;
    vector<int> a;
    a = {3, 3, 2, 1, 3};
    result = equalizeArray(a);
    if (result == 2)
        cout << "Output: " << result << endl;
    else
        cout << "Output: " << result << " is a wrong answer!\nExpected 2" << endl;
    //--------------------------------
    a = {1, 2, 3, 1, 2, 3, 3, 3};
    result = equalizeArray(a);
    if (result == 4)
        cout << "Output: " << result << endl;
    else
        cout << "Output: " << result << " is a wrong answer!\nExpected 4" << endl;
    return 0;
}