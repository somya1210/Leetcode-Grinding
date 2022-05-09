class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0)
            return vector<string>();
        string intermediate="";
        vector<string>res;
        backtrack(res,intermediate,digits,0);
        return res;
    }
    void backtrack(vector<string>&res,string &intermediate,string digit,int start)
    { if(intermediate.length()==digit.length())
    {
        res.push_back(intermediate);
        return;
    }
     if(digit[start]=='2')
     {    intermediate.push_back('a');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('b');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('c');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
     if(digit[start]=='3')
     {    intermediate.push_back('d');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('e');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('f');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
     if(digit[start]=='4')
     {    intermediate.push_back('g');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('h');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('i');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
     if(digit[start]=='5')
     {    intermediate.push_back('j');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('k');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('l');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
     if(digit[start]=='6')
     {    intermediate.push_back('m');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('n');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('o');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
     if(digit[start]=='7')
     {    intermediate.push_back('p');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('q');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('r');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
            intermediate.push_back('s');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
     if(digit[start]=='8')
     {    intermediate.push_back('t');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('u');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('v');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
        
     }
     if(digit[start]=='9')
     {    intermediate.push_back('w');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('x');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
       intermediate.push_back('y');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
            intermediate.push_back('z');
         backtrack(res,intermediate,digit,start+1);
      intermediate.pop_back();
     }
        
    }
};