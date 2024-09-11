#include <iostream>

class Counter {
private:
    int value;

public:
    
    Counter() : value(1) {}

    
    Counter(int initialValue) : value(initialValue) {}

    
    void increment() {
        value++;
    }

    
    void decrement() {
        value--;
    }

    
    int getValue() const {
        return value;
    }
};

int main() {
    int initialValue;
    char choice;

    std::cout << "Хотите указать начальное значение для счётчика? (y/n): ";
    std::cin >> choice;

    Counter counter;

    if (choice == 'y' || choice == 'Y') {
        std::cout << "Введите начальное значение: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }

    
    while (true) {
        std::cout << "Введите команду (+ для увеличения, - для уменьшения, = для вывода текущего значения, x для выхода): ";
        std::cin >> choice;

        if (choice == '+') {
            counter.increment();
        }
        else if (choice == '-') {
            counter.decrement();
        }
        else if (choice == '=') {
            std::cout << "Текущее значение счётчика: " << counter.getValue() << std::endl;
        }
        else if (choice == 'x') {
            std::cout << "Выход из программы." << std::endl;
            break;
        }
        else {
            std::cout << "Неверная команда, попробуйте снова." << std::endl;
        }
    }

    return 0;
}