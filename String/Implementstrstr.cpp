#include <iostream>
#include <string>
using namespace std;

int strstr(string s, string x)
{
    int f = -1;
    f = s.find(x);
    return f;
}

int main()
{
    string s, x;
    
    cout << "Enter the main string: ";
    getline(cin, s);
    
    cout << "Enter the substring to search for: ";
    getline(cin, x);
    
    int result = strstr(s, x);
    
    if(result != -1)
    {
        cout << "The substring \"" << x << "\" is found at index: " << result << endl;
    }
    else
    {
        cout << "The substring \"" << x << "\" is not found in the string." << endl;
    }
    
    return 0;
}
