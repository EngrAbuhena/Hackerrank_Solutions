//
// HackerRank
// Library Fine
// Passed all test cases
// 
// Abuhena Rony
//

#include <bits/stdc++.h>
#include <string>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2)
{
    if (y1 > y2)
        return 10000;
    else if (y1 == y2)
    {
        if (m1 > m2)
            return 500 * (m1 - m2);
        else if (m1 == m2)
        {
            if (d1 > d2)
                return 15 * (d1 - d2);
            else if (d1 <= d2)
                return 0;
        }
    }
    return 0;
}

int main()
{
    int d1;
    int m1;
    int y1;
    cout << "Enter return date d1 m1 y1: ";
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cout << "Enter keeping date d2 m2 y2: ";
    cin >> d2 >> m2 >> y2;
    int result = libraryFine(d1, m1, y1, d2, m2, y2);
    cout << result << endl;
    return 0;
}
