class Solution {
public:
   string reorganizeString(string s) {
    int arr[27]={0};
        for (int i = 0; i <s.size() ; ++i) {
            int z=s.at(i)-96;
            arr[z]++;
        }
        string str=" ";
        for (int i = 0; i <s.size(); ++i) {
            int max=0,k=0;
            for (int j = 0; j <27 ; ++j) {
                if(arr[j]>max&&char(j+96)!=str[str.size()-1])
                {
                    max=arr[j];
                    k=j;
                }
            }
            if(k==0)return "";
            str+=char(k+96);
            arr[k]--;
        }
        str=str.erase(0,1);
        return str;
    }
};