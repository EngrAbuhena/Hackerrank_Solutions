//
// HackerRank
// ACM ICPC Team
// Passed all testcases
//
// Created by Abuhena Rony
//

#include <bits/stdc++.h>

using namespace std;

// function that make OR operation between two strings
int oringString(string a, string b)
{
    int count = 0;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == '1' || b[i] == '1')
            count += 1;
    }
    return count;
}

vector<int> findMaxCount(vector<int> arr)
{
    vector<int> res;
    int groupCount = 0;
    int maxCount = arr.at(0);
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) > maxCount)
            maxCount = arr.at(i);
    }
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr.at(i) == maxCount)
            groupCount++;
    }

    res.push_back(maxCount);
    res.push_back(groupCount);
    return res;
}

vector<int> acmTeam(vector<string> topic)
{
    vector<int> res;
    vector<string> groups;
    int len = (int)topic.size();
    int result;
    int maxCount = 0;
    int groupCount = 0;
    for (auto i = 0; i < len - 1; ++i)
    {
        for (auto j = i + 1; j < len; ++j)
        {
            result = oringString(topic[i], topic[j]);
            // cout << result << endl;
            if (maxCount < result)
                res.push_back(result);
        }
    }

    return findMaxCount(res);
}

int main()
{
    int n, m;
    vector<string> arr;
    vector<int> result;

    n = 4;
    m = 5;
    arr = {"10101", "11100", "11010", "00101"};
    result = acmTeam(arr);
    for (auto i : result)
        cout << i << endl;
    //-----------------------------------------
    n = 6;
    m = 5;
    arr = {"11101", "10101", "11001", "10111", "10000", "01110"};
    result = acmTeam(arr);
    for (auto i : result)
        cout << i << endl;
    return 0;
}
