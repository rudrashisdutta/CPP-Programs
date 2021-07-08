#include<iostream>
#include<iomanip>
using namespace std;
class Pol{
    int *coeff;
    int expo;
    public:
    Pol(){}
    Pol(int x){
        cout<<"Enter the maximum power of x in the polynomial:\t";
        cin>>expo;
        coeff=(int*)calloc(expo+1,sizeof(int));
    }
    void enterPoly(){
        for(int i=0;i<=expo;i++){
            cout<<"Enter the coefficient of x to power "<<i<<":\t";
            cin>>*(coeff+i);
        }
    }
    void showPoly(){
        for(int i=expo;i>=0;i--){
            if(i==0){
                cout<<*(coeff);
            }
            else{
                cout<<*(coeff+i)<<"*(x^"<<i<<") + ";
            }
        }
    }
    void add(Pol x,Pol y){
        if(x.expo>y.expo){
            expo=x.expo;
            coeff=(int*)calloc(expo+1,sizeof(int));
            int i;
            for(i=0;i<=y.expo;i++)
            *(coeff+i)=*(x.coeff+i)+*(y.coeff+i);
            for(int j=i;j<=x.expo;j++)
            *(coeff+j)=*(x.coeff+j);
        }
        else{
            expo=y.expo;
            coeff=(int*)calloc(expo+1,sizeof(int));
            int i;
            for(i=0;i<=x.expo;i++)
            *(coeff+i)=*(y.coeff+i)+*(x.coeff+i);
            for(int j=i;j<=y.expo;j++)
            *(coeff+j)=*(y.coeff+j);
        }
    }
    void multiply(Pol x,Pol y){
        expo=x.expo+y.expo;
        coeff=(int*)calloc(expo+1,sizeof(int));
        for(int i=0;i<=x.expo;i++){
            for(int j=0;j<=y.expo;j++){
                *(coeff+(i+j))+=(*(x.coeff+i)**(y.coeff+j));
            }
        }
    }
};
int main(){
    cout<<"Polynomial 1:\n";
    Pol p1(1);
    p1.enterPoly();
    cout<<"\n\nPolynomial 2:\n";
    Pol p2(1);
    p2.enterPoly();
    cout<<"\n\nPolynomial 1:\n";
    p1.showPoly();
    cout<<"\n\nPolynomial 2:\n";
    p2.showPoly();
    Pol m,a;
    a.add(p1,p2);
    cout<<"\n\nPolynomial 1  +  Polynomial 2:\n\n";
    a.showPoly();
    m.multiply(p1,p2);
    cout<<"\n\nPolynomial 1  *  Polynomial 2:\n\n";
    m.showPoly();
}