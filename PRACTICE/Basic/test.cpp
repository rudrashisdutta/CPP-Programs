#include<iostream>
#include<time.h>
#include<direct.h>
int main()
{
    using namespace std;
    cout<<"Loading";
    cout.flush();
    
    {
        for(int i=0;i<3;i++)
        {
            cout<<".";
            cout.flush();
            _GLIBCXX_HAVE_SLEEP;
        }
    }
}