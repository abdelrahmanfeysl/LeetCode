class Solution {
public:
  int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int arr[7]={0};
        for (int i = 0; i <tops.size() ; ++i) {
            arr[tops[i]]++;
            arr[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                arr[tops[i]]--;
        }
        for (int i = 1; i <7 ; ++i) {
            if(arr[i]==tops.size())
            {
                int num=count(tops.begin(),tops.end(),i);
                int num2=count(bottoms.begin(),bottoms.end(),i);
                return tops.size()-max(num,num2);
            }
        }
        return -1;
    }
};