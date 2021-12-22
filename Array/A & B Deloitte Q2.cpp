int main() {
    vector<int> a={8,10,15,3,25,4};
    vector<int> b={};
    vector<int> temp={};
    int x=8;
    int n=a.size();
    for(int i=1;i<=x;i++){
        int k=0;
        for(int j=0;j<n;j++){
            if(j==n-1){
                k=labs(a[n-1]-a[0]);
                b.push_back(k);
            }
            else{
                k=labs(a[j]-a[j+1]);
                b.push_back(k);
            }
        }
        a=b;
        if(i==x-1){
            temp=b;
        }
        b.clear();
    }    
    
    if(x%2==0){
        cout<<"A : "<<endl;
         for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
        }
    cout<<endl;
        cout<<"B : "<<endl;
        for(int j=0;j<n;j++){
        cout<<temp[j]<<" ";
        }
    }
    else{
        cout<<"A : "<<endl;
        for(int j=0;j<n;j++){
        cout<<temp[j]<<" ";
        }
        cout<<endl;
        cout<<"B : "<<endl;
         for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
        }
    }
}
