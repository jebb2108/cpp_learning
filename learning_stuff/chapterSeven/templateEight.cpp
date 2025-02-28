#include <iostream>
#include <string>

template<class A> class Alpha
{
public:
    A alpha;
    Alpha(A a): alpha(a) {}

    void show()
    {
        std::cout << "alpha: " << alpha << std::endl;
    }
};

template<class B> class Bravo
{
public:
    B bravo;
    Bravo(B b): bravo(b) {}
        
        void show()
    {
        std::cout << "bravo: " << bravo << std::endl;
    }
};

template<class A,class B,class C> class Charlie: public
Alpha<A>,public Bravo<B>
{
public:
    C charlie;
    // Constructor:
    Charlie(A a, B b, C c): Alpha<A>(a), Bravo<B>(b), charlie(c) {}

    // Overloading method:
    void show()
    {
        Alpha<A>::show();
        Bravo<B>::show();
        std::cout << "charlie: " << charlie << std::endl;
    }
};

int main()
{
    Charlie<std::string,char,int> objA("text",'A',100);
    Charlie<int,double,char> objB(200,5.5,'B');

    // Calling different instances:
    objA.show();
    std::cout << std::endl;
    objB.show();

    return 0;
}
