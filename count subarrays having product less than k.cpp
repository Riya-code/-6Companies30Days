//https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#

int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        
        if(n==1)
        {
            if(a[0]<k) return 1;
            else return 0;
        }
        
        long long prePro = 1;
        int i=0,j=0;
        long count = 0;
        while(j<n)
        {
            prePro*=a[j];
            
            while(prePro>=k and i<=j)
            {   
                prePro/=a[i];
                i++;
            }
            
            //Count the length of the window
            count+=(j-i+1);
            
            j++;
        }
        
        return (int)count;
    
    }
