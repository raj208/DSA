#include <iostream>
#include <map>
#include <unordered_map>
#include <unordered_set>

#include<vector>
using namespace std;

string destCity(vector<vector<string>> &paths)
{
    unordered_set<string> cities;

    // Collect outgoing cities
    for (const auto &path : paths)
    {
        // cout<<path[0];
        cities.insert(path[0]); //inserting the first element of sub vector 
    }

    // Find destination city with no outgoing path
    for (const auto &path : paths)
    {
        const std::string &dest = path[1]; //second element of sub vector
        // string temp = cities.end();
        // cout<<temp<<" ";
        if (cities.find(dest) == cities.end())
        {
            return dest;
        }
    }

    return "";
}


int main()
{
    vector<vector<string>> paths = {{"B","C"},{"D","B"},{"C","A"}};
    string ans = destCity(paths);
    // cout << ans << endl;
    return 0;
}