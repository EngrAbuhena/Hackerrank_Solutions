#include<bits/stdc++.h>
#include<string>

using namespace std;

string appendAndDelete(string s, string t, int k) {
    int len1 = (int) s.size();
    int len2 = (int) t.size();

    int cl = 0;
    while (cl < len1 && cl < len2) {
        if (s.at(cl) == t.at(cl))
            cl++;
        else break;
    }

    int balance = len1 - cl;
    balance += len2 - cl;


    // if k is greater than or equal to the sum of the length of s and t
    if (k >= (len1 + len2))
        return "Yes";

    // if s and t are same string
    if (cl == len1 && cl == len2)
        return "Yes";

    // if sub-string of s and t are matched
    // we need to perform exactly k operations
    // if balance id odd then k must be odd
    // if balance is even then k must be even
    if (k >= balance && (balance - k) % 2 == 0)
        return "Yes";

    else
        return "No";
}

int main() {
    string s;
    string t;
    string result;
    int k;
  
    /*------1-----*/
    s = "asdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcv";
    t = "bsdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcvasdfqwertyuighjkzxcv";
    k = 100;
    result = appendAndDelete(s, t, k);
    if (result == "No")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;
  
    /*------2-----*/
    s = "qwerasdf";
    t = "qwerbsdf";
    k = 6;
    result = appendAndDelete(s, t, k);
    if (result == "No")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;
  
    /*------3-----*/
    s = "ashley";
    t = "ash";
    k = 2;
    result = appendAndDelete(s, t, k);
    if (result == "No")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;
  
    /*------4-----*/
    s = "hackerhappy";
    t = "hackerrank";
    k = 9;
    result = appendAndDelete(s, t, k);
    if (result == "Yes")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;
  
    /*------5-----*/
    s = "aba";
    t = "aba";
    k = 7;
    result = appendAndDelete(s, t, k);
    if (result == "Yes")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;
  
    /*------6-----*/
    s = "abcd";
    t = "abcdert";
    k = 10;
    result = appendAndDelete(s, t, k);
    if (result == "No")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;

    /*------7-----*/
    s = "aaa";
    t = "a";
    k = 5;
    result = appendAndDelete(s, t, k);
    if (result == "Yes")
        cout << result << endl;
    else
        cout << result << " is a Wrong Answer!!" << endl;

    return 0;
}
