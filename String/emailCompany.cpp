int main() {
    string s="u.yadav_@apple.india.com";
    string temp="";
    for(int i=0;i<s.size();i++ ){
        if(s[i]=='@'){
            for(int j=i+1;s[j]!='.';j++){   
            temp.push_back(s[j]);
            }
            break;
        }
    }
    cout<<temp;
}
