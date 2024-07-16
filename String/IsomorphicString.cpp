#include <iostream>
#include <string>
using namespace std;

class Solution
{
    public:
    bool areIsomorphic(string str1, string str2)
    {
        if (str1.length() != str2.length()) 
        {
            return false;
        }
    
        int a[26] = {0};
        int b[26] = {0};
    
        for (int i = 0; i < str2.length(); i++) 
        {
            if (b[str2[i] - 'a'] == 0 && a[str1[i] - 'a'] == 0) 
            {
                b[str2[i] - 'a'] = str1[i];
                a[str1[i] - 'a'] = str2[i];
            } 
            else 
            {
                if (b[str2[i] - 'a'] == str1[i] && a[str1[i] - 'a'] == str2[i]) 
                {
                    continue;
                } 
                else 
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string str1, str2;

    cout << "Enter the first string: ";
    cin >> str1;

    cout << "Enter the second string: ";
    cin >> str2;

    bool result = sol.areIsomorphic(str1, str2);

    if (result)
    {
        cout << "The strings are isomorphic." << endl;
    }
    else
    {
        cout << "The strings are not isomorphic." << endl;
    }

    return 0;
}
