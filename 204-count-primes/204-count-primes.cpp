class Solution {
public:
    int isPrime(int n){
        int cnt=0;
        int ans=0;
    vector<bool> prime(n, true);
 
    // Remaining part of SIEVE
    prime[0] = false;
    prime[1] = false;
    for (int p = 2; p * p <n; p++) {
 
        
        if (prime[p] == true) {
 
            for (int i = p * 2; i <n; i += p)
                prime[i] = false;
        }
    }
        for(int i=2;i<n;i++)
            if(prime[i]==true)
                ans++;
        return ans;
    }
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        return isPrime(n);
    }
};