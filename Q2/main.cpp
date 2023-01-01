//
// Created by jesal on 30-12-2022.
//

#include <bits/stdc++.h>
using namespace std;
struct Image {
    int id;
    string name;
};

int main(){
    vector<Image> imageArr;
    map<int,int> dict;
    for(int i=1;i<=5;i++){
        int tempid = i*i -i;
        Image tempImage;
        tempImage.id=tempid;
        tempImage.name="SAMPLE NAME " + to_string(i);
        cout<<"ID : "<<tempImage.id<<"  "<<endl<<"IMAGE NAME : "<<tempImage.name<<endl<<endl;
        dict[tempid]=i;
        imageArr.push_back(tempImage);
    }
    cout<<"ENTER a to add an image, d to delete"<<endl;
    string in;
    cin>>in;
    if(in=="a")
    {
        cout<<"ENTER image id"<<endl;
        int id;
        cin>>id;
        if(dict[id])
        {
            cout<<"IMAGE ALREADY EXISTS"<<endl;
        }
        else
        {
            cout<<"ENTER image name"<<endl;
            string name;
            cin>>name;
            Image temp;
            temp.id=id;
            temp.name=name;
            imageArr.push_back(temp);
        }
    }
    else if(in=="d")
    {
        cout<<"ENTER image id"<<endl;
        int id;
        cin>>id;
        if(dict[id])
        {
            imageArr.erase(imageArr.begin()+dict[id]);
        }
        else
        {
            cout<<"IMAGE DOSENT EXISTS"<<endl;
        }
    }
    else{
        cout<<"INVALID INPUT"<<endl;
    }
    return 0;
}