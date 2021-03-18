#include <iostream>

using namespace std;

int deletedup(char b[])
{
    if(b[0]=='\0')
    {
        cout<<"\n";

            return 0;
    }
    else if(b[0]==b[1])
    {
        deletedup(b+1);
    }
    else
    {
        cout<<b[0];
        deletedup(b+1);
    }
}

int main()
{
    while(1)
    {
        cout<<"Enter 1 to continue else enter other key to exit"<<endl;
        int c;
        cin>>c;
        if(c==1)
        {
            cout<<"Enter the size of the array"<<endl;
            int a;
            cin>>a;
            char b[a];
            cout<<"Enter the string"<<endl;
            cin>>b;
            deletedup(b);
        }
        else
        {
            break;
        }
    }
}
