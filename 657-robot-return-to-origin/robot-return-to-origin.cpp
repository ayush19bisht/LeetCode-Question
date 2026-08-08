class Solution {
public:
    bool judgeCircle(string moves) {
        int left = 0 , right =0 , up = 0 , down = 0;
        for(int i=0 ; i<moves.size() ; i++){
            if(moves[i] == 'L'){left++; }
            if(moves[i] == 'R'){right++; }
            if(moves[i] == 'U'){up++; }
            if(moves[i] == 'D'){down++; }
        }
        if(up!=0 && down!=0){
            if(up - down == 0 && left-right == 0){
                return true;
            }
        }
         if(left!=0 && right!=0){
            if(up - down == 0 && left-right == 0){
                return true;
            }
           
        }
        return false;
    }
};