#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S, T;

    cin >> S;
    cin >> T;

    if (S.find(T) == string::npos)
    {
        cout << "no";
    }
    else
        cout << "yes";

    return 0;
}