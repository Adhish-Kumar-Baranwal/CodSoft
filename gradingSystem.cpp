#include<iostream>
#include<string.h>
using namespace std;
class details{
    public:
        string name;
        int rn, n ;
        float phy,mat,chem,eng;
        float totalMarks=0.0, percen;
        void getdata(){
            cout<<"Enter the name of student: ";
            getline(cin,name);
            cout<<"Enter the roll number of student: ";
            cin>>rn;
            cout<<"Enter Physics marks of student(out of 100): ";
            cin>>phy;
            cout<<"Enter Chemistry marks of student(out of 100): ";
            cin>>chem;
            cout<<"Enter Mathematics marks of student(out of 100): ";
            cin>>mat;
            cout<<"Enter English marks of student(out of 100): ";
            cin>>eng;
            totalMarks=(phy + chem + mat + eng);
            percen=(totalMarks/400.0)*100;
            cout<<"\n\n";
        }
        void grade()
        {
            
            if (percen >= 91) 
            {
                cout << "Grade: A+" << endl;
            }
            else if (percen >= 71) 
            {
                cout << "Grade: A" << endl;
            }
            else if (percen >= 51) 
            {
                cout << "Grade: B" << endl;
            }
            else if (percen >= 41) 
            {
                cout << "Grade: C" << endl;
            }
            else if (percen >= 35) 
            {
                cout << "Grade: D" << endl;
            }
            else 
            {
                cout << "Grade: F" << endl;
            }
        }
        void display()
        {
            cout<<"Name of Student: "<<name<<endl;
            cout<<"Roll no. of Student: "<<rn<<endl;
            cout<<"Physics marks of student(out of 100): "<<phy<<endl;
            cout<<"Chemistry marks of student(out of 100): "<<chem<<endl;
            cout<<"Mathematics marks of student(out of 100): "<<mat<<endl;
            cout<<"English marks of student(out of 100): "<<eng<<endl;
            cout<<"Total marks: "<<totalMarks<<endl;
            cout<<"Average: "<<totalMarks/4.0<<endl;
            cout<<"Percentage: "<<percen<<endl;
            grade();
            cout<<"\n\n";
        }
};
int main()
{
    int n;
    cout<<"Enter the number of details you want to enter: ";
    cin>>n;
    details d[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of student "<<i+1<<": \n";
        cin.ignore();
        d[i].getdata();      
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Details of student "<<i+1<<": \n";
        d[i].display();
        cout<<"\n";         
    }
    
    return 0;
}


