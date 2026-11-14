#include<bits/stdc++.h>
using namespace std;

class Solution {
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            }
            else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        }
    }

    long long countPairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        long long cnt = 0;

        for (int i = low; i <= mid; i++) {
            while (right <= high &&
                   (long long)nums[i] > 2LL * nums[right]) {
                right++;
            }

            cnt += (right - (mid + 1));
        }

        return cnt;
    }

    long long mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return 0;
        }
        int mid = low + (high - low) / 2;
        long long cnt = 0;

        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);
        return cnt;
    }

public:
    int reversePairs(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        return (int)mergeSort(nums, 0, (int)nums.size() - 1);
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter array size: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size.\n";
        return 1;
    }

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = obj.reversePairs(nums);
    cout << "Number of Reverse Pairs: " << ans << endl;
    return 0;
}

//TC: O(2n log n)
//SC: O(n)