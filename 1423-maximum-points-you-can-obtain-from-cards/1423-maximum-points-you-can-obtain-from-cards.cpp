
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();
        int sumAry = 0;

        for(int i = 0; i < n; i++){
            sumAry += cardPoints[i];
        }

        int windowSize = n - k;
        int windowSum = 0;

        for(int i = 0; i < windowSize; i++){
            windowSum += cardPoints[i];
        }

        int windowMin = windowSum;

   
        for(int i = windowSize; i < n; i++){
            windowSum += cardPoints[i];
            windowSum -= cardPoints[i - windowSize];

            windowMin = min(windowMin, windowSum);
        }

        return sumAry - windowMin;
    }
};
