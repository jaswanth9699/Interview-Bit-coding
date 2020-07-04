void Solution::setZeroes(vector<vector<int> > &A) {
    int i,j,r=0,c=0;
    if(A.size()==0)
        return ;
	for(i=0;i<A.size();i++)
	{
	    if(A[i][0]==0)
	   {
	       r=1;
	       break;
	   }
	}
	for(i=0;i<A[0].size();i++)
	{
	    if(A[0][i]==0)
	   {
	       c=1;
	       break;
	   }
	}
	for(i=0;i<A.size();i++)
	{
	    for(j=0;j<A[i].size();j++)
	    {
	        if(A[i][j]==0)
	        {
	            A[i][0]=0;
	            A[0][j]=0;
	        }
	    }
	}
	for(i=1;i<A.size();i++)
	{
	    for(j=1;j<A[i].size();j++)
	    {
	        if(A[i][0]==0 || A[0][j]==0)
	            A[i][j]=0;
	    }
	}
	if(r==1)
	{
	    for(i=0;i<A.size();i++)
	        A[i][0]=0;
	}
	if(c==1)
	{
	    for(i=0;i<A[0].size();i++)
	        A[0][i]=0;
	}
}