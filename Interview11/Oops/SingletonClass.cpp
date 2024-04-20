class Singleton
{
private:
    static Singleton *instance;
    Singleton() {}

public:
    static Singleton *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton();
        }
        return instance;
    }
};

Singleton *Singleton::instance = nullptr;
int main()
{
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    // s1 and s2 will point to the same object
    return 0;
}