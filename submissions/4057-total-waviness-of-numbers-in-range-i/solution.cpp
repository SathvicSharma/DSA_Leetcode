class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int sum=0;
        for(int i=num1;i<=num2;i++)
        {
            sum+=calculate(i);
        }
        return sum;
    }
    int calculate(int x)
    {
        string s=to_string(x);
        int wav_count=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==0||i==s.size()-1)
                continue;
            if((s[i]>s[i-1]&&s[i]>s[i+1])||((s[i]<s[i-1]&&s[i]<s[i+1])))
                wav_count++;
        }
        return wav_count;
    }
};
