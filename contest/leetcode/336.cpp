// https://leetcode.com/contest/weekly-contest-336/

class Solution {
	bool isVowel(char ch) {
		return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
	}
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt = 0;

        for(int i = left; i <= right; ++i) {
        	cnt += (isVowel(words[i].front()) && isVowel(words[i].back()));
        }

        return cnt;
    }
};


class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(rbegin(nums), rend(nums));

        vector<long long> prefix(begin(nums), end(nums));
        int cnt = (prefix[0] > 0);

        for(int i = 1; i < nums.size(); ++i) {
            prefix[i] += prefix[i - 1];
            if(prefix[i] <= 0) break;
            ++cnt;
        }

        return cnt;
    }

    // Optimal configuration -> sort numbers in non-increasing fashion
};


class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        long long cnt = 0;

        unordered_map<int, int> vis;
        vis[0] = 1;
        int cur_xor = 0;

        for(int i = 0; i < nums.size(); ++i) {
            cur_xor ^= nums[i];
            cnt += vis[cur_xor];
            ++vis[cur_xor];
        }

        return cnt;
    }

    // find subarrays that have all bits with even count => find subarrays with xor 0
};