#include<iostream>
using namespace std;

class gender{
    private:
        string person_gender;
    public:
        void setgender(string g){
            person_gender = g;
        }
        string getgender(){
            return person_gender;
        }
};
int main(){
    gender person1;
    gender person2;
    person1.setgender("Male");
    person2.setgender("Female");
    cout<<"Gender: "<<person1.getgender()<<endl;
    cout<<"Gender: "<<person2.getgender()<<endl;
    return 0;
}