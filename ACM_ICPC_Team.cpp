#include <bits/stdc++.h>

using namespace std;

// function that make OR operation between two strings
string oringString(string a, string b) {
    string ans = "";
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == '1' || b[i] == '1')
            ans += "1";
        else
            ans += "0";
    }
    return ans;
}

vector<int> acmTeam(vector<string> topic) {
    vector<int> res;
    vector<string> groups;
    int len = (int) topic.size();
    string result;
    int maxCount = 0;
    int groupCount=0;
    for (auto i = 0; i < len - 1; ++i) {
        for (auto j = i + 1; j < len; ++j) {
            result = oringString(topic[i], topic[j]);
            cout << result << endl;
            int bitCount = 0;
            for (auto x: result) {
                if (x == '1')
                    bitCount++;
            }

            if (bitCount > maxCount) {
                maxCount = bitCount;
                groupCount=1;
            }
            else if(bitCount==maxCount)
                groupCount++;
        }
    }
    res.push_back(maxCount);
    res.push_back(groupCount);
    return res;
}

int main() {
    int n = 4;
    int m = 5;
    vector<string> arr = {"10101", "11100", "11010", "00101"};
    vector<int> result = acmTeam(arr);
    for (auto i: result)
        cout << i << endl;
    return 0;
}
