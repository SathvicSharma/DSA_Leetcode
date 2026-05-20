class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
      unordered_map<int,int>A_freq,B_freq;
      vector<int>ans;
      int count=0;
      for(int i=0;i<A.size();i++)
      {
        A_freq[A[i]]++;
        B_freq[B[i]]++;
        if(B_freq[A[i]]>0)
            count++;
        if(A_freq[B[i]]>0)
            count++;
        if(A[i]==B[i])
            count--;
        ans.push_back(count);
      }
      return ans;
    }
};
