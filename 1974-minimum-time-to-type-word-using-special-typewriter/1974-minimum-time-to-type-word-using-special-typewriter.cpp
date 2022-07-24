class Solution {
public:
    int minTimeToType(string word) {
      int count =word.size()+min(abs(('a'-96)-(word[0]-96)),26-abs(('a'-96)-(word[0]-96)));
        for (int i = 0; i <word.size()-1 ; ++i) {
            if(abs((word[i+1]-96)-(word[i]-96))>13)
                count+=26-abs((word[i+1]-96)-(word[i]-96));
            else
                count+=abs((word[i+1]-96)-(word[i]-96));
        }
        return count;}
};