// wrong answer in testcase 03

#include <bits/stdc++.h>

using namespace std;

// find lcm from an array
int getLcm(vector<int> a) {
    // find max from a
    int max = 0;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] >= max)
            max = a[i];
    }
    // find lcm from a
    int lcm = 0;
    int step = max;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != 0 && max % a[i] == 0) {
            lcm = max;
            break;
        } else {
            lcm = max + step;
        }
    }
    return lcm;
}

// find the gcd of 02 numbers
unsigned short gcd(unsigned short a, unsigned short b) {
    // if "a" is smaller than "b", then swap a&b
    if (a < b) {
        unsigned short temp = a;
        a = b;
        b = temp;
    }
    // this loop will go on until b==0
    while (b) {
        a = b;     // assign the value of b into a
        b = a % b; // assign the modulus of a&b into b
    }
    return a; // return "a" as the gcd of a&b
}

int getGcd(vector<int> a) {
    unsigned short len = a.size();
    int result = a[0]; // initialize the result variable with first element of the array
    if (len == 1) {
        return result;
    } else {
        for (size_t i = 1; i < len; ++i) {
            // call function gcd to determine the gcd of 02 numbers
            result = gcd(result, a[i]);
        }
        return result;
    }
}

int getTotalX(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int lcm = getLcm(a);
    cout << "LCM: " << lcm << "\t";
    int gcd = getGcd(b);
    cout << "GCD: " << gcd << endl;
    int multiple = 0;
    int result = 0;
    while (multiple <= gcd) {
        multiple += lcm;
        if (gcd % multiple == 0) {
            result++;
            cout << "GCD: " << gcd << "\t"
                 << "Multiple: " << multiple << "\t"
                 << "COUNT: " << result << endl;
        }
    }
    return result;
}

int main() {
    vector<int> a = {3, 9, 6};
    vector<int> b = {36, 72};
    cout << getTotalX(a, b) << endl;
    // output: 2
    return 0;
}
