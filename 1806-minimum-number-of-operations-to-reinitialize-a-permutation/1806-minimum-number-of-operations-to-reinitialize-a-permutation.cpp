class Solution {
public:
    int reinitializePermutation(int n) {
       vector<int>v,v2,v3;
        int count = 0;
        for (int i = 0; i <n ; ++i) {
            v.push_back(i);
            v2.push_back(i);
            v3.push_back(i);
        }
        do{
            for (int i = 0; i < n ; ++i)
            {
                if(i % 2 == 0)
                    v2[i]=v[i/2];
                else
                    v2[i]=v[n/2+(i-1)/2];
            }
            count++;
            v=v2;
            if(v==v3)
                break;
          }while(true);
        return count;
    }
};