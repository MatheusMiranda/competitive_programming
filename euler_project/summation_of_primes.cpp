#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define MAX 2000001

vector<long long> primes3(long long N)
{
  bitset<MAX + 10> sieve;      // MAX deve ser maior ou igual a N
  vector<long long> ps;

  sieve.set();            // Todos são "potencialmente" primos

  ps.push_back(2);        // Os pares são tratados à parte

  for (long long i = 3; i <= N; i += 2)     // Apenas ímpares são verificados agora
  {
    if (sieve[i])       // i é primo
    {
      ps.push_back(i);

      for (long long j = i * i; j <= N; j += 2*i)
        sieve[j] = false;
    }
  }

  return ps;
}

int main(){
  vector<ll> vet = primes3(MAX);
  
  ll sum = 0;
  for(auto el : vet){
    sum += el;
  }
  
  cout << sum << endl;
}
