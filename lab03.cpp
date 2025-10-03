/**************************
 * Автор: Устинов Егор    *
 * Вариант: 13            *
 **************************/
 
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double t1, t2, l1, l2, s1, s2;
  double tc, x;
  int numOfIteration = 4;
  double t, loopIteration;
  int numberOfDigitsAfterTheDecimalPoint = 3;
 
  cout << "t1 = ";
  cin  >> t1;
 
  cout << "t2 = ";
  cin  >> t2;
 
  cout << "l1 = ";
  cin  >> l1;
 
  cout << "l2 = ";
  cin  >> l2;
 
  cout << "s1 = ";
  cin  >> s1;
 
  cout << "s2 = ";
  cin  >> s2;

  cout << fixed << setprecision(numberOfDigitsAfterTheDecimalPoint);
 
  for (loopIteration = 0; loopIteration < numOfIteration; ++loopIteration) {
    cout << "t = ";
    cin  >> t;
    
    tc = (l1 / s1 * t1 + l2 / s2 * t2) / (l1 / s1 + l2 / s2);
    
    if (t > tc) {
      x = (t - t1) / (tc - t1) * s1;
    } else {
      x = (t - tc) / (t2 - tc) * s2 + s1;
    }
    
    cout << x << endl;
  }
  
  return 0;
}
