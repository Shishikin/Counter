// Counter.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
private:
    int count = 0;
    int min = 0;
    int max = 100;

public:

    Counter(int min_, int max_, int count_): min(min_), max(max_), count(count_) {}
    Counter() {}

    void SetMax(int m)
    {
        if (m > min)
        {
            max = m;
        }
        else
        {
            std::cout << "Максимальное значение должно быть больше минимального \n";
        }
    }

    void SetMin(int m)
    {
        if (m < max)
        {
            if (count < m)
            {
                count = m;
            }
            min = m;
        }
        else
        {
            std::cout << "Минимальное значение должно быть больше максимального \n";
        }
        
    }

    // префиксный инкремент
    Counter& operator++()
    {
        count < max ? ++count : count = 0;
        return *this;
    }

    // постфиксный инкремент
    Counter& operator++(int)
    {
        int value = count;
        value < max ? count++ : count = min;
        return *this;
    }

    int GetMax()
    {
        return max;
    }

    int GetMin()
    {
        return min;
    }

    int GetCount()
    {
        return count;
    }
};

int main()
{
    Counter test;
    std::cout << test.GetMax() << '\n';
    std::cout << test.GetMin() << '\n';
    std::cout << test.GetCount() << '\n';
    test.SetMax(3);
    test.SetMin(1);
    std::cout << test.GetMax() << '\n';
    std::cout << test.GetMin() << '\n';
    std::cout << test.GetCount() << '\n';
    ++test;
    std::cout << test.GetCount() << '\n';
    test++;
    std::cout << test.GetCount() << '\n';
    test++;
    std::cout << test.GetCount() << '\n';
    std::cout << "Hello World!\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
