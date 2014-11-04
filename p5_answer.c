class Foo
{
private:
    int m_nValue;

public:
    Foo();
    int GetValue() { return m_nValue; }
};

Foo::Foo()
{
    m_nValue=0;
}

int main()
{
    Foo cFoo;
    if (cFoo.GetValue() > 0)
        // do something
    else
        // do something else
}
