class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n+1,true);
            prime[0]=false;
            prime[1]=false;
            for(int i=0;i*i<n;i++){
                if(prime[i]==true){
                    for(int j=2;j*i<=n;j++){
                        prime[j*i]=false;
                    }
                }
            }
            int count=0;
            for(int i=0;i<n;i++){
                if(prime[i]==true){
                    count++;
                }
            }
            return count;
    }
};
