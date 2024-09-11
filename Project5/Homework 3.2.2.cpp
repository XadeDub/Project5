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

    std::cout << "������ ������� ��������� �������� ��� ��������? (y/n): ";
    std::cin >> choice;

    Counter counter;

    if (choice == 'y' || choice == 'Y') {
        std::cout << "������� ��������� ��������: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }

    
    while (true) {
        std::cout << "������� ������� (+ ��� ����������, - ��� ����������, = ��� ������ �������� ��������, x ��� ������): ";
        std::cin >> choice;

        if (choice == '+') {
            counter.increment();
        }
        else if (choice == '-') {
            counter.decrement();
        }
        else if (choice == '=') {
            std::cout << "������� �������� ��������: " << counter.getValue() << std::endl;
        }
        else if (choice == 'x') {
            std::cout << "����� �� ���������." << std::endl;
            break;
        }
        else {
            std::cout << "�������� �������, ���������� �����." << std::endl;
        }
    }

    return 0;
}