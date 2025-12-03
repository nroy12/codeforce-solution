#include<iostream>
#include<string>
using namespace std;

class Exam{

    private:
    string subject;
    int full_mark;
    int cut_off;
    public:
    Exam(){
        subject= " ";
        full_mark = 0;
        cut_off = 0;
    }
    Exam(string subject,int full_mark,int cut_off){
        this->subject=subject;
        this->full_mark = full_mark;
        this->cut_off= cut_off;
    }

    ~ Exam(){
        cout<<"Destrutor is called : "<<endl;
    }
    void display_info(){
        cout<<"Name of subject : "<< subject << "\n";
        cout<<"Full marks of this subject : "<< full_mark <<"\n";
        cout<<"Exam cut-off : "<<cut_off;
     
    }
};

int main(){


Exam *cse = new Exam("Mathematic", 100 , 40);
Exam *ece = new Exam("Mathematic ",100,60);


cout<<endl;
cout<<endl;
cse->display_info();
cout<<endl;
cout<<endl;
cout<<endl;

ece->display_info();

    return 0;
}