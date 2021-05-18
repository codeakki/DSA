#include <bits/stdc++.h>
using namespace std;

int RomanToInt(string s)
{
    unordered_map<string, int> mpp;
    mpp.insert({"I", 1});
    mpp.insert({"V", 5});
    mpp.insert({"X", 10});
    mpp.insert({"L", 50});
    mpp.insert({"C", 100});
    mpp.insert({"D", 500});
    mpp.insert({"M", 1000});
    int sum = 0;
    int check = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {

        string s1 = "";
        s1 = s1 + s[i];
        string s2 = "";
        s2 = s2 + s[i + 1];

        if (mpp.at(s1) >= mpp.at(s2))
        {
            sum = sum + mpp.at(s1);
            check++;
        }
        else
        {
            sum = sum + mpp.at(s2) - mpp.at(s1);
            i++;
            check = check + 2;
        }
    }
    if (check != s.length())
        sum = sum + mpp.at(s.substr(s.length() - 1, 1));
    return sum;
}
int main()
{
    string s;
    cin >> s;
    int a = RomanToInt(s);
    cout << a;
    return 0;
}