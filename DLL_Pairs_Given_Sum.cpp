    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
         vector<pair<int,int>> result ; 
         Node *low=head , *high=head ; 
         while(high->next){
             high = high->next ; 
         }
         while(low->data<high->data){
             int req = target-low->data ; 
             while(low->data<high->data && high->data>req){
                 high = high->prev ; 
             }
             if(high->data==req && high!=low){
                 result.push_back({low->data,high->data}) ;
             }
             low = low->next ; 
         }
         return result ; 
    }
