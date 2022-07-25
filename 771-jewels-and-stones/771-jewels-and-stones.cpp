class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int arr[27]={0};
        int arr1[27]={0};
        int arr2[27]={0};
        int arr3[27]={0};
        for (char stone : stones) {
            if(stone>=65&&stone<=90)
                arr[stone-64]++;
            else
                arr1[stone-96]++;
        }
        for (char jewel : jewels) {
            if(jewel>=65&&jewel<=90)
                arr2[jewel-64]=1;
            else
                arr3[jewel-96]=1;
        }
        int sum=0;
        for (int i = 0; i <27 ; ++i) {
            if(arr2[i]==1)
               sum+=arr[i];
            if(arr3[i]==1)
                sum+=arr1[i];
        }
        return sum;
    }
};