#include<bits/stdc++.h>
using namespace std;
class Fest
{
    string dept,ID,name;
    int batch;
public:
    void input()
    {
        cout<<"Your Department(USE UPPERCASE): ";
        cin>>dept;
        if(dept!="CSE")
        {
            cout<<"Sorry! Only Students from CSE department can participate";
            exit(0);
        }
        else
        {
            ofstream outf("Fest ID.txt");
            cout<<"\nYour Name: ";
            getchar();
            getline(cin,name);
            outf<<">>-----CSE FEST ID-----<<"<<endl;;
            outf<<"\tStudent Name: ";
            outf << name << endl;
            cout<<"\nYour ID: ";
            cin>>ID;
            outf<<"\tStudent ID  :";
            outf << ID << endl;
            cout<<"\nYour Batch: ";
            cin>>batch;
            outf<<"\tBatch       :";
            outf << batch << endl;
            outf<<"Chosen Segments: "<<endl;
            outf.close();
        }
    }

    friend class choice;
};

class singing
{
    int c;
    string song;
public:
    void sing()
    {
    cout<<"Which type of song you want to perform? "<<endl;
    cout<<"1. Solo"<<endl;
    cout<<"2. Duet"<<endl;
    cout<<"3. Chorus"<<endl;
    s:
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c)
    {
    case 1:
        {
        song="Solo Song";
        ofstream inf("Fest ID.txt",ios::app);
        inf << song << endl;
        inf.close();
        break;
        }
    case 2:
        {
        song="Duet Song";
        ofstream cf("Fest ID.txt", ios::app);
        cf << song << endl;
        cf.close();
        break;
        }
    case 3:
        {
        song="Chorus Song";
        ofstream outf("Fest ID.txt",ios::app);
        outf << song << endl;
        outf.close();
        break;
        }
    default:
        cout<<"Invalid Choice, enter choice again!"<<endl;
        goto s;
        break;
    }
    }
};

class dancing
{
    int c;
    string nach;
public:
    void dance()
    {
    cout<<"Which type of dance you want to perform? "<<endl;
    cout<<"1. Solo"<<endl;
    cout<<"2. Duet"<<endl;
    cout<<"3. Group"<<endl;
    d:
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c)
    {
    case 1:
        {
        nach="Solo Dance";
        ofstream outf("Fest ID.txt",ios::app);
        outf << nach << endl;
        outf.close();
        break;
        }
    case 2:
        {
            nach="Duet Dance";
            ofstream outf("Fest ID.txt", ios::app);
            outf << nach << endl;
            outf.close();
            break;
        }
    case 3:
        {
        nach="Group Dance";
        ofstream outf("Fest ID.txt", ios::app);
        outf << nach << endl;
        outf.close();
        break;
        }

    default:
        cout<<"Invalid Choice, enter choice again!"<<endl;
        goto d;
        break;
    }
    }
};

class drama
{
    int c;
    string natok;
public:
     void dramas()
    {
    cout<<"Which type of drama you want to perform? "<<endl;
    cout<<"1. Rom-Com"<<endl;
    cout<<"2. Musical"<<endl;
    l:
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c)
    {
    case 1:
        {
        natok="Rom-Com Drama";
        ofstream outf("Fest ID.txt", ios::app);
        outf << natok << endl;
        outf.close();
        break;
        }
    case 2:
        {
        natok="Musical Drama";
        ofstream outf("Fest ID.txt", ios::app);
        outf << natok << endl;
        outf.close();
        break;
        }

    default:
        cout<<"Invalid Choice, enter choice again!"<<endl;
        goto l;
        break;
    }
    }
};

class mime
{
    int c;
    string muk;
public:
     void mimes()
    {
        muk="Mime";
        ofstream outf("Fest ID.txt",ios::app);
        outf << muk << endl;
        outf.close();
    }
};

class choice
{
    int choice;
public:
    void press(Fest c)
    {
    if(c.batch==20)
    {
        cout<<"You can participate in 4 segment"<<endl;
        cout<<"1. Singing"<<endl;
        cout<<"2. Dancing"<<endl;
        cout<<"3. Drama"<<endl;
        cout<<"4. Mime"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter Choice: ";
        q:
        cin>>choice;
        if(choice==1)
        {
            singing s;
            s.sing();
            cout<<"Choose next Segment or to exit press 5:";
            goto q;
        }
         else if(choice==2)
        {
            dancing d;
            d.dance();
            cout<<"Choose next Segment or to exit press 5:";
            goto q;
        }
        else if(choice==3)
        {
            drama dr;
            dr.dramas();
            cout<<"Choose next Segment or to exit press 5:";
            goto q;
        }
        else if(choice==4)
        {
            mime m;
            m.mimes();
            cout<<"Choose next Segment or to exit press 5:";
            goto q;
        }
        else if(choice==5)
        {
            exit(0);
        }
     }
    else{
            cout<<"You can participate in 3 segment"<<endl;
            cout<<"1. Singing"<<endl;
            cout<<"2. Dancing"<<endl;
            cout<<"3. Drama"<<endl;
            cout<<"4. Exit"<<endl;
            cout<<"Enter Choice: ";
        e:
        cin>>choice;
        switch(choice)
        {
        case 1:
            {
                singing s;
                s.sing();
                cout<<"Choose next Segment or to exit press 4:";
                goto e;
            }
        case 2:
            {
                dancing d;
                d.dance();
                cout<<"Choose next Segment or to exit press 4:";
                goto e;
            }
        case 3:
            {
                drama dr;
                dr.dramas();
                cout<<"Choose next Segment or to exit press 4:";
                goto e;
            }
        case 4:
            {
                exit(0);
            }

        }
    }
    }
};
int main()
{
    Fest obj;
    obj.input();
    while(1){
        choice c;
        c.press(obj);
    }
}


