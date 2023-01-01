#include <bits/stdc++.h>
using namespace std;
struct GameObject{
    int x,y;
};

int main() {
    vector<GameObject> gameObjArr(12);
    GameObject gameObject ;
    srand(time(0));
    fstream file;
    remove("DIST.DAT");
    file.open("DIST.DAT", ios::binary | ios::app | ios::out | ios::in );
    for(int i=0;i<12;i++)
    {
        GameObject temp ;
        temp.x=rand();
        temp.y=rand();
        gameObjArr[i]=temp;


        file.write( (char*)&temp, sizeof(temp));
        cout<<temp.x<<" "<<temp.y<<endl;
    }
    file.seekg(0);
    file.read( (char*)&gameObject, sizeof(gameObject) );
    int count = 0;
    cout<<"FILE OUTPUT"<<endl<<endl;
    while( !file.eof() )           // quit on EOF
    {
        cout<<gameObject.x<<" "<<gameObject.y<<endl;
        file.read( (char*)&gameObject, sizeof(gameObject) );  // read another
    }


    return 0;
}
