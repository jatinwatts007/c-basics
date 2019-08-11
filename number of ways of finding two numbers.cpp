 {
     int i,j,k,l,t;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>k;
        for(i=1;i<k;i++)
        {
            for(j=i+1;j<k;j++)
            {
                if(i+j<=k)
                {
                    l++;
                }
            }
        } 
        cout<<l<<endl;
     }
	//code
	return 0;
}
