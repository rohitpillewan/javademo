#include<set>
#include<iostream>
using namespace std;

int main(){
    set<int> st;
    st.insert(1);
    st.insert(4);
     st.insert(1);
    st.insert(5);
     st.insert(6);
    st.insert(3);
     st.insert(1);
    st.insert(5);
    for(auto i:st){  //it return the element in sorted order also unique
        cout<<i<<endl;
    }cout<<endl;

    cout<<"the 1 are present in : "<<st.count(1)<<endl;

    st.erase(st.begin());
   cout<<"after deleting the element :"<<endl;
     for(auto i:st){  //it return the element in sorted order also unique
        cout<<i<<endl;
    }

    set<int>::iterator it=st.begin(); // "it " IT is not a keyword it is user define variable

    cout<<endl;

   st.erase(it);

   for(auto i:st){  //it return the element in sorted order also unique
        cout<<i<<endl;
    }

    //find 

    set<int>::iterator itr=st.find(5);// itr it is a user define variable 
    cout<<" the position are :"<<*it<<endl;
  

   set<int>::iterator ptr;//loop

   

    return 0;

}