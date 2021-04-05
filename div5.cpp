#include<bits/stdc++.h>
using namespace::std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int sum=0;
        int greater_than_k=0;int smaller_than_k=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
            arr[i]>=k ? greater_than_k++ : smaller_than_k++;
        }
        if(sum<2*k)
        {
            cout<<"-1\n";
            continue;
        }
        if(greater_than_k>=2)
        {
            cout<<"2\n";
            continue;
        }
        sort(arr,arr+n,greater <int>());
        int tower_1=0;
        tower_1+=arr[0];
        int tower_2=0;
        int i=1;
        int iter=0;
        while(tower_1<k || tower_2<k)
        {
            iter+=1;
            if(k-tower_1==arr[i])
            {
                tower_1+=arr[i];
                i++;
            }
            if(k-tower_2==arr[i])
            {
                tower_2+=arr[i];
                i++;
            }
            if(k-tower_1>=arr[i] && k-tower_1-arr[i]>=k-tower_2-arr[i])
            {
                tower_1+=arr[i];
                i++;
            }
            if(k-tower_2>=arr[i] && k-tower_1-arr[i]<=k-tower_2-arr[i])
            {
                tower_2+=arr[i];
                i++;
            }
            
            if(tower_1>=k && tower_2<k)
            {
                tower_2+=arr[i];
                i++;
            }
            if(tower_2>=k && tower_1<k)
            {
                tower_1+=arr[i]; 
                i++;
            }
            if(iter==10)
            {
                break;
            }
        }
        cout<<i<<"\n";
        
    }
    return 0;
}