#include <iostream>

using namespace std;


int nthDepth = 0;
int sumDepth = 0;

int nthMember(int a1, int d, int n) {
    nthDepth++;  

    if (n == 1) {
        nthDepth--;  
        return a1;
    }

    int result = nthMember(a1, d, n - 1) + d;
    nthDepth--;  
    return result;
}

int sumArithmeticProgression(int a1, int d, int n) {
    sumDepth++;  

    if (n == 1) {
        sumDepth--;  
        return a1;
    }

    int result = sumArithmeticProgression(a1, d, n - 1) + nthMember(a1, d, n);
    sumDepth--; 
    return result;
}

int main() {
    int a1, d, n;

    
    cout << "a1 = ";
    cin >> a1;
    cout << "d = ";
    cin >> d;

    cout << "n = ";
    cin >> n;

    
    int nth = nthMember(a1, d, n);
    cout << "an = " << nth << endl;

    
    int sum = sumArithmeticProgression(a1, d, n);
    cout << "sn = " << sum << endl;

    
    cout << "gl nthMember = " << n << endl;  
    cout << "gl sumArithmeticProgression = " << n << endl;  
    cout << "lvl nthMember = " << nthDepth << endl;
    cout << "lvl sumArithmeticProgression = " << sumDepth << endl;

    return 0;
}
