class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> results;

        auto ai = A.cbegin();
        auto bi = B.cbegin();
        while (ai != A.cend() && bi != B.cend()) {
            auto& a = *ai;
            auto& b = *bi;

            if (a[1] < b[0]) {
                ++ai;
                continue;
            }

            if (a[0] > b[1]) {
                ++bi;
                continue;
            }

            results.push_back(intersect(a, b));
            if (a[1] <= b[1]) {
                ++ai;
            }

            if (a[1] >= b[1]) {
                ++bi;
            }
        }

        return results;
    }

private:
    static inline vector<int> intersect(const vector<int>& a, const vector<int>& b) {
        int lo = max(a[0], b[0]);
        int hi = min(a[1], b[1]);
        return vector<int>{lo, hi};
    }
};

static auto optimize = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();