//
// HackerRank
// Jumping on the Clouds
// Passed all test cases
//
// Abuhena Rony
//

#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector<int> c)
{
    int len = (int)c.size();
    if (len >= 2 && len <= 100)
    {
        int x = 0;
        int jumps = 0;
        while (x < len)
        {
            if (x + 2 < len && c.at(x + 2) == 0)
            {
                x += 2;
                jumps += 1;
            }
            else
            {
                x += 1;
                jumps += 1;
            }
        }
        cout << "Jumps: " << jumps << endl;
        return jumps - 1;
    }
    else
        return 0;
}

int main()
{
    int result;
    vector<int> arr;

    arr = {0, 1, 0, 0, 0, 1, 0};
    result = jumpingOnClouds(arr);
    cout << "Output: " << result << " Expected 3" << endl;
    //---------------------------------------------------
    arr = {0, 0, 1, 0, 0, 1, 0};
    result = jumpingOnClouds(arr);
    cout << "Output: " << result << " Expected 4" << endl;
    return 0;
}