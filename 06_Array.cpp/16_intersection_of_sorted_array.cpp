#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        vector<int> visited(nums2.size(), 0);

        for(int i = 0; i < nums1.size(); i++) {

            for(int j = 0; j < nums2.size(); j++) {

                if(nums1[i] == nums2[j] && visited[j] == 0) {

                    ans.push_back(nums1[i]);

                    visited[j] = 1;

                    break;
                }
            }
        }

        return ans;
    }
};

int main() {

    int n1, n2;

    cout << "Enter size of nums1: ";
    cin >> n1;

    cout << "Enter size of nums2: ";
    cin >> n2;

    if(n1 <= 0 || n2 <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> nums1(n1);
    vector<int> nums2(n2);

    cout << "Enter nums1 elements: ";

    for(int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter nums2 elements: ";

    for(int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    Solution obj;

    vector<int> result = obj.intersect(nums1, nums2);

    cout << "Intersection of the arrays: ";

    for(int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}