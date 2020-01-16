#include<list>
#include<iostream>

using namespace std;


int main(){

    list<int> mylist(0);
    mylist.push_front(100);
    mylist.push_back(200);
    mylist.pop_front();

    //Iterator to print the list out
    cout << "mylist contains " <<endl;
    for (list<int> :: iterator i = mylist.begin(); i!= mylist.end(); i++)
    {
        cout << " " << *i;
      
    }
    
      cout << "\n" << endl;

    return 0;

}