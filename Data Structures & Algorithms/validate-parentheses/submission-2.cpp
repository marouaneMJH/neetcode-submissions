class Solution {
public:
    bool isValid(string s) {
        
        stack<char> s_;

        for(char c: s)
        {

            if( c == '[' || c == '{' || c == '(' ) s_.push(c);
            else
            {
                if(s_.empty()) return false;

                switch(s_.top())
                {
                    case '(':
                        if(c != ')') return false;
                        break;
                    
                    case '[':
                        if(c != ']') return false;
                        break;
                    
                    case '{':
                        if(c != '}') return false;
                        break;
                    
                    default:
                        return false;
                }

                s_.pop();
            }
            
        }

        return s_.empty();



    }
};
