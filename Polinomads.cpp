#include<iostream>
using namespace std;
class Monom{
    int grad;
    float coef;
public:
    Monom(int a, float b):grad(a),coef(b){}
    ///Monom(int a, float b):grad(a),coef(b){}
    ~Monom(){

    };
} A-Monom;
class Polinom{
    int nr_monoame;
    Monom *m;
    Polinom (int a): nr_monoame(a){m = new Monom[nr_monoame];}
    ///Polinom (int a): nr_monoame(a){m = new Monom[nr_monoame];}
    ~Polinom (){delete m;}
};
class Polinom_reductibil: private Polinom{
    void Eisenstein(Polinom);
    ~Polinom_reductibil(){

    };
};

void Polinom_reductibil::Eisenstein(Polinom p){
    int n;
    int r,x,nr,stop;
    cmmmdc=p.Monom m[0].coef;
    for(i=1;i<n;i++){
        nr=Monom m[i].coef;
        while(nr!=0){
            r=cmmdc%nr;
            cmmdc=nr;
            nr=r;
        }
        if(i==n-1)
           x=cmmdc;
    }
    stop=0;
    if(cmmdc!=1)
        cout<<"Nu este ireductibila.";
    else
        for(i=2;i<=x&&stop==0;i++){
            if(x%i==0){
                nr=i;
                ok=1;
                if(nr%2==0&&nr!=2)
                    ok=0;
                else
                    for(j=3;j*j<=nr&&ok==1;j++)
                        if(nr%j==0)
                            ok=0;
                if(ok==1)
                    if(p.Monom m[n-1].coef%i!=0&&coef[n]%(i*i)!=0)
                        stop=1;
            }
        }
        if(stop==1)
            cout<<"Este ireductibil.";
        else
            cout<<"Nu este ireductibil.";
    /*
    cmmmdc=coef[1];
    for(i=2;i<=n;i++){
        nr=coef[i];
        while(nr!=0){
            r=cmmdc%nr;
            cmmdc=nr;
            nr=r;
        }
        if(i==n-1)
           x=cmmdc;
    }
    stop=0;
    if(cmmdc!=1)
        cout<<"Nu este ireductibila.";
    else
        for(i=2;i<=x&&stop==0;i++){
            if(x%i==0){
                nr=i;
                ok=1;
                if(nr%2==0&&nr!=2)
                    ok=0;
                else
                    for(j=3;j*j<=nr&&ok==1;j++)
                        if(nr%j==0)
                            ok=0;
                if(ok==1)
                    if(coef[n]%i!=0&&coef[n]%(i*i)!=0)
                        stop=1;
            }
        }
        if(stop==1)
            cout<<"Este ireductibil.";
        else
            cout<<"Nu este ireductibil.";
    */
}

int main(){
cin>>Monom.grad>>Monom.coef;
cout<<Monom.grad<<" "<<Monom.coef;
return 0;
}
