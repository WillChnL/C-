/* William Chan, CS110A_ProgLab7_RC, CS 110A Lab 7,This code print out the numbers that are not repeated */

#include<iostream>
using namespace std;

void getEle (int [], int& );
void outEle (int [], int );

int main()
{
    int a[30], n;

    getEle(a, n);
    outEle(a, n);

    return 0;
}
    void getEle(int a[], int& n)
    {
    cout<<"How many elements? ";
    cin>>n;
    cout<<"\nEnter elements of array\n";

    for(int i=0;i<n;++i)
        cin>>a[i];
    }

    void outEle(int a[], int n)

    {
       for(int i=0;i<n;++i)
           for(int j=i+1;j<n;)
           {
              if(a[i]==a[j])
               {
                  for(int k=j;k<n-1;++k)
                      a[k]=a[k+1];

                  --n;
               }
              else
                  ++j;
           }

       cout<<"\n";
       for(int i=0;i<n;++i)
           cout<<a[i]<<" ";
     }

/*How many elements? 5
Enter elements of array
1
2
2
3
4
1 2 3 4
*/
