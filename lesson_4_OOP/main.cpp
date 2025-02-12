#include <QCoreApplication>

int main()
{
    return 0;
}

/// Добавить наследование классов


#include <string> // std::string

struct Character
{
    std::string const & name() const;
    unsigned health() const;
};

struct LongRange:Character // Изииии
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;
};

struct SwordsMan:Character // Изииии
{
    std::string const & name() const;
    unsigned health() const;

    unsigned strength() const;
};

struct Wizard:LongRange // Изииии
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;

    unsigned mana() const;
};

struct Archer:LongRange // Изииииииии
{
    std::string const & name() const;
    unsigned health() const;

    unsigned range() const;

    unsigned accuracy() const;
};


/// оооо даааа, то самое задание с 10% решений
/// Как видно, создатель класса не хотел чтобы его использовали и "спрятал" конструктор класса.
/// Но вам очень нужен объект этого класса, чтобы передать его в функцию foo_says:
/// В этом задании вам нужно реализовать функцию get_foo (сигнатура которой намерено не приводится в задании полностью, вам нужно подумать и вывести ее самостоятельно) так, чтобы следующий код компилировался и работал:
/// foo_says(get_foo(msg));

/* Этот код просто напоминание как выглядит класс Foo и функция foo_says.
 * Не нужно его расскоментировать и/или менять.
 *
 * #include <iostream>
 *
 * struct Foo {
 *     void say() const { std::cout << "Foo says: " << msg << "\n"; }
 * protected:
 *     Foo(const char *msg) : msg(msg) { }
 * private:
 *     const char *msg;
 * };
 *
 * void foo_says(const Foo &foo) { foo.say(); }
 *
 */

// Вам нужно определить функцию get_foo, как описано в задании,
// чтобы компилировался и работал как ожидается следующий код:
//
// foo_says(get_foo("Hello!"));

/// Я этот степ решу тогда в степике, так как писать тесты и оформлять это тут будет неудобно, а ты можешь провести именно код ревью
//struct Boo : Foo
//{
//    Boo(const char *msg) : Foo(msg) { }
//};

//Boo get_foo(const char *msg) {
//    return Boo (msg);
//}
