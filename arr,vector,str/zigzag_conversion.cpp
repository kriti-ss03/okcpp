class Solution {
public:
    string convert(string s, int numRows) {
//making n strings; vector of strings
//adding value in teh respective string depending upon a flag; flag=1 as k=n-1 & flag=0 fas k=0

if(numRows==1)return s;

vector<string>ans(numRows);
int flag=1;
int k=0;int n=numRows;

for(int i=0; i<s.length();i++){
    if(flag && k!=n){
        
        ans[k].push_back(s[i]);
        cout<<"lol"<<i<<" "<<k<<" "<<ans[k]<<endl;
       k++;
       
    }else if(k==n && flag || !flag){
        if(flag){
                flag=0;
                k=k-2;
                cout<<"hoi"<<k<<" ";
        }if(!flag){
       
        ans[k].push_back(s[i]);  
        cout<<"loli"<<i<<" "<<k<<" "<<ans[k]<<endl; 
            if(k==0){
            flag=1;
            k++;// so that k=0 is not taken again
            continue;   
            }
            if(k>0) k-=1;
        }
    }
}
string res;
    for(int i=0; i<ans.size();i++){
        res+=ans[i];
    }
return res;
}
   

};