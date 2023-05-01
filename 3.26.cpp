#include<iostream>
main(){
    using namespace std;
    char N;
    double a,b,c,d,e,f;
    double g,h,i,j,k,l,m;
    double n,o,p,q,r,s,t;
    double u,v,w,x,y,z,az;
    cout<<"Choose Your Time\n"<<"Years = A\n"<<"Months = B\n"<<"Weeks = C\n"<<"Days = D\n";
    cin>>N;
    if(N =='A'){
        cout<<"Enter Your Principal.";
        cin>>a;
        cout<<"Enter Your Time In Years.";
        cin>>b;
        cout<<"Enter Your Annual Rate.";
        cin>>c;
        d=a*b*c;
        e=d/100;
        cout<<"Your Interest Rate."<<e;
        f=e+a;
        cout<<"\nYour Total Value."<<f;
    }
    else if(N =='B'){
        cout<<"Enter Your Principal.";
        cin>>g;
        cout<<"Enter Your Time In Months.";
        cin>>h;
        cout<<"Enter Your Annual Rate.";
        cin>>i;
        j=g*h*i;
        k=100*12;
        l=j/k;
        cout<<"Your Interest Rate."<<l;
        m=g+l;
        cout<<"\nYour Total Value."<<m;
    }
    else if(N =='C'){
        cout<<"Enter Your Principal.";
        cin>>n;
        cout<<"Enter Your Time In Weeks.";
        cin>>o;
        cout<<"Enter Your Annual Rate.";
        cin>>p;
        q=n*o*p;
        r=100*52;
        s=q/r;
        cout<<"Your Interest Rate."<<s;
        t=n+s;
        cout<<"\nYour Total Value."<<t;
    }
    else if(N =='D'){
        cout<<"Enter Your Principal.";
        cin>>u;
        cout<<"Enter Your Time In Days.";
        cin>>v;
        cout<<"Enter Your Annual Rate.";
        cin>>w;
        x=u*v*w;
        y=100*365;
        z=x/y;
        cout<<"Your Interest Rate."<<z;
        az=u+z;
        cout<<"\nYour Total Value."<<az;
    }
    else{
        cout<<"Choose Correct Options";
    }
}
