    // Hello_World_MMF_MA_20_1_Halipov.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
    //

#include <iostream>;
#include<windows.h>;
#include <iomanip>;
    using namespace std;

    int main()
    {
        setconsolecp(1251);
        setconsoleoutputcp (1251);

        /*ANKETA 2*/
        char a, b, c, d, e, f, g [20];
        int x=0, y=0;
        float l;
        setprecision(7);
        cout << "Введите Вашу фамилию\n";
        cin >> a;
        cout << "Введите Ваше имя\n";
        cin >> b;
        cout << "Введите Ваше отчество\n";
        cin >> c;
        cout << "Введите Ваш пол\n";
        cin >> d;
        cout << "Введите дату Вашего рожления\n";
        cin >> l;
        cout << "Введите Ваш адрес проживания\n";
        cin >> e;
        cout << "Введите Ваш номер телефона\n";
        cin >> x;
        cout << "Введите Ваше место учебы\n";
        cin >> f;
        cout << "Введите Ваш класс\n";
        cin >> y;
        cout << "Введите Ваше хобби\n";
        cin >> g;
        /*vivod*/
        cout << left << setw(30) << "АНКЕТА\n";
        cout << left << "Фамилия" << setw(20) << "Имя" << right << "Отчество\n";
        cout << left << "-------" << setw(20) << "---" << right << "--------\n";
        cout << left << a << setw(20) << b << right << c << "\n";
        cout << left << "Пол" << setw(20) << "Дата рождения" << right << "Номер телефона\n";
        cout << left << "---" << setw(20) << "-------------" << right << "--------------\n";
        cout << left << d << setw(20) << l << right << x << "\n";
        cout << left << "Адрес\n";
        cout << left << "-----\n";
        cout << left << e << "\n";
        cout << left << "Место учебы" << setw(20) << "Класс" << right << "Хобби\n";
        cout << left << "-----------" << setw(20) << "-----" << right << "-----\n";
        cout << left << f << setw(20) << y << right << g << "\n";

        setlocale(LC_ALL, "Russian");
        /*PARROT*/
        char a [30];
        cout << "Введите строку любого текста ";
        cin >> a;
        cout << "Вы ввели: " << a << endl;
        system("pause");

        /*HELLO2*/
        char a [20];
        cout << "Как Вас зовут?\n";
        cin >> a;
        cout << "Здравствуйте, " << a << endl;
        system("pause");

        /*SWAP*/
        char a, b, c;
        cout << "Введите число А\n";
        cin >> a;
        cout << "Введите число В\n";
        cin >> b;
        cout << "A=" << a << "B=" << b << endl;
        c = a;
        a = b;
        b = a;
        cout << "A=" << a << "B=" << b << endl;

        /*SWAP 3*/
        char a, b, c, l;
        cout << "Введите число А\n";
        cin >> a;
        cout << "Введите число В\n";
        cin >> b;
        cout << "Введите число C\n";
        cin >> c;
        cout << "A=" << a << "B=" << b << "C=" << c << endl;
        l = c;
        c = b;
        b = a;
        a = l;
        cout << "A=" << a << "B=" << b << "C=" << c << endl;

        /*SWAP 4*/
        char a, b, c, d, l;
        cout << "Введите число А\n";
        cin >> a;
        cout << "Введите число В\n";
        cin >> b;
        cout << "Введите число C\n";
        cin >> c;
        cout << "A=" << a << "B=" << b << "C=" << c << endl;
        l = d;
        d = c;
        c = b;
        b = a;
        a = l;
        cout << "A=" << a << " B=" << b << " C=" << c << " D=" << d << endl;

        /*GUESS*/
        x = (((x * 10) / 2 + x) / 3 + 4) / 2 - 2;
        int x=0;
        cout << "Загадайте любое число \n";
        cout << "Умножьте его на 10 \n";
        cout << "Разделите его на 2 \n";
        cout << "Добавьте получившееся число само к себе \n";
        cout << "Разделите получившееся число на 3 \n";
        cout << "Добавьте к результату 4 \n";
        cout << "Разделите результат предыдущего шага на 2 \n";
        cout << "Отнимите 2 от получившегося числа \n";
        cout << "Ваше число" << x << "?\n";

        /*HELLO3*/
        char a, b, c [20];
        cout << "Как Вас зовут?\n";
        cin >> a;
        cout << "Сколько Вам лет?\n";
        cin >> b;
        cout << "Где Вы учитесь?\n";
        cin >> c;
        cout << "Здравствуйте, " << a << endl;
        cout << "Поздравляем Вас, Вам всего " << b << " года, а Вы уже ведете диалог с компьютером./n" << c << " будет гордиться Вами!" << endl;


        /*RECTANGLE*/
        int a=0, b=0;
        cout << "Введите сторону b \n";
        cin >> b;
        cout << "Введите сторону a \n";
        cin >> a;
        cout << "Сторона b равна " << b << endl;
        cout << "Плошадь равна " << a * b << endl;
        cout << "Периметр равен " << 2 * a + 2 * b << endl;
        system("pause");
        

        system("cls")



    }

   

