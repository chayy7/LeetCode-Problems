#include <vector>
#include <algorithm>

class Solution {
public:
    int projectionArea(std::vector<std::vector<int>>& grid) {
        int n = grid.size();
        int xy_area = 0;
        int yz_area = 0;
        int zx_area = 0;
        
        for (int i = 0; i < n; ++i) {
            int max_row = 0;
            int max_col = 0;
            
            for (int j = 0; j < n; ++j) {
                // XY projection: Count non-zero cells
                if (grid[i][j] > 0) {
                    xy_area++;
                }
                
                // Track row maximum for YZ projection
                max_row = std::max(max_row, grid[i][j]);
                
                // Track column maximum for ZX projection (swapping i and j)
                max_col = std::max(max_col, grid[j][i]);
            }
            
            yz_area += max_row;
            zx_area += max_col;
        }
        
        return xy_area + yz_area + zx_area;
    }
};
