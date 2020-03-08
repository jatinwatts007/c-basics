 {
     int i,j,k,t,m,n;
     cin>>t;
     while(t--)
     {
         m=2;
         cin>>n;
         while(n/m>0)
         {
             m=m*2;
         }
         cout<<m/2<<endl;
     }
}
