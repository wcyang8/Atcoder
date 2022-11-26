#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    int count = 0;

    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'v')
            count++;
        if (S[i] == 'w')
            count += 2;
    }

    cout << count << endl;

    return 0;
}