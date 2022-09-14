class Solution {
public:
    bool isSubsequence(string s, string t) {
        int prevIndex = -1;
        for(int i=0; i < s.size(); i++){
            int flag = 0;
            for(int j=prevIndex+1 ; j < t.size(); j++){
                if(s[i] == t[j]){
                    cout<<s[i]<<" "<<t[j]<<endl;
                    flag = 1;
                    if(j >= prevIndex){
                        prevIndex = j;
                        cout<<prevIndex<<" ";
                        break;
                    }
                    else return false;
                }    
            }
            if(flag == 0) return false;
        }
        return true;
    }
};
