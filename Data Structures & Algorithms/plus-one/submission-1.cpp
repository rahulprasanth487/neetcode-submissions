class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>res = digits;
        if(res[res.size()-1]!=9){
                res[res.size()-1]+=1;
                return res;
            }

        int j=digits.size()-1;
        bool add=false;
        while (j >= 0 && res[j] + 1 >= 10){
            res[j]=0;
            j--;

            if(j<0) add=true;
        }

        if (add){
             res.insert(res.begin(),1);
        }
        else{
            res[j]+=1;
        }
        return res;
    }
};
