int main()
{
    return 0;
}

///Реализуйте шаблонную версию класса Array. Список всех операций, которые должен поддерживать класс Array, приведен в шаблоне кода.
// Список операций:
//
// explicit Array(size_t size = 0, const T& value = T())
//   конструктор класса, который создает
//   Array размера size, заполненный значениями
//   value типа T. Считайте что у типа T есть
//   конструктор, который можно вызвать без
//   без параметров, либо он ему не нужен.
//
// Array(const Array &)
//   конструктор копирования, который создает
//   копию параметра. Считайте, что для типа
//   T определен оператор присваивания.
//
// ~Array()
//   деструктор, если он вам необходим.
//
// Array& operator=(...)
//   оператор присваивания.
//
// size_t size() const
//   возвращает размер массива (количество
//                              элементов).
//
// T& operator[](size_t)
// const T& operator[](size_t) const
//   две версии оператора доступа по индексу.


//#include <cstddef>

//template <typename T>
//class Array
//{
//private:
//    size_t size_;
//    T *data_;

//public:
//    // Конструктор класса
//    explicit Array(size_t size = 0, const T &value = T()) : size_(size), data_(new T[size_])
//    {
//        for (size_t i = 0; i < size_; ++i)
//        {
//            data_[i] = value;
//        }
//    }

//    // Конструктор копирования
//    Array(const Array &other) : size_(other.size_), data_(new T[size_])
//    {
//        for (size_t i = 0; i < size_; ++i)
//        {
//            data_[i] = other.data_[i];
//        }
//    }

//    // Деструктор
//    ~Array()
//    {
//        delete[] data_;
//    }

//    // Оператор присваивания
//    Array &operator=(const Array &other)
//    {
//        if (this != &other)
//        {
//            delete[] data_;
//            size_ = other.size_;
//            data_ = new T[size_];
//            for (size_t i = 0; i < size_; ++i)
//            {
//                data_[i] = other.data_[i];
//            }
//        }
//        return *this;
//    }

//    // Метод возвращает размер массива
//    size_t size() const
//    {
//        return size_;
//    }

//    // Оператор доступа по индексу
//    T &operator[](size_t index)
//    {
//        return data_[index];
//    }

//    // Константная версия оператора доступа по индексу
//    const T &operator[](size_t index) const
//    {
//        return data_[index];
//    }
//};
///                 ^
/// На решение этой | задачи у меня ушло 1,5 часа... Конечно разобрался в чём была ошибка, но вот грустно, что очень абстрактные задания с таким уровнем сложности, не, надеюсь это реально важно и мне это пригодится!
/// Главное что решил





/// Шаблонные классы можно наследовать.
/// Реализуйте шаблонную структуру ValueHolder с одним типовым параметром T, унаследованную от интерфейса ICloneable.
/// Интерфейс ICloneable содержит всего один виртуальный метод ICloneable* clone() const, который должен вернуть указатель на копию объекта, на котором он был вызван (объект должен быть создан в куче).
/// Шаблон ValueHolder, как говорит его название, хранит всего одно значение (назовите его data_) типа T (для типа T определен конструктор копирования).
/// Не делайте поле data_ закрытым (поэтому в данном случае мы явно пишем, что ValueHolder должна быть структурой).

//struct ICloneable
//{
//    virtual ICloneable* clone() const = 0;
//    virtual ~ICloneable() { }
//};

//// Шаблон ValueHolder с типовым параметром T,
//// должен содержать одно открытое поле data_
//// типа T.
////
//// В шаблоне ValueHolder должен быть определен
//// конструктор от одного параметра типа T,
//// который инициализирует поле data_.
////
//// Шаблон ValueHolder должен реализовывать
//// интерфейс ICloneable, и возвращать указатель
//// на копию объекта, созданную в куче, из метода
//// clone.

//// Шаблонная структура ValueHolder
//template<typename T>
//struct ValueHolder : public ICloneable {
//    T data_;

//    ValueHolder(const T& data) : data_(data) {}

//    // Метод для создания копии объекта
//    virtual ICloneable* clone() const override {
//        return new ValueHolder<T>(data_);
//    }
//};
/// решил посмотреть комментарии и полностью согласен, с каждым разом всё сложнее и сложнее понимать условие задачи. Наверное просто большой объём информации и я не на все 100% её перевариваю

///  Смотрю шаблоны функций
///  - наконец-то все 100% лекции я понимаю!

/// Реализуйте функцию копирования элементов copy_n из массива источника типа U* в целевой массив типа T*, где T и U произвольные типы, для которых определено преобразование из U в T.
/// На вход функция принимает два указателя и количество элементов, которые необходимо скопировать.

//#include <cstddef>

//// Параметры функции copy_n идут в следующем
//// порядке:
////   1. целевой массив
////   2. массив источник
////   3. количество элементов, которые нужно
////      скопировать
////
//// Вам нужно реализовать только функцию copy_n,
//// чтобы ее можно было вызвать так, как показано
//// в примере.

//template <class U, class T>
//void copy_n(T* mas1,U* mas2, size_t size){
//    for (int i = 0; i != size; ++i){
//        mas1[i] = (T)mas2[i];
//    }
//}

/// Ну изичная задача! ееее (Самый залайканный коммент - "эммм, не понял прикола. а где зубодробительные задания? я ведь даже не успел залить клавиатуру горькими слезами и в очередной раз попрактиковать русский мат. чувствую какую-то фрустрацию.")
/// Вопрос, в данной задаче многие в решениях используют вместо "template <class U, class T>"  "template<typename T,typename U>"
/// Я как-то не думал даже об этом, но почему class работает, хотя логичнее было бы написать typename? Ведь мы реально не знаем, какой тип нам передадут в T и U.
/// просто у меня первая реакция на неизвестный тип стала классом, хотя правильней писать тайпнейм.
/// Если что, это я для себя пишу. Ты можешь не отвечать на вопросы в комментариях.


/// Реализуйте шаблонную функцию minimum, которая находит минимальный элемент, который хранится в экземпляре шаблонного класса Array, при этом типовой параметр шаблона Array может быть произвольным
/// Чтобы сравнивать объекты произвольного типа, на вход функции также будет передаваться компаратор, в качестве компаратора может выступать функция или объект класса с перегруженным оператором "()".

//#include <cstddef>

//template <typename T>
//class Array
//{
//public:
//    explicit Array(size_t size = 0, const T& value = T());
//    Array(const Array& other);
//    ~Array();
//    Array& operator=(Array other);
//    void swap(Array &other);
//    size_t size() const;
//    T& operator[](size_t idx);
//    const T& operator[](size_t idx) const;

//private:
//    size_t size_;
//    T *data_;
//};
//template<typename T, typename Comp>
//T minimum(const Array<T>& array, Comp comparator)
//{
//    size_t arraySize = array.size();
//    size_t index = 0;
//    for (size_t i = 1; i < arraySize; ++i)
//    {
//        if (comparator(array[i], array[index]))
//        {
//            index = i;
//        }
//    }
//    return array[index];
//}


/// Шаблонный класс Array может хранить объекты любого типа, для которого определён конструктор копирования, в том числе и другой Array, например, Array< Array<int> >.
/// Глубина вложенности может быть произвольной.
/// Напишите шаблонную функцию (или несколько) flatten, которая принимает на вход такой "многомерный" Array неизвестной заранее глубины вложенности и выводит в поток out через пробел все элементы,
/// хранящиеся на самом нижнем уровне.

//#include <iostream>


//// Весь вывод должен осуществляться в поток out,
//// переданный в качестве параметра.
////
//// Можно заводить любые вспомогательные функции,
//// структуры или даже изменять сигнатуру flatten,
//// но при этом все примеры вызова из задания должны
//// компилироваться и работать.

//template <typename T>
//void flatten(const Array<T> & array, std::ostream& out){
//    for (size_t i = 0;i != array.size(); ++i){
//        out << array[i] << " ";
//    }
//}
//template <typename Type>
//void flatten(const Array< Array<Type> > & array, std::ostream& out)
//{
//    for (size_t j = 0; j != array.size(); ++j){
//        flatten(array[j], out);
//    }
//}

/// В качестве упражнения на частичную специализацию шаблонов классов вам предлагается реализовать простой шаблон SameType.
/// Этот шаблон не содержит никаких методов, а только одно статическое константное поле типа bool, с именем value.
/// Шаблон принимает два типовых параметра, и если два типовых параметра шаблона являются одним и тем же типом, то статическое поле value должно хранить значение true, в противном случае значение false.

//template<class A, class B>
//struct SameType {
//    static const bool value = false;
//};
//template<class A>
//struct SameType<A, A> {
//    static const bool value = true;
//};


/// Реализуйте функцию array_size, которая возвращает размер массива, переданного в качестве параметра.
/// Функция должна работать только для массивов! Т. е. если функции передать указатель, должна произойти ошибка компиляции.

//#include <cstddef> // size_t

//// реализуйте шаблонную функцию array_size,
//// которая возвращает значение типа size_t.
//template <typename A, size_t size>
//size_t array_size(A (&array)[size]) {
//    return size;
//}


