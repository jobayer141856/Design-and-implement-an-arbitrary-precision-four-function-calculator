#include <bits/stdc++.h>
using namespace std;

void makeStandard(long long x, long long y)
{
    long long d,c;
    int cnt=0;
    c=x;
    d=x;
    while(d!=0)
    {
        d/=10;
        cnt++;
    }

    cnt--;

    long double m=c;

    long double n = (c/pow(10,cnt));

    cout<<endl;
    cout<<"\t\t\t\t\tResult: "<< fixed << setprecision(y) << n << "*10^" << cnt <<  endl;

    cout<<endl;
}

void floatToStandard(long double c, long long e)
{
    int cnt=0;
    string s = to_string(c);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
        {
            break;
        }
        cnt++;
    }
    cout<<cnt<<endl;

    string ss;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='.')
        {
            ss.push_back(s[i]);
        }

        if(i==0)
        {
            ss.push_back('.');
        }
    }
    cout <<"\t\t\t\t\tResult: ";
    for(int i=0; i<ss.size(); i++)
    {

        cout << ss[i];

        if(i>1)
        {
            e--;
            if(e==0)
            {
                break;
            }
        }
    }

    while(e--)
    {
        cout << "0";
    }

    cout << "*10^" << cnt-1 << endl;
}
void solve1()
{
    long long a,b,c,cnt=0,d,e;

    cout<<"\t\t\t\t\tInput Integer A: ";
    cin>>a;
    cout<<"\t\t\t\t\tInput Integer B: ";
    cin>>b;
    cout<<"\t\t\t\t\tInput Precision: ";
    cin>>e;

    c = a+b;
    makeStandard(c,e);

}
void solve2()
{
    long long a,b,c,cnt=0,d,e;

    cout<<"\t\t\t\t\tInput Integer A: ";
    cin>>a;
    cout<<"\t\t\t\t\tInput Integer B: ";
    cin>>b;
    cout<<"\t\t\t\t\tInput Precision: ";
    cin>>e;

    c = a-b;
    makeStandard(c,e);
}

void solve3()
{
    long long d,e=0,cnt=0;

    long double a,b,c;

    cout<<"\t\t\t\t\tInput Integer A: ";
    cin>>a;
    cout<<"\t\t\t\t\tInput Integer B: ";
    cin>>b;
    cout<<"\t\t\t\t\tInput Precision: ";
    cin>>e;

    a = sqrt(a);
    b = sqrt(b);

    c = (a+b);

    floatToStandard(c,e);


}

void solve4()
{

    long double a,b,c,e;
    cout<<"\t\t\t\t\tInput Floating Multiplier: ";
    cin>>a;
    cout<<"\t\t\t\t\tInput Floating Multiplicand: ";
    cin>>b;
    cout<<"\t\t\t\t\tInput Precision: ";
    cin>>e;


    c = (a*b);

    floatToStandard(c,e);

}
void solve5()
{

    long long a,b,c,cnt=0,d,e;

    cout<<"\t\t\t\t\tInput Integer Multiplier: ";
    cin>>a;
    cout<<"\t\t\t\t\tInput Integer Multiplicand: ";
    cin>>b;
    cout<<"\t\t\t\t\tInput Precision: ";
    cin>>e;
    c = a*b;
   makeStandard(c,e);

}
void  solve6()
{

    long double a,b,c,e;

    cout<<"\t\t\t\t\tInput Integer Dividend: ";
    cin>>a;
    cout<<"\t\t\t\t\tInput Integer Divisor: ";
    cin>>b;
    cout<<"\t\t\t\t\tInput Precision: ";
    cin>>e;
    c = (a/b);
    floatToStandard(c,e);
}



int main()
{
    int n;
    cout<<"\t\t*********************************************************************************\n";
    cout<<"\t\t\t\tArbitrary Precision Four Function Calculator\n\n";
    while(1)
    {
        cout<<"\t\t\t\t\tEnter 1 for Addition\n\t\t\t\t\tEnter 2 for Subtraction\n\t\t\t\t\tEnter 3 for Multiplication\n\t\t\t\t\tEnter 4 for Division\n\t\t\t\t\tEnter 5 for Exit\nEnter your choice: ";
        cin >> n;
        cout<<endl;
        if(n==1)
        {
            int x;
            cout<<"Enter 1 for Addition of Integer\n";
            cout<<"Enter 2 for Addition of Sqrt\n\n" ;
            cout<<"Enter your choice: ";
            cin>>x;
            if(x==1){
              solve1();
            }
            else{
               solve3();
            }
        }
        else if(n==2)
        {
            solve2();
        }
        else if(n==3)
        {
           int x;
            cout<<"Enter 1 for Multiplication of Integer\n" ;
            cout<<"Enter 2 for Multiplication of Floating Point\n\n" ;
            cout<<"Enter your choice: ";

            cin>>x;
            if(x==1){
              solve5();
            }
            else{
               solve4();
            }

        }

        else if(n==4)
        {
            solve6();
        }
        else if (n==5){
            break;
        }
        else
        {
            cout<<"\t\t\t\t\twrong input!!!!!";
        }
        cout<<"\n\t\t*********************************************************************************\n";
    }

    return 0;
}

