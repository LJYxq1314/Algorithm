#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums3;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        auto ite1 = std::unique(nums1.begin(), nums1.end());
        auto ite2 = std::unique(nums2.begin(), nums2.end());
        
        nums1.erase(ite1, nums1.end());
        nums2.erase(ite2, nums2.end());

        for (int idx = 0; idx < nums1.size(); idx++)
        {
            for (int jdx = 0; jdx < nums2.size(); jdx++)
            {
                if(nums1[idx] == nums2[jdx])
                {
                    nums3.push_back(nums1[idx]);
                    break;
                }
            }
        }
        return nums3;
    }
};