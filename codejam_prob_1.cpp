#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int t,x=1;
        cin>>t;
        while(t--)
            {
                int n;
                cin>>n;
                int a[n+1][n+1],i,j,k,s=0,r=0,c=0,f=0,g=0;
                for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                            {
                                cin>>a[i][j];
                                if(i==j)
                                    s+=a[i][j];
                            }
                    }
                for(i=0;i<n;i++)
                    {
                        f=0;
                        for(j=0;j<n;j++)
                            {
                                for(k=j+1;k<n;k++)
                                    {
                                        if(a[i][j]==a[i][k])
                                            {
                                                r++;
                                                f=1;
                                                break;
                                            }
                                    }

                                if(f==1)
                                    break;
                            }
                    }
                for(i=0;i<n;i++)
                    {
                        g=0;
                        for(j=0;j<n;j++)
                            {
                                for(k=j+1;k<n;k++)
                                    {
                                        if(a[j][i]==a[k][i])
                                            {
                                                c++;
                                                g=1;
                                                break;
                                            }
                                    }
                                if(g==1)
                                    break;
                            }
                    }
                cout<<"Case #"<<x<<":"<<" "<<s<<" "<<r<<" "<<c<<endl;
                x++;

            }
        return 0;
    }
