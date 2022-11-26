// Terminated due to timeout :(
    
#include <chrono>
#include <ctime>
#include <bits/stdc++.h>

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, const vector<int>& queries)
{
    vector<int> result;
    int len = (int)a.size();

    // calculate the rotation
    int rotate;
    if (k >= len)
        rotate = k % len;
    else
        rotate = k;
    // cout << "Rotate: " << rotate << endl;
    // cout << "Len: " << len << endl;

    // rotate the array elements
    for (size_t i = 0; i < rotate; i++)
    {
        int last = a.at(len - 1);
        for (size_t j = len - 1; j > 0; j--)
        {
            a.at(j) = a.at(j - 1);
        }
        a.at(0) = last;
    }
    // for (size_t i : a)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;

    // queries
    for (int querie : queries)
    {
        result.push_back(a.at(querie));
    }

    return result;
}

int main()
{
    auto timenow = chrono::system_clock::to_time_t(chrono::system_clock::now());
    cout << ctime(&timenow) << endl;
    int k = 4;
    vector<int> a = {1, 2, 3, 4};
    vector<int> q = {0, 1, 2,3};

    vector<int> result = circularArrayRotation(a, k, q);
    for (int i : result)
        cout << i << " ";
    cout << endl;
    cout << ctime(&timenow) << endl;
    return 0;
}
// 1 2 3 4
// 4 1 2 3
// 3 4 1 2
// 2 3 4 1
// 1 2 3 4
