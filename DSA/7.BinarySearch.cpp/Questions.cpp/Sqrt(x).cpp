#include <bits/stdc++.h>
using namespace std;
int sqrt(int x)
{
    int low = 1;
    int high = x;
    int ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return ans;
}
int main()
{
    cout << sqrt(45);
    return 0;
}