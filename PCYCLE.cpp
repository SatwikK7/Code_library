#include<bits/stdc++.h>
using namespace std;

vector<int> dfs(vector<int>& vec,vector<bool>& visited,int i,vector<int>& temp){
    if(visited[i]==false){
        //temp.push_back(i);
        return temp;
    }
    else{
        visited[i]=false;
        temp.push_back(i);
        dfs(vec,visited,vec[i],temp);
    }
    return temp;
    
}
int main(){
    
    int n;
    cin>>n;
    //cout<<n<<endl;
    vector<int> vec(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
        int count=0;
        vector<vector<int>> ans;
        
        vector<bool> visited(n+1,1);
        for(int i=1;i<=n;i++){
            
            if(visited[i]==1){
            //cout<<i<<"i"<<endl;
            vector<int> temp;
            temp=dfs(vec,visited,i,temp); 
            temp.push_back(i);
            ans.push_back(temp);
            
            count++;
        }
            
    }
        cout<<count<<endl;
        for(auto x:ans){
            for(auto t:x){
                cout<<t<<" ";
            }
            cout<<endl;
        }
    return 0;
}
