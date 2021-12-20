class Solution {
public:
    string decodeString(string s) {
        int n=0;
        string m;
        string x;
        stack<string> alpha;
        stack<int> digit;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                n=n*10+(s[i]-'0');
            }
            else if(isalpha(s[i])){
                m.push_back(s[i]);
            }
            
            else if(s[i]=='['){
                digit.push(n);
                alpha.push(m);
                n=0;
                m="";
            }
              
            else if(s[i]==']'){
                string temp=m;
                int freq= digit.top();
                digit.pop();
                m=alpha.top();
                alpha.pop();
                while(freq-->0){
                    m.append(temp);
                }
            }
        }  
        return m;
    }
};
