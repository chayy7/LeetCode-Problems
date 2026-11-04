#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <string>

class Solution {
public:
    int maxPoints(std::vector<std::vector<int>>& points) {
        int n = points.size();
        if (n <= 2) return n;
        
        int global_max = 0;
        
        for (int i = 0; i < n; ++i) {
            std::unordered_map<std::string, int> slope_counts;
            int local_max = 0;
            
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                
                int dy = points[j][1] - points[i][1];
                int dx = points[j][0] - points[i][0];
                
                // Simplify the fraction to avoid precision errors
                int gcd = std::gcd(dy, dx);
                dy /= gcd;
                dx /= gcd;
                
                // Standardize signs so that (-dy/-dx) matches (dy/dx)
                if (dx < 0) {
                    dx = -dx;
                    dy = -dy;
                } else if (dx == 0) {
                    dy = std::abs(dy); // Vertical line handling
                }
                
                std::string slope = std::to_string(dy) + "," + std::to_string(dx);
                slope_counts[slope]++;
                local_max = std::max(local_max, slope_counts[slope]);
            }
            
            // Add 1 to count the anchor point itself
            global_max = std::max(global_max, local_max + 1);
        }
        
        return global_max;
    }
};
