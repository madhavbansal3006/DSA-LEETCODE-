class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=(n+10);i++){
            string s =to_string(i);
            int pro=1;
            for(int j=0;j<s.size();j++){
                pro*=s[j]-'0';
            }
            if(pro%t==0){
                return i;
            }
        }
        return -1;
    }
};