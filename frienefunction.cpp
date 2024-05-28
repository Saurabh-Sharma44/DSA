#include<iostream>
using namespace std;
class ankit;
class ankush{
    private:
    int money = 10;
    friend void rohit(ankit,ankush);
};
class ankit {
    private:
    int money = 20;
    friend void rohit (ankit,ankush);
};
void rohit(ankit. r1,ankush. r2){
    cout<<r1.money+r2.money;

}
 main(){
    ankush .obj1,ankit. obj2;
    rohit(obj2,obj1);
}