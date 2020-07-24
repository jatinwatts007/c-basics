 {
	int t;
	cin>>t;
	while(t--){
	   int n,m;
	   cin>>n;
	   cin>>m;
	   int arr[n][m];
	   int x=m;
	   int ans=0;
	   bool flag = false;
	   for(int i=0;i<n;i++){
	       flag=true;
	       for(int j=0;j<m;j++){
	           cin>>arr[i][j];
	           if(arr[i][j]==1 && j<x && flag){
	               x=j;
	               ans=i;
	               flag=false;
	           }
	       }
	   }
	   cout<<ans<<endl;
	   
	}
	return 0;
}
