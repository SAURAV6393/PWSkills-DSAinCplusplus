 // FOR REMAINING ELEMENT 
    if(i==n)// arr1 ke saare element utha chuka hoon
    {
        while(j<= m-1)
        {
            res[k] =  arr2[j];
            k++ ;
            j++ ;
        }
    } 
    if(j==m)// arr2 ke saare element utha chuka hoon
    {
        while(i<= n-1)
        {
            res[k] =  arr1[i];
            k++ ;
            i++ ;
        }
    } 