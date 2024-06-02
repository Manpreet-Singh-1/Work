#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> record; // roll no, name
    record.insert(make_pair(3, "ria"));
    record[1] = "nabalika";
    record[2] = "balika";
    for (auto pair : record) // stored in  random order
    {
        cout << pair.first << " " << pair.second << endl;
    }
    return 0;
}