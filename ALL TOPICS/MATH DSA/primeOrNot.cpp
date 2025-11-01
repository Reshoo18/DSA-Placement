#include<iostream>
#include<vector>
#include<string>
using namespace std;
    
      int countPrimes(int n) {
        vector<bool> isprime(n+1,true);
            int count =0;

            for(int i=2; i<n; i++){
                if(isprime[i]){
                    count++;
                }
                    for(int j= i*2; j<n; j=j+i){
                        isprime[j]=false;
                    
                }
            }
            return count;
        }
int main(){
     int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of primes" << countPrimes(n) << endl;

    return 0;
return 0;
}