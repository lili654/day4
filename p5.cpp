#include <iostream>
#include <algorithm>
using namespace std;
 const int N=110;
 int n;
int map[N][N];

int main()
{
 cin>>n;
 for(int i=1;i<=n;i++)
 {
   for(int j=1;j<=i;j++)
   {
     cin>>map[i][j];
   }
 }

for(int i=2;i<=n;i++)
{
  for(int j=1;j<=i;j++)
  {
    map[i][j]+=max(map[i-1][j-1],map[i-1][j]);
  }
}
 if((n-1)%2==0)
 {
   cout<<map[n][(n+1)/2]<<endl;
 }
 else
 {
   cout<<max(map[n][n/2],map[n][n/2+1])<<endl;
 }

  return 0;
}
