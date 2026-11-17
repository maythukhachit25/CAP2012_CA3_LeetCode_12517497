class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
      stack<int> result; 
        int max_area = 0; 
        
        heights.push_back(0); 

        for (int i = 0; i < heights.size(); i++) 
        {
            int current_height = heights[i]; 

            while (!result.empty() && current_height < heights[result.top()]) 
            {
                int height = heights[result.top()]; 
                result.pop(); 

                int left = result.empty() ? -1 : result.top(); 
                int width = i - left - 1; 

                max_area = max(max_area, height * width); 
            }
            result.push(i); 
        }
        heights.pop_back(); 
        return max_area;   
    }
};