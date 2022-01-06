#include<iostream>
#include<cmath>

int main() {
  for(int64_t m=1; m < 1000000; ++m) {
    for(int64_t k=3; k < 10000; ++k) {
      int64_t l = k*(m+m+k+1)/2, n = m*(m+k+1) + k*(k+1)/2;
      l *= n;
      double l3 = std::cbrt(l);
      int64_t p = l3;
      if(p*p*p == l) {
        std::cout << "Sum{k=" << m+1 << " to " << m+k
          << " }k^3 = " << p << "^3" << std::endl;
      }   
    }   
  }
  return 0;
}
