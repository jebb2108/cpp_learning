#include <iostream>
#include <string>

class StringMgr
{
private:
    class SimpleList
    {
    private:
        SimpleList *next;
        int id;
        int num;
        char ch;

    public:
        // Конструктор копирования
        SimpleList(SimpleList &obj)
        {
            obj.next = this;
            id = obj.id + 1;
            num = 0;
            ch = '\0';  // Исправлено: пустой символ должен быть '\0', а не ''
        }

        // Конструктор по умолчанию
        SimpleList() : next(nullptr), id(0), num(0), ch('\0') {}

        // Деструктор
        ~SimpleList()
        {
            if (next && next->id != 0) delete next;
        }

        // Оператор [] для создания новых элементов
        void operator[](int num)
        {
            SimpleList *p = this;
            for (int k = 0; k < num; ++k)
            {
                p->next = new SimpleList(*p);
                p = p->next;
            }
            p->next = this;  // Замыкаем список на начало
        }

        // Оператор () для заполнения списка символами из строки
        void operator()(const std::string &s)
        {
            SimpleList *pnt = this;
            for (size_t k = 0; k < s.length(); ++k, pnt = pnt->next)
            {
                pnt->ch = s[k];
                pnt->num = static_cast<int>(s[k]);
            }
        }

        // Метод для возвразения указателя на next
        SimpleList* getNext() const { return next; }
        
        // Метод для возвращения ID
        int getId() const { return id; }
        
        // Метод для отображения поля ch
        char getChar() const { return ch; }
     
        // Метод для замены поля ch
        void setChar(char Ch) { ch=Ch; }

        // Виртуальная фнкция для отображения информации об объекте
        virtual void show()
        {
            using namespace std;
            cout << "--------------------" << endl;
            cout << "Object ID: " << id << endl;
            cout << "Current character: " << ch << endl;
            cout << "Its respective index: " << num << endl;
            if (next && next->id != 0) next->show();
        }

        // Функция для удаления всех элементов списка
        void deleteAll()
        {
            if (next && next->id != 0)
            {
                next->deleteAll();
                delete next;
                next = nullptr;
            }
        }
    };

public:
    SimpleList *mainObj;

    // Конструктор StringMgr
    StringMgr(const std::string &s)
    {
        int length = s.length();
        mainObj = new SimpleList;
        (*mainObj)[length];
        (*mainObj)(s);
    }

    // Деструктор StringMgr
    ~StringMgr()
    {
        if (mainObj) mainObj->deleteAll();
        delete mainObj;
    }

    void makeUpper()
    {
        SimpleList *begin = mainObj;
        SimpleList *p = mainObj;

        // Пройдем по всем элементам списка
        while (p->getNext() != begin) 
        {
            char currCh = toupper(p->getChar());
            p->setChar(currCh);
            p = p->getNext();
        }
    }

    void repeat(int n)
    {
        using namespace std;
        cout << endl;
        for(int k=1;k<=n;++k)
        {
            showAll();
        }
    }

    // Функция для отображения информации
    void getInfo() 
    {
        if (mainObj) mainObj->show();
    }
    
    void showAll(bool spaceHolder=false)
    {
        using namespace std;
        SimpleList* current = mainObj; // Используем временный указатель для обхода списка

        while (current->getNext() != mainObj) // Проверяем, что текущий элемент не является "замыкающим"
        {
            cout << current->getChar(); // Выводим символ
            if (spaceHolder) cout << ' ';
            current = current->getNext(); // Переходим к следующему элементу
        }
        cout << endl; // Переход на новую строку после вывода всех символов
    }
};

int main()
{
    StringMgr mgr("Hello");
    mgr.showAll();
    mgr.makeUpper();
    mgr.showAll(true);
    mgr.repeat(3);
    return 0;
}

