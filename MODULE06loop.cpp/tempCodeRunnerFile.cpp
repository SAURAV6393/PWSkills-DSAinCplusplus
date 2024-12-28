
    // { c = a + b;
    //    b = a;
    //    c = b;
    // cout<<a;}
    int n, a=0,b=1,c;
    cout<<"Enter a  terms : ";
    cin>>n;
	for(int i=0;i<n;i++)
	{
	printf("%d ",a);
	c=a+b;
	a=b;
	b=c;
	}


    
   }