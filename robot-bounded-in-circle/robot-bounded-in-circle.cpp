class Solution {
public:
    bool isRobotBounded(string instructions) {
     int moves[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
     int x=0,y=0,dir=0;
        for(int i=0;i<instructions.length();i++)
        {
         switch(instructions[i])
         {
             case 'G': x+=moves[dir][0],y+=moves[dir][1];
                 break;
             case 'L': dir=(dir+3)%4;
                 break;
             case 'R': dir=(dir+1)%4;
         }
        }
        if(x==0&&y==0)
            return true;
        if(dir>0)
            return true;
        return false;
    }
};