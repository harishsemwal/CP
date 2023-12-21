int minCandy(int N, vector<int> &ratings) {
        // code here
        int ans=N,i=0;
        while(i+1<N)
        {
            int l=0,h=0;
            while( i+1<N && ratings[i+1]==ratings[i] ) i++;
            while( i+1<N && ratings[i+1]>ratings[i] ) 
            {
                i++;
                l++;
            }
            
            while( i+1<N && ratings[i+1]<ratings[i] )
            {
                i++;
                h++;
            }
            ans += l*(l-1)/2 + h*(h-1)/2 + max(l,h);
            
        }
        return ans;
    }
