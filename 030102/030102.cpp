#include <iostream>
#include <fstream>

class Counter {

private:
    int count;

public:
    Counter() { count = 1; }
    Counter(int count) {}
    void add() {
        this->count = count + 1;
        std::cout << "Значение счётчика увеличено на 1:)" << std::endl;
    }
    void min() {
        this->count = count - 1;
        std::cout << "Значение счётчика уменьшено на 1:(" << std::endl;
    }
    void set_count(int a) {
        count = a;
    }
    int  get_count() {
        return count;

    }
    void kon() {
        std::cout << "До свидания!" << std::endl;
    }
};



int main()
{
    setlocale(LC_ALL, "rus");
    char opa{}; 
    int a = 1;
    std::string c;

    Counter count;

    std::cout << "Для ввода начального значения счётчика укажите - y, или для использоваться значение поумолчаниюе введите - n :" << std::endl;

    std::cin >> c;
    // Ввод числа
    if (c == "y")
    {
        std::cout << "Введите начальное значение счётчика:" << std::endl;
        std::cin >> a;
        count.set_count(a);
    }
    else
    {
        Counter();
    };
    // Выбор операции
    do {
        std::cout << "Введите команду('+', '-', '=' или 'x')" << std::endl;
        std::cin >> opa;
        if (opa == '+')
        {
            count.get_count();
            count.add();
        }
        else if (opa == '-')
             {
            count.get_count();
            count.min();
             }  
             else if (opa == '=')
                  {
                  std::cout << "Текущее значение" << std::endl;
                  std::cout << count.get_count() << std::endl;
                  }
        }
    while ( opa != 'x');
    count.kon();
}

