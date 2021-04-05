#include <iostream>
using namespace std;
int gcd(int x, int y)
{
  if(y == 0)
      return x;
  else
      return gcd(y, x % y);
}
 
int maxfact(int g,int n)
{
    int max_factor=0;
    for(int i = 1; i * i <= g; i++)
    {
        if(g % i == 0)
        {
            if(i <= n)
                max_factor = max(max_factor, i);
            if(g / i <= n)
                max_factor = max(max_factor, g / i);
        }
   }
   return max_factor;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    for(int cases = 1; cases <= t; cases++)
    {
        int  n, m;
        cin >> n >> m;
        int p[m];
        for(int i = 0; i < m; i++)
            cin >> p[i];
        int g = 0;
        for(int i = 0; i < m; i++)
            g = gcd(g, p[i]);// __gcd(g,p[i]);
        if(g>n)
        {
          int factor = maxfact(g,n);   
          g=factor;
        }
        cout << n - g << "\n";
    }
    return 0;
} 