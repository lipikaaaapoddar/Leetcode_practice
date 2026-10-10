class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = (long long)k1 + k2;
        vector<int> freq(100001, 0);

        int maxDiff = 0;

        for (int i = 0; i < nums1.size(); i++) {
            int d = abs(nums1[i] - nums2[i]);
            freq[d]++;
            maxDiff = max(maxDiff, d);
        }

        for (int d = maxDiff; d > 0 && k > 0; d--) {
            if (freq[d] == 0) continue;

            long long take = min(k, (long long)freq[d]);

            freq[d] -= take;
            freq[d - 1] += take;
            k -= take;
        }

        if (k > 0) return 0;

        long long ans = 0;

        for (int d = 1; d <= maxDiff; d++) {
            ans += 1LL * d * d * freq[d];
        }

        return ans;
    }
};