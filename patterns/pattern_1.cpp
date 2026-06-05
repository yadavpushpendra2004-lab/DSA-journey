#include<iostream>
using namespace std;
void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void pattern5(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<"* ";
          
        }
        cout<<endl;
    }
}
void pattern6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout<<n-j+1<<" ";
          
        }
        cout<<endl;
    }
}
void pattern7(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>i;k--)
        {
           cout<<" ";
           
        }
        for(int j=0;j<2*i+1;j++)
           {
            cout<<"*";
           }
        cout<<endl;
    }
}
void pattern8(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
        }
         for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void pattern9(int n)
{
     for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>i;k--)
        {
           cout<<" ";
           
        }
        for(int j=0;j<2*i+1;j++)
           {
            cout<<"*";
           }
        cout<<endl;
    }
     for(int i=1;i<=n-1;i++)
    {
        for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*(n-i)-1;j++)
        {
            cout<<"*";
        }
         for(int k=0;k<i;k++)
        {
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void pattern10(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern11(int n)
{
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<=i;j++)
        {
        if((i+j)%2==0)
        cout<<"1";
        else
        cout<<"0";
        }
          cout<<endl;
    }
  
}
void pattern12(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int k=0;k<2*(n-i);k++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern13(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}
void pattern14(int n)
{
    for(int i=0;i<n;i++)
    {
        char k=65;
        for(int j=0;j<=i;j++)
        {
            
            cout<<k;
            k=k+1;
        }
        cout<<endl;
    }
}
void pattern15(int n)
{
    for(int i=0;i<n;i++)
    {
        char k=65;
        for(int j=0;j<n-i;j++)
        {
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}
void pattern16(int n)
{
    char k=65;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<k;
        }
        cout<<endl;
        k++;
    }
}
void pattern17(int n)
{
    for(int i=0; i<n;i++)
    {
        char k=65;
        for(int k=0;k<n-i;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j<=i)
            {
                cout<<k;
                k++;
            }
            else
            {
                char ch=k-2;
                cout<<ch;
                k--;
            }
            

        }
        for(int k=0;k<n-i;k++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void pattern18(int n)
{
    for(int i=0;i<n;i++)
   {
       char k=65+n-1-i;
       for(int j=0;j<=i;j++)
       {
        cout<<k;
        k++;
    }
    cout<<endl;
   }
}
void pattern19(int n)
{
    int space=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
     
        for(int k=0;k<space;k++)
        {
            cout<<" ";
        }
         for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*(n-i);k++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern20(int n)
{
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=0;k<2*(n-i);k++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
      int space=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
     
        for(int k=-1;k<=space;k++)
        {
            cout<<" ";
        }
         for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        space+=2;
        cout<<endl;
    }
}
void pattern21(int n)
{
    for(int i=0;i<=n;i++)
    {
        if(i==0 || i==n)
        {
            for(int j=0;j<n;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for(int j=0;j<n-2;j++)
            {
                cout<<" ";
             }
             cout<<"*";
         }
         cout<<endl;
    }

}
void pattern22(int n)
{
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int top=i;
            int left=j;
            int right=2*n-2-j;
            int bottom=2*n-2-i;
            cout<<n-min(min(top,bottom),min(left,right))<<" ";
         }
         cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern22(n);
}