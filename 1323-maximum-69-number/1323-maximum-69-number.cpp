class Solution {
public:
    int maximum69Number (int num) {
            vector<int>v;
        while(num>9){
            int x=num%10;
            num/=10;
            v.push_back(x);
        }
        v.push_back(num);
        for (int i = v.size()-1; i >=0 ; i--) {
            if(v[i]==6)
            {
                v[i]=9;
                break;
            }
        }
        int sum=v[0];
        for (int i = 1; i <v.size() ; ++i) {
            sum+=v[i]*pow(10,i);
        }
        return sum;
    }
};