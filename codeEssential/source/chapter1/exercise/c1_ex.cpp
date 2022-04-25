#include<iostream>
#include<string>
#include<iomanip>
#include<cstring>
#include<vector>
#include<fstream>
#include<algorithm>

using namespace std;
#define NAME_MINLENTH 2


int proc_1()
{
    string name;
    cout<<"please input you name:"<<endl;
    cin>>name;
    if(name.length()>=NAME_MINLENTH)
    {
        cout<<name<<"\n";
    }

}
int proc_2()
{
    #define ARRAYSIZE 128
    char name[ARRAYSIZE];
    cout<<"please input you name:"<<endl;
    cin>>setw(ARRAYSIZE)>>name;
    switch(strlen(name))
    {
        case 0:
        cout<<"0 error\n";
        break;

        case 1:
        cout<<"1 too short\n";
        break;

        default:
        cout<<name<<"\n";
        break;
    }
    
}
int proc_3()
{
    #define ELEMENTNUM 128
    int num_a[ELEMENTNUM],val,sum=0,ave=0;
    vector<int> num_v;
    while(cin >> val)
        {num_v.push_back(val);
        sum+=val;}
    
    ave=sum/(num_v.size());

    cout<<"sum is "<<sum<<"ave is"<<ave<<endl;

}

int proc_4()
{
    //file read
    #define GIVEN_FILE "a.txt"
    #define TO_SAVE_FILE "b.txt"

    
    string str_val;
    //以读取模式打开
    vector<string> data_string;

    ifstream infile(GIVEN_FILE);
    if(!infile){cout<<"file error";}
    else{
        while(infile>>str_val)
        {
        data_string.push_back(str_val);

        }

    }
    int index=0;
    for(index=0;index<data_string.size();index++)
    {
        cout<<data_string[index]<<' ';
    }
    cout<<endl;
    sort(data_string.begin(),data_string.end());
    for(index=0;index<data_string.size();index++)
    {
        cout<<data_string[index]<<' ';
    }
    //string deal process
    //file new save
    ofstream outfile(TO_SAVE_FILE);
    if(!outfile){cout<<"file error";}
    else{
          for(index=0;index<data_string.size();index++)
    {
        outfile<<data_string[index]<<' ';
    }
        }

}


int main(int argc,char *argv[])
{
    proc_4();
    return 0;
}