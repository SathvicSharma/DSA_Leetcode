class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if (rows==1)
            return encodedText;
        int n=encodedText.size();
        int cols=n/rows;
        string result;
        for (int start=0;start<cols;start++) {
            int i=0, j=start;
            while (i<rows&&j<cols) 
            {
                result+=encodedText[i*cols+j];
                i++;
                j++;
            }
        }
        while (!result.empty()&&result.back()==' ') {
            result.pop_back();
        }
        return result;
    }
};
