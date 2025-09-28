//Name: Sameer Yasin
//PRN: 24070123092
//Branch: ENTC B1
//Exp-17

//Program-1
#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){
    Node* n=new Node(20);
    cout<<n->val<<" "<<n->next<<endl;
    return 0;
}


/*==========OUTPUTS==========
20 0
*/
