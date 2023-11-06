#include <map>
#include <vector>

using namespace std;

int getLongestSubarray(vector<int>& a, int k) {
    int n = a.size(); // size of the array.

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = i + 1;
        } else if (preSumMap.find(sum - k) != preSumMap.end()) {
            // Calculate the length and update maxLen:
            int len = i - preSumMap[sum - k];
            maxLen = max(maxLen, len);
        }

        // Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}
