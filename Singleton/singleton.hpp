#ifndef SINGLETON_HPP
#define SINGLETON_HPP

class Singleton {
public:
    static int count;
    static Singleton& getInstance()  {
        static Singleton instance;
        return instance;
    }
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

private:
    Singleton() {++count;}
    ~Singleton() = default;
};

int Singleton::count = 0;

#endif // SINGLETON_HPP
