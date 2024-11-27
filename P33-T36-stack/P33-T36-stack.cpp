#include "MyStack.h"
#include <string>
using std::string;

int main()
{
    using namespace myStack;

    Stack<string> p33;//LIFO
    p33.push_back("Students");
    p33.push_back("of");
    p33.push_back("the");
    p33.push_back("group");
    p33.push_back("P33");
    p33.showStack();
    cout << "------------------------\n\n";
    p33.pop_back();
    p33.showStack();//
    cout << "------------------------\n\n";
    //Розвантаження стеку (обробка стеку)
    while (!p33.isEmpty()) {
        cout << "# " << p33.top() << endl;
        p33.pop_back();
    }
    p33.showStack();
}

