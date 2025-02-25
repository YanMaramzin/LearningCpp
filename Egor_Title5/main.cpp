int main()
{
    return 0;
}

/// Вам дан класс Rational, который описывает рациональное число.
/// В нем определены методы add, sub, mul и div, которые прибавляют к нему число, отнимают число, умножают на число и делят на число соответственно.
/// Кроме того в нем определен метод neg, который меняет знак на противоположный.
///
/// Вам нужно определить операторы +=, -=, *=, /= для класса Rational так, чтобы они могли принимать в качестве аргументов и объекты типа Rational и целые числа.
/// Кроме того вам необходимо определить операторы унарного минуса и плюса для класса Rational.

//struct Rational
//{
//    Rational(int numerator = 0, int denominator = 1);

//    void add(Rational rational);
//    void sub(Rational rational);
//    void mul(Rational rational);
//    void div(Rational rational);

//    void neg();
//    void inv();
//    double to_double() const;
//    Rational& operator += (const Rational &A);
//    Rational& operator -= (const Rational &A);
//    Rational& operator *= (const Rational &A);
//    Rational& operator /= (const Rational &A);

//private:
//    int numerator_;
//    unsigned denominator_;
//};


//Rational& Rational::operator += (const Rational &A) {
//    this->add(A);
//    return *this;
//}
//Rational& Rational::operator -= (const Rational &A) {
//    this->sub(A);
//    return *this;
//}
//Rational& Rational::operator *= (const Rational &A) {
//    this->mul(A);
//    return *this;
//}
//Rational& Rational::operator /= (const Rational &A) {
//    this->div(A);
//    return *this;
//}
//Rational operator-(Rational rat)
//{
//   rat.neg();
//   return rat;
//}

//Rational operator+(Rational const & rat)
//{
//   return rat;
//}

/// Определите для класса Rational операторы сложения, вычитания, умножения и деления,
/// так чтобы объекты типа Rational можно было складывать (вычитать, умножать и делить) не только друг с другом но и с целыми числами.

//struct Rational
//{
//    Rational(int numerator = 0, int denominator = 1);

//    void add(Rational rational);
//    void sub(Rational rational);
//    void mul(Rational rational);
//    void div(Rational rational);

//    void neg();
//    void inv();
//    double to_double() const;

//    Rational& operator+=(Rational rational);
//    Rational& operator-=(Rational rational);
//    Rational& operator*=(Rational rational);
//    Rational& operator/=(Rational rational);

//    Rational operator-() const;
//    Rational operator+() const;

//private:
//    int numerator_;
//    int denominator_;
//};

//Rational operator+(Rational r1, Rational const& r2) {
//    return r1 += r2;
//}

//Rational operator-(Rational r1, Rational const& r2) {
//    return r1 -= r2;
//}

//Rational operator*(Rational r1, Rational const& r2) {
//    return r1 *= r2;
//}

//Rational operator/(Rational r1, Rational const& r2) {
//    return r1 /= r2;
//}

/// Добавьте в класс Rational оператор приведения к double. Все операторы из предыдущих заданий отсутствуют и реализовывать их не нужно.
/// Метод to_double можно использовать в этом задании.
//struct Rational
//{
//    Rational(int numerator = 0, int denominator = 1);

//    void add(Rational rational);
//    void sub(Rational rational);
//    void mul(Rational rational);
//    void div(Rational rational);

//    void neg();
//    void inv();
//    double to_double() const;

//    operator double() const {
//        return to_double();
//    }

//private:
//    int numerator_;
//    int denominator_;
//};

/// Еще одна важная группа операторов, которые полезно реализовать для класса рациональных чисел — это операторы сравнения.
/// Реализуйте операторы <, <=, >, >=, ==, != для класса Rational так,
/// чтобы можно было сравнивать объекты класса Rational не только друг с другом, но и с целыми числами.
//struct Rational
//{
//    Rational(int numerator = 0, int denominator = 1);

//    bool is_null() {
//        return numerator_ == 0;
//    }

//    bool is_neg() {
//        return (numerator_<0)^(denominator_<0);
//    }

//    void add(Rational rational);
//    void sub(Rational rational);
//    void mul(Rational rational);
//    void div(Rational rational);

//    void neg();
//    void inv();
//    double to_double() const;

//    Rational& operator+=(Rational rational);
//    Rational& operator-=(Rational rational);
//    Rational& operator*=(Rational rational);
//    Rational& operator/=(Rational rational);

//    Rational operator-() const;
//    Rational operator+() const;

//private:
//    int numerator_;
//    int denominator_;
//};

//Rational operator+(Rational lhs, Rational rhs);
//Rational operator-(Rational lhs, Rational rhs);
//Rational operator*(Rational lhs, Rational rhs);
//Rational operator/(Rational lhs, Rational rhs);

//bool operator==(Rational const& r1, Rational const&  r2) {
//    return (r1 - r2).is_null();
//}

//bool operator!=(Rational const& r1, Rational const&  r2) {
//    return !(r1 == r2);
//}

//bool operator<(Rational const& r1, Rational const&  r2) {
//    return (r1 - r2).is_neg();
//}

//bool operator>(Rational const& r1, Rational const&  r2) {
//    return r2 < r1;
//}

//bool operator<=(Rational const& r1, Rational const&  r2) {
//    return !(r1 > r2);
//}

//bool operator>=(Rational const& r1, Rational const&  r2) {
//    return !(r1 < r2);
//}


/// Помните иерархию Expression, которую мы разрабатывали на четвёртой неделе?
/// Реализуйте ScopedPtr, который будет работать с указателями на базовый класс Expression.
/// В этом задании вам требуется реализовать методы get, release и reset, операторы * и -> так, как это было описано в предыдущем степе.
/// А также реализуйте конструктор ScopedPtr от указателя на Expression.


//struct Expression;
//struct Number;
//struct BinaryOperation;

//struct ScopedPtr
//{
//    // реализуйте следующие методы:
//    //
//    // explicit ScopedPtr(Expression *ptr = 0)
//    // ~ScopedPtr()
//    // Expression* get() const
//    // Expression* release()
//    // void reset(Expression *ptr = 0)
//    // Expression& operator*() const
//    // Expression* operator->() const

//    explicit ScopedPtr(Expression *ptr = 0) {
//        this->ptr_ = ptr;
//    }

//    ~ScopedPtr() {
//        delete this->ptr_;
//    }

//    Expression* get() const {
//        return this->ptr_;
//    }

//    Expression* release() {
//        Expression *released_ptr = this->ptr_;
//        this->ptr_ = nullptr;
//        return released_ptr;
//    }

//    void reset(Expression *ptr = 0) {
//        delete this->ptr_;
//        this->ptr_ = ptr;
//    }

//    Expression& operator*() const {
//        return *this->ptr_;
//    }

//    Expression* operator->() const {
//        return this->ptr_;
//    }

//private:
//    // запрещаем копирование ScopedPtr
//    ScopedPtr(const ScopedPtr&);
//    ScopedPtr& operator=(const ScopedPtr&);

//    Expression *ptr_;
//};


/// Реализуйте класс SharedPtr как описано ранее. Задание немного сложнее, чем кажется на первый взгляд.
/// Уделите особое внимание "граничным случаям" — нулевой указатель, присваивание самому себе, вызов reset на нулевом SharedPtr и прочее.

//struct Expression;
//struct Number;
//struct BinaryOperation;

//struct SharedPtr
//{
//    explicit SharedPtr(Expression *ptr = 0) : ptr_(ptr), counter(0)
//    { if (ptr) counter = new size_t (1); }

//     ~SharedPtr() {
//         if (ptr_ && !(--*counter)) {
//             delete ptr_;
//             delete counter;
//         }
//     }

//    SharedPtr(const SharedPtr & a) : ptr_(a.ptr_), counter(a.counter)
//    { if (a.ptr_) ++*counter; }

//    SharedPtr& operator=(const SharedPtr & a) {
//        if (this!=&a) {
//            this->~SharedPtr();
//            new (this) SharedPtr(a);
//        }
//        return *this;
//    }

//    void reset(Expression *ptr = 0) {
//        this->~SharedPtr();
//        new (this) SharedPtr(ptr);
//    }

//    Expression* get() const { return ptr_; }

//    Expression& operator*() const { return *ptr_; }

//    Expression* operator->() const { return ptr_; }

//private:
//    Expression *ptr_;
//    size_t *counter;
//};


/// На этом модуль 5 В-С-Ё! Сейчас идёт теория и ответы на вопросы






























