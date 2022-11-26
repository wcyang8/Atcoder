#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int H, W, i, j;
    int *S, *T;
    string temp;

    cin >> H >> W;

    S = new int[W];
    T = new int[W];

    for (i = 0; i < W; i++)
    {
        S[i] = 0;
        T[i] = 0;
    }
    for (i = 0; i < H; i++)
    {
        cin >> temp;
        for (j = 0; j < W; j++)
        {
            if (temp[j] == '#')
            {
                S[j] += (int)pow(2, i);
            }
        }
    }
    for (i = 0; i < H; i++)
    {
        cin >> temp;
        for (j = 0; j < W; j++)
        {
            if (temp[j] == '#')
            {
                T[j] += (int)pow(2, i);
            }
        }
    }
    sort(S, S + W);
    sort(T, T + W);
    for (i = 0; i < W; i++)
    {
        if (S[i] != T[i])
        {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}