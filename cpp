class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<float>fraction;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
               fraction.push_back(float(arr[i])/float(arr[j]));
            }
        }
        sort(fraction.begin(),fraction.end());
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if((float(arr[i])/float(arr[j]))==fraction[k-1]){
                    res.push_back(arr[i]);
                    res.push_back(arr[j]);
                    break;
                }
            }
        }
        return res;
    }
};
