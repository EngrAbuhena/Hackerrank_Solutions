#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector<int> arr)
{
    int count = 0;
    int maxcount = 0;
    int len = (int)arr.size();

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if(arr.at(i)==arr.at(j))
            {
                count++;
                cout<<"Count: "<<count<<" ";
            }
        }
        if(count>=maxcount)
        maxcount=count;
        
    }
    cout<<"Max: "<<maxcount<<"\n";
    return 0;
}

int main()
{
    vector<int> a = {3, 3, 2, 1, 3};
    int result = equalizeArray(a);
}