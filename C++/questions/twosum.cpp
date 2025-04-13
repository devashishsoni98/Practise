// two sum
// brute force

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// vector<int> solution(vector<int> &nums, int target)
// {
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j <= nums.size(); j++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 return {i, j};
//             }
//         }
//     }
//     return {-1, -1};
// }
// int main()
// {
//     vector<int> sample = {1, 2, 3, 4, 5};
//     int tar = 7;
//     vector<int> res;
//     res = solution(sample, tar);
//     if (res[0] != -1)
//     {
//         cout << res[0] << ", " << res[1];
//     }
//     else
//     {
//         cout << "not found";
//     }
//     return 0;
// }

// optimized hasmap

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, int> mymap;

vector<int> solution(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int comp = target - nums[i];
        if (mymap.find(comp) != mymap.end())
        {
            return {mymap[comp], i};
        }
        else
        {
            mymap[nums[i]] = i;
        }
    }
    return {-1, -1};
}
int main()
{
    vector<int> sample = {1, 2, 3, 4, 5};
    int tar = 7;
    vector<int> res;
    res = solution(sample, tar);
    if (res[0] != -1)
    {
        cout << res[0] << ", " << res[1];
    }
    else
    {
        cout << "not found";
    }
    return 0;
}