class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        vector<int>pos;
        int n=words.size();
        for(int i=0;i<words.size();i++)
        {
            if(words[i]!=target)
            {
                if(i==(words.size()-1)&&pos.size()==0)
                    return -1;
            }
            else
                pos.push_back(i);
        }
        int min_dist=INT_MAX,l_dist,r_dist,cur_dist;
        for(int i=0;i<pos.size();i++)
        {
            if(pos[i]==startIndex)
                return 0;
            else if(pos[i]>startIndex)
            {
                r_dist=abs(pos[i]-startIndex);
                l_dist=startIndex+abs(n-pos[i]);
            }
            else
            {
                r_dist=abs((n-startIndex)+pos[i]);
                l_dist=abs(pos[i]-startIndex);
            }
            cur_dist=min(r_dist,l_dist);
            min_dist=min(min_dist,cur_dist);
        }
        return min_dist;


    }
};
