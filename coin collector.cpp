#include "bits/stdc++.h"
//assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr<<#x<< "=" << (x) << endl;
#define RAYA cerr<<"======================"<<endl;
#define RAYAS cerr<<"......................"<<endl;
//#define DBG(x) ;
//#define RAYA ;
//#define RAYAS ;

//--------------------SOLBEGIN---------------------------------

int main()
{
    int Tc;
    cin>>Tc;
    while (Tc--)
    {
        int n,e,c,d,l;
        cin>>n;
        int array[n];
        c=0;
        d=1;
        for (int i = 0; i < n; i++)
        {
            cin>>e;
            array[i]=e;
            c+=e;
        }
        l=array[n-1];
        while (c!=0)
        {
            if(c<array[n-1]){
                n--;
            }
            else if(l!=array[n-1])
            {
                c-=array[n-1];
                d++;
                l=array[n-1];
            }
            else//otro cambio OwO
            {
                c-=array[n-1];
            }
        }//Cambio UwU
        cout<<d<<endl;
    }
    return 0;
}
