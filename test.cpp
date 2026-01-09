#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void  Print(){
    for (int i = 0; i < 10; i++)
    {
        cout<<i<< endl;
        this_thread::sleep_for(1s);
    }
    
}



int main(){
    thread th(Print);
for (int i = 0; i < 10; i++)
{
cout<<"Hello world!"<<endl;
this_thread::sleep_for(0.5s);
}
th.join();
return 0;
}