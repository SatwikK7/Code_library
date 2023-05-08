class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."

    long long toh(int N, int from, int to, int aux) {
        int c=1;
         if (N == 1)
    {
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return 1;
    }
    else{
    toh(N - 1, from, aux, to);
    cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;


    toh(N - 1, aux, to, from);
    }
     if(N==1)
    {
        return c;
    }
    else
    {
    for(int i=0;i<N;i++)
    {
        c=c*2;
    }
   return  c-1;
    }
}
};
