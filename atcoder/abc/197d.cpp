#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
#include<numeric>
#include<complex>
#include<complex.h>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    int n;
    cin >> n;
    double x,xx,y,yy;
    cin >> x >> y >> xx >> yy;

    double mx=(x+xx)*0.5,my=(y+yy)*0.5;
    double d=sqrt(pow(mx-x,2)+pow(my-y,2));

    complex<double> a=complex<double>(x-xx,y-yy);
    double kai=arg(a);

    double ten=kai+2*M_PI/n;

    double p=mx+d*cos(ten);
    double q=my+d*sin(ten);

    cout << fixed << setprecision(8) << p << ' ' << q << endl;
}