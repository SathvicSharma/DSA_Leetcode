class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
    int i=0,x=commands.size();
    int pos=0;
      while(x!=0)
      {
        if(commands[i]=="RIGHT")
            pos++;
        else if(commands[i]=="LEFT")
            pos--;
        else if(commands[i]=="UP")
            pos-=n;
        else
            pos+=n;
        x--;
        i++;
      }
      return pos;

    }
};
