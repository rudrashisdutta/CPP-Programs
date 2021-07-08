#include<iostream>
using namespace std;
class FRACTION{
		int n,d;
	public:
		void getData(){
				cout<<"Enter the numerator:  ";
				cin>>n;
				cout<<"Enter the denominator:  ";
				cin>>d;
		}
		void add_val(FRACTION a, FRACTION b);
		void sub_ref(FRACTION &,FRACTION &);
		void mult_add(FRACTION *,FRACTION *);
}num1,num2,num3;
void simplify(int *a,int *b){
	int c,d,hcf;
	if (*a>*b){
        c=*b;
		d=*a;
    }
	else{
		c=*a;
		d=*b;
	}
    for(int i=1;i<=d;i++) {
        if(c%i==0&&d%i==0){
            hcf=i;
        }
    }
	*a/=hcf;
	*b/=hcf;
}
int main() {
	cout<<"For Fraction-1:\n";
	num1.getData();
	cout<<"For Fraction-2:\n";
	num2.getData();
	num3.add_val(num1, num2);
	num3.sub_ref(num1,num2);
	num3.mult_add(&num1,&num2);
}
void FRACTION::add_val(FRACTION a, FRACTION b) {
	int x=a.n*b.d+b.n*a.d;
	int y=a.d*b.d;
	simplify(&x,&y);
    cout<<"\n\nResult of addition = "<<x<<"/"<<y;
}

void FRACTION::sub_ref(FRACTION &a,FRACTION &b) {
	int x=a.n*b.d-b.n*a.d;
	int y=a.d*b.d;
	simplify(&x,&y);
	cout<<"\n\nResult of subtraction = "<<x<<"/"<<y;
}

void FRACTION::mult_add(FRACTION *a,FRACTION *b) {
	int x=a->n*b->n;
	int y=a->d*b->d;
	simplify(&x,&y);
	cout<<"\n\nResult of multiplication = "<<x<<"/"<<y;
}