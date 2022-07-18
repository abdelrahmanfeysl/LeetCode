class Solution {
public:
   string truncateSentence(string s, int k) {
        string x;
        int c=0;
        for (int i = 0; i <s.size() ; ++i) {
             if(s[i]==' ')
                 c++;
             if(c==k)break;
             x+=s[i];
        }
        return x;
    }
};