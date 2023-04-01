#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>
#include <thread>
#include <chrono>
#include <locale.h>
#include <cstdio>
#include <utility>
#include <stdio.h>
#include <windows.h>

using namespace std;
int main()
{
    cout << "\t\t\t\t\t\t\tGOOGLE 2\n\n\n";
    cout << "Log in to use the GOOGLE 2.\n";
    cout << "Enter your Email: ";
    string Gmail;
    cin >> Gmail;
    cout << endl << endl;
    cout << "Enter your password: ";
    string pass;
    cin >> pass;
    cout << "Good.You logined in!Wecome!\n\n";
    vector <string> Gsearch;
    Gsearch.push_back("SALARY");
    Gsearch.push_back("CALCULATOR");
    Gsearch.push_back("EXAMPLES");
    Gsearch.push_back("SALE");
    Gsearch.push_back("JUMBLE");
    Gsearch.push_back("TICTACTOE");
    Gsearch.push_back("EVEN-ODD");
    Gsearch.push_back("SHOP");
    Gsearch.push_back("SHOOTER");
    Gsearch.push_back("RANDROLLER");
    cout << "GOOGLE 2 can do:\n";
    cout << "SALARY\n";
    cout << "CALCULATOR\n";
    cout << "JUMBLE\n";
    cout << "EXAMPLES\n";
    cout << "TICTACTOE\n";
    cout << "SHOP\n";
    cout << "EVEN-ODD\n";
    cout << "SHOOTER\n";
    cout << "RANDROLLER\n";
    cout << "CHAT\n";
    cout << "SALE\n\n";

    cout << "What do you want to do: \n";
    string doing;
    cin >> doing;
    if (doing == "calculator")
    {
        float a = 0;
        float b = 0;
        char op = '+';
            cout << "please,enter first number.  ";
            cin >> a;
            cout << "please,enter second number.  ";
            cin >> b;
            cout << "please,enter operation.  ";
            cin >> op;

            switch (op) {

                {
            case '+':
            {
                cout << a + b << endl;
                break;
            }
            case '-':
            {
                cout << a - b << endl;
                break;
            }
            case '*':
            {
                cout << a * b << endl;
                break;
            }
            case '/':
            {
                if (b == 0) {
                    cout << "error!";
                }
                cout << a / b << endl;
                break;
            }
            default:
            {
                cout << "sorry,operation is not supported!\n"; }
                }
            }        
    }
    if (doing == "examples")
    {
        char op;
        cout << "please choose operation";
        cin >> op;
        switch (op)
        {
        case  '+':
        {
            int a = rand() % 10000;
            int b = rand() % 10000;
            int uu = 0;
            cout << a;
            cout << " " << "+" << " ";
            cout << b;
            cout << " " << "=" << " ";
            cin >> uu;
            cout << endl;
            if (uu != a + b) {
                cout << "wrong answer";
            }
        }
        case '-':
        {
            int m = rand() % 10000;
            int n = rand() % 1 - 10000;
            int ee = 0;
            cout << m;
            cout << " - ";
            cout << n;
            cout << " = ";
            cin >> ee;
            cout << endl;
            if (ee != m - n)
            {
                cout << "wrong answer!";
            }


        }
        case '*':
        {
            int k = rand() % 10000;
            int r = rand() % 10000;
            int oo = k * r;
            cout << k;
            cout << " * ";
            cout << r;
            cout << " = ";
            cin >> oo;
            cout << endl;
            if (oo != k * r)
            {
                cout << "wrong answer";
            }
            int c = rand() % 10000;
            int n = rand() % 10000;

        }
        case '/':
        {
            int e = rand() % 10000;
            int p = rand() % 1 - 10000;
            int tt = e / p;
            cout << e << " / ";
            cout << p << " = ";
            cin >> tt;
            cout << endl;
            if (tt != e / p)
            {
                cout << "wrong answer!";
            }
        }
        case '%':
        {
            int ds = rand() % 10000;
            int re = rand() % 10000;
            int qw = ds % re;
            cout << ds << " % ";
            cout << re << " = ";
            cin >> qw;
            cout << endl;
            if (qw != ds % re)
            {
                cout << "wrong answer!";
            }

        }
      }
    }
    if (doing == "salery")
    {
        cout << "PROGRAMMER - (3000-10000$)\n";
        cout << "Construction Worker - (1000 - 3000$)\n";
        cout << "Cleaner - (100 - 400$)\n";
        cout << "Police man - (500 - 9000$)\n";
        cout << "Doctor - (2000 - 10000$)\n";
        cout << "Firefighter - (500 - 5000$)\n";
    }
    if (doing == "sale")
    {
        string pass;
        cout << "\n\n\n\t\t\t\t\t\t\t\t\t\tEnter your password(your password should be minimum 6 symbols): ";
        cin >> pass;
        system("cls");
        if (pass.size() < 6)
        {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tyour pass should be minimum 6 simbles\n\n";
            cin >> pass;
        }
        else
        {
            cout << "\t\t\t\t\t\t\t\t\t\t\t\tGood,you can see this pass last time to remember\n\n";
            cout << pass;
            this_thread::sleep_for(chrono::seconds(6));
            system("cls");
        }
        while (true)//??????? ???? ???? ?? ????? ???????????? ?????????? ????? ???
        {

            cout << "Enter your price:";
            float pr;
            cin >> pr;
            cout << endl;
            cout << "Enter sale:";
            float sale;
            cin >> sale;
            cout << endl;
            cout << "Enter your pass to do this: ";
            string sat;
            cin >> sat;
            if (pass == sat)//?????? 4 ??????? ??? ????? ??????
            {
                cout << pr / 100 * sale << endl;
            }
            else
            {
                cout << "wrong password\n";
                cin >> sat;
                if (pass == sat)
                {
                    return 0;
                }
                else
                {
                    if (pass == sat)
                    {
                        cout << pr / 100 * sale << endl;
                    }
                    else
                    {
                        cout << "wrong password\n";
                        cin >> sat;
                        if (pass == sat)
                        {
                            return 0;
                        }
                        else
                        {
                            if (pass == sat)
                            {
                                cout << pr / 100 * sale << endl;
                            }
                            else
                            {
                                cout << "wrong password\n";
                                cin >> sat;
                                if (pass == sat)
                                {
                                    return 0;
                                }

                                else
                                {
                                    cout << "You has 4 attems to enter password.";
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (doing == "jumble")
    {
        enum fields { WORD, HINT, NUM_FIELDS };
        const int NUM_WORDS = 5;
        const string WORDS[NUM_WORDS][NUM_FIELDS]
        {
            {"Wall", "Do you feel you're banging your head against something?"},
            {"glasses", "These might help you see a answer"},
            {"labored", "Going slowly, is it?"},
            {"persitent", "Keep at it."},
            {"jumble", "It's what the game is all about"}
        };
        srand(static_cast<unsigned int>(time(0)));
        int choise = (rand() % NUM_WORDS);
        string theWord = WORDS[choise][WORD];
        string theHint = WORDS[choise][HINT];
        string jumble = theWord;

        int lenghth = jumble.size();
        for (int i = 0; i < lenghth; ++i)
        {
            int index1 = (rand() % lenghth);
            int index2 = (rand() % lenghth);
            char temp = jumble[index1];
            jumble[index1] = jumble[index2];
            jumble[index2] = temp;
        }
        cout << "\t\tWelcome to word jumble!\n\n";
        cout << "Unscramble the letters to make a word.\n";
        cout << "enter 'hint' for a hint.\n";
        cout << "enter 'quit' for a quit the game.\n\n";
        cout << "The jumble is:" << jumble;
        string guess;
        cout << "\nYour guess: ";
        cin >> guess;
        while ((guess != theWord) && (guess != "quit"))
        {
            if (guess == "hint")
            {
                cout << theHint;
            }
            else
            {
                cout << "sorry,that's not it";
            }
            cout << "\n\nYour guess: ";
            cin >> guess;
        }
        if (guess == theWord)
        {
            cout << "that's it! You guessed it!\n";
        }
        cout << "thanks for playing!\n";
        return 0;
    }
    if (doing == "tictactoe")
    {
        using namespace std;

        class Tictactoe
        {
            char* field;
            int size;
        public:

            Tictactoe(int sies)
            {
                size = sies;

                field = new char[size * size];

            }
      
            ~Tictactoe()
            {
                delete[] field;
            }

            char* operator[](int row)
            {
                return field + row * size;
            }
 
            void print(Tictactoe& field) {

                
                system("cls");

            
                for (int j = 0; j < size; j++) {
                    cout << "--";

                }
                cout << "-\n";


                
                for (int i = 0; i < size; i++) {

                   
                    for (int j = 0; j < size; j++) {
                        cout << "|" << field[i][j];
                    }
                    cout << "|\n";


                   
                    for (int j = 0; j < size; j++) {
                        cout << "--";
                    }
                    cout << "-\n";
                }
            }

            int check(Tictactoe& field) {
                
                int g, v;
              
                int d1, d2;

                for (int i = 0; i < size; i++) {

                    g = field[i][0];

                   
                    for (int j = 0; j < size; j++) {
                       
                        if (field[i][j] != g || g == ' ') {
                           
                            g = ' ';
                         
                            break;
                        }
                    }

                  
                    if (g != ' ') {
                      
                        return g;
                    }

                   
                    v = field[0][i];

                   
                    for (int j = 0; j < size; j++) {
                      
                        if (field[j][i] != v || v == ' ') {
                          
                            v = ' ';
                          
                            break;
                        }
                    }

                  
                    if (v != ' ') {
                      
                        return v;
                    }
                }

               
                d1 = field[0][0];
                d2 = field[0][size - 1];

               
                for (int i = 0; i < size; i++) 
                {

                    if (field[i][i] != d1) {
                
                        d1 = ' ';
                     
                        break;
                    }
                }

                if (d1 != ' ') {
                    return d1;
                }

               
                for (int i = 0; i < size; i++) {
                  
                    if (field[i][size - 1 - i] != d2) {
                       
                        d2 = ' ';
                        
                        break;
                    }
                }

                if (d2 != ' ') {
                    return d2;
                }

                return ' ';
            }

           
            void game(Tictactoe& field)
            {
         
                int player = 'x';


                char result;

              
                int running = 1;

                int i = 0, j = 0;
                bool vvod = true;

                while (running) {
                    do {
                        if (vvod == false) {
                            std::cout << "Repeat input\n";
                        }
                  
                        field.print(field);

                  
                        if (player == 'x') {
                            std::cout << "Player X moves\n";
                        }
                        else {
                            cout << "Player O moves\n";

                        }


                   
                        cout << "Enter coodinates of move x y(separated by a space): ";
                        cin >> i >> j;

                        vvod = false;

                       
                    } while (i > size || j > size || i < 0 || j < 0 || field[i - 1][j - 1] != ' ');

                    vvod = true;
                
                    field[i - 1][j - 1] = player;

                   
                    result = field.check(field);

                   
                    if (result != ' ') {
                       
                        cout << result << " Won!";

              
                        running = 0;
                    }

                    if (player == 'x') {
                        player = 'o';
                    }
                    else {
                        player = 'x';
                    }
                }

            }

        };
  
           
            int size;
            cout << "Enter tctactoe size: ";
            cin >> size;


            Tictactoe field(size);


            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++)
                    field[i][j] = ' ';
            }


            field.game(field);



            return 0;
        

    }
    if (doing == "shop")
    {
        const int MAX_NUMBERS = 16;
        std::vector<char> num;
        int nums = 0;
        cout << "hello.Enter your bank to make a card from that bank: \n";
        string THE_BANK;
        cout << "\nBanks:\n";
        cout << "ALFABANK\n";
        cout << "PRIORBANK\n";
        cout << "BSBBANK\n";
        cout << "NATIONALBANK\n\n";
        cin >> THE_BANK;
        if (THE_BANK == "alfabank" || "priorbank" || "bsbbank" || "nationalbank")
        {
            srand(static_cast<unsigned int>(time(0)));

            cout << "Your bank card numer is: \n";
            for (int i = 0; i < 4; ++i)
            {
                int w = (rand() % 10);
                num.push_back('0' + w);
                cout << (char)('0' + w);
            }
            cout << " ";
            for (int i = 0; i < 4; ++i)
            {
                int w = (rand() % 10);
                num.push_back('0' + w);
                cout << (char)('0' + w);
            }
            cout << " ";
            for (int i = 0; i < 4; ++i)
            {
                int w = (rand() % 10);
                num.push_back('0' + w);
                cout << (char)('0' + w);
            }
            cout << " ";
            for (int i = 0; i < 4; ++i)
            {
                int w = (rand() % 10);
                num.push_back('0' + w);
                cout << (char)('0' + w);
            }
             cout << endl;
             cout << "\nYour CVV: \n";
             srand(static_cast<unsigned int>(time(0)));

             for (int d = 0; d < 3; ++d)
             {
                 int s = (rand() % 10);
                 cout << s;
             }
             cout << "Enter cards pass(minimum 4 symbols):\n";
             string pass;
             cin >> pass;
             cout << "Confirm your card pass:\n";
             string ww;
             cin >> ww;
             if (pass == ww || pass.size() == 4)
             {
                 cout << "\nYour bank:\n";
                 cout << THE_BANK << endl;
                 cout << "Online shops: \n";
                 cout << "WILDBERRIES\n";
                 cout << "ALIEXPRESS\n";
                 cout << "LAMODA\n";
                 cout << "CSTORE\n";
                 cout << "OZON\n";
                 cout << "AMAZON\n";

                 cout << "\nEnter your online shop:\n";
                 string shop;
                 cin >> shop;
                 if (shop == "wildberries")
                 {
                     cout << "\nWildberies have:\n";
                     cout << "BOOTS\n";
                     cout << "KLOSES\n";
                     cout << "ELECTRONIC\n";
                     cout << "FOOD\n";
                     cout << "OTHER\n\n";
                     cout << "\nWildberries search:\n";
                     string Ws;
                     cin >> Ws;
                     if (Ws == "boots" || "kloses" || "electronic" || "food" || "other")
                     {
                         cout << "Ok.Enter your card pass to by it:\n";
                         string wer;
                         cin >> wer;
                         if (wer != pass)
                         {
                             cout << "You byed it!Data of delivery:2 days\n";
                         }
                         else
                         {
                             cout << "Pass is wrong!\n";
                         }
                     }
                 }
                 if (shop == "aliexpress")
                 {
                     cout << "\nAliexpress have:\n";
                     cout << "BOOTS\n";
                     cout << "KLOSES\n";
                     cout << "ELECTRONIC\n";
                     cout << "FOOD\n";
                     cout << "STICERS\n";
                     cout << "OTHER\n\n";
                     cout << "\nAliexpress search:\n";
                     string Ws;
                     cin >> Ws;
                     if (Ws == "boots" || "kloses" || "electronic" || "food" || "sticers" || "other")
                     {
                         cout << "Ok.Enter your card pass to by it:\n";
                         string wer;
                         cin >> wer;
                         if (wer != pass)
                         {
                             cout << "You byed it!Data of delivery:6 days\n";
                         }
                         else
                         {
                             cout << "Pass is wrong!\n";
                         }
                     }
                 }
                 if (shop == "lamoda")
                 {
                     cout << "\nLamoda have:\n";
                     cout << "BOOTS\n";
                     cout << "KLOSES\n";
                     cout << "HADS\n";
                     cout << "\nLamoda search:\n";
                     string Ws;
                     cin >> Ws;
                     if (Ws == "boots" || "kloses" || "hads" )
                     {
                         cout << "Ok.Enter your card pass to by it:\n";
                         string wer;
                         cin >> wer;
                         if (wer != pass)
                         {
                             cout << "You byed it!Data of delivery:3 days\n";
                         }
                         else
                         {
                             cout << "Pass is wrong!\n";
                         }
                     }
                 }
                 if (shop == "cstore")
                 {
                     cout << "\nCstore have:\n";
                     cout << "BOOTS\n";
                     cout << "KLOSES\n";
                     cout << "ELECTRONIC\n";
                     cout << "FOOD\n";
                     cout << "OTHER\n\n";
                     cout << "\nCstore search:\n";
                     string Ws;
                     cin >> Ws;
                     if (Ws == "boots" || "kloses" || "electronic" || "food" || "other")
                     {
                         cout << "Ok.Enter your card pass to by it:\n";
                         string wer;
                         cin >> wer;
                         if (wer != pass)
                         {
                             cout << "You byed it!Data of delivery:1 day\n";
                         }
                         else
                         {
                             cout << "Pass is wrong!\n";
                         }
                     }
                 }
                 if (shop == "ozon")
                 {
                     cout << "\nOzon have:\n";
                     cout << "KLOSES\n";
                     cout << "ELECTRONIC\n";
                     cout << "FOOD\n";
                     cout << "OTHER\n\n";
                     cout << "\nOzon search:\n";
                     string Ws;
                     cin >> Ws;
                     if (Ws ==  "kloses" || "electronic" || "food" || "other")
                     {
                         cout << "Ok.Enter your card pass to by it:\n";
                         string wer;
                         cin >> wer;
                         if (wer != pass)
                         {
                             cout << "You byed it!Data of delivery:3 days\n";
                         }
                         else
                         {
                             cout << "Pass is wrong!\n";
                         }
                     }
                 }
                 if (shop == "amazon")
                 {
                     cout << "\nAmazon have:\n";
                     cout << "BOOTS\n";
                     cout << "KLOSES\n";
                     cout << "STICERS\n";
                     cout << "PICTURES\n";
                     cout << "ELECTRONIC\n";
                     cout << "FOOD\n";
                     cout << "OTHER\n\n";
                     cout << "\nWildberries search:\n";
                     string Ws;
                     cin >> Ws;
                     if (Ws == "boots" || "kloses" || "electronic" || "sticers" || "pictures"|| "food" || "other")
                     {
                         cout << "Ok.Enter your card pass to by it:\n";
                         string wer;
                         cin >> wer;
                         if (wer != pass)
                         {
                             cout << "You byed it!Data of delivery:7 days\n";
                         }
                         else
                         {
                             cout << "Pass is wrong!\n";
                         }
                     }
                 }

             }
             else
             {
                 cout << "pass is wrong!.Enter new pass.\n";
             }
             
        }
        else
        {
            cout << "The bank is not found.\n";
            return 0;
        }

    }
    if (doing == "chat")
    {
        cout << "Enter locale or online chat:\n";
        string chat;
        cin >> chat;
        if (chat == "locale")
        {
            cout << "You can create new page,but on this page 0 persons.\n";
            string modern;
            cin >> modern;
            cout << "\n\nYour page created!\n";
        }
        if (chat == "online")
        {
            vector<string> pers;
            pers.push_back("Dmitriy");
            pers.push_back("Vitaliy");
            pers.push_back("Oleg");
            pers.push_back("Max");
            pers.push_back("Anton");
            pers.push_back("Pasha");
            pers.push_back("Egor");
            srand(static_cast<unsigned int>(time(0)));
            random_shuffle(pers.begin(), pers.end());
            for (int i = 0; i < 3; i++)
            {
                cout << pers[i] << endl;
            }
            cout << "Enter one persone to talk.\n\n";
            string talk;
            cin >> talk;
            if (talk == pers[0] || talk == pers[1] || talk == pers[2])
            {
                cout << "Oh.Hello.What's your name?\n";
                string caht;
                cin >> caht;
                cout << "\n";
                cout << "Ok.You know what my name.You have a cat?\n";
                cin >> caht;
                cout << "\nOk.I have cat and puppy.\n";
                cout << "It's very pretty!\n";
                cin >> caht;
                cout << "\nWat's time for you?\n";
                cin >> caht;
                cout << "\nFor me 10:34 o'clock.\n";
                cout << "How old are you?\n";
                cin >> caht;
                cout << "\nI 27 years old.\n";
                cout << "Where you live?\n";
                cin >> caht;
                cout << "\nI live in America.\n";
                cout << "Windows or Ios?\n";
                cin >> caht;
                cout << "\nI think Windows\n";
                cout << "What car you drive?\n";
                cin >> caht;
                cout << "\nI drive Audi\n";
                cout << "Sorry.I go outdoor.\n";
                cout << "Bye.\n";
                cin >> caht;
                cout << "Person is offline.\n\n";
            }
            else
            {
                cout << "The person is not found.\n\n\n\n\n";
                return 5;
            }
        }
    }
    if (doing == "even-odd")
    {
        vector<string> prog;
        prog.push_back("even");
        prog.push_back("odd");
        prog.push_back("even");
        prog.push_back("odd");
        srand(static_cast<unsigned int>(time(0)));
        random_shuffle(prog.begin(), prog.end());
        string wo = prog[0];
        auto it = prog.begin();
        cout << "Welcom to even-odd.What do you want to knock out?\n";
        string want;
        cin >> want;
        if (want == "even" or "odd")
        {
            cout << "Ok.Good luck!\n";
            vector<string> prog;
            prog.push_back("even");
            prog.push_back("odd");
            prog.push_back("even");
            prog.push_back("odd");
            srand(static_cast<unsigned int>(time(0)));
            random_shuffle(prog.begin(), prog.end());
            string wo = prog[0];
            auto it = prog.begin();
        }
        else
        {
            cout << "It's like a secret?\n";
            vector<string> prog;
            prog.push_back("even");
            prog.push_back("odd");
            prog.push_back("even");
            prog.push_back("odd");
            srand(static_cast<unsigned int>(time(0)));
            random_shuffle(prog.begin(), prog.end());
            string wo = prog[0];
            auto it = prog.begin();
        }
        
        cout << "You rolled " << wo << "!\n";
        
    }
    if (doing == "randroller")
    { 
        cout << "enter random number of possible numbers(2-14):\n\n";
        int num;
        cin >> num;

        srand(static_cast<unsigned int>(time(0)));
        int i = rand();
        int g = (i % num + 1);
        cout << "\nWelcome to randroller(2-14)\n";
        cout << "You rolled: " << g << ".\n";
 
        if(num > 14 || num < 2)
        {
            cout << "Num is not allowed,bigger then 14 or smaller then 2.\n\n\n\n";
            return 0;
        }
    }
    if (doing == "shooter")
    {
        int nScreenWidth = 120;			// Console Screen Size X (columns)
        int nScreenHeight = 40;			// Console Screen Size Y (rows)
        int nMapWidth = 16;				// World Dimensions
        int nMapHeight = 16;

        float fPlayerX = 14.7f;			// Player Start Position
        float fPlayerY = 5.09f;
        float fPlayerA = 0.0f;			// Player Start Rotation
        float fFOV = 3.14159f / 4.0f;	// Field of View
        float fDepth = 16.0f;			// Maximum rendering distance
        float fSpeed = 5.0f;			// Walking Speed

       
            // Create Screen Buffer
            wchar_t* screen = new wchar_t[nScreenWidth * nScreenHeight];
            HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
            SetConsoleActiveScreenBuffer(hConsole);
            DWORD dwBytesWritten = 0;

            // Create Map of world space # = wall block, . = space
            wstring map;
            map += L"#########.......";
            map += L"#...............";
            map += L"#.......########";
            map += L"#..............#";
            map += L"#......##......#";
            map += L"#......##......#";
            map += L"#..............#";
            map += L"###............#";
            map += L"##.............#";
            map += L"#......####..###";
            map += L"#......#.......#";
            map += L"#......#.......#";
            map += L"#..............#";
            map += L"#......#########";
            map += L"#..............#";
            map += L"################";

            auto tp1 = chrono::system_clock::now();
            auto tp2 = chrono::system_clock::now();

            while (1)
            {
                // We'll need time differential per frame to calculate modification
                // to movement speeds, to ensure consistant movement, as ray-tracing
                // is non-deterministic
                tp2 = chrono::system_clock::now();
                chrono::duration<float> elapsedTime = tp2 - tp1;
                tp1 = tp2;
                float fElapsedTime = elapsedTime.count();


                // Handle CCW Rotation
                if (GetAsyncKeyState((unsigned short)'A') & 0x8000)
                    fPlayerA -= (fSpeed * 0.75f) * fElapsedTime;

                // Handle CW Rotation
                if (GetAsyncKeyState((unsigned short)'D') & 0x8000)
                    fPlayerA += (fSpeed * 0.75f) * fElapsedTime;

                // Handle Forwards movement & collision
                if (GetAsyncKeyState((unsigned short)'W') & 0x8000)
                {
                    fPlayerX += sinf(fPlayerA) * fSpeed * fElapsedTime;;
                    fPlayerY += cosf(fPlayerA) * fSpeed * fElapsedTime;;
                    if (map.c_str()[(int)fPlayerX * nMapWidth + (int)fPlayerY] == '#')
                    {
                        fPlayerX -= sinf(fPlayerA) * fSpeed * fElapsedTime;;
                        fPlayerY -= cosf(fPlayerA) * fSpeed * fElapsedTime;;
                    }
                }

                // Handle backwards movement & collision
                if (GetAsyncKeyState((unsigned short)'S') & 0x8000)
                {
                    fPlayerX -= sinf(fPlayerA) * fSpeed * fElapsedTime;;
                    fPlayerY -= cosf(fPlayerA) * fSpeed * fElapsedTime;;
                    if (map.c_str()[(int)fPlayerX * nMapWidth + (int)fPlayerY] == '#')
                    {
                        fPlayerX += sinf(fPlayerA) * fSpeed * fElapsedTime;;
                        fPlayerY += cosf(fPlayerA) * fSpeed * fElapsedTime;;
                    }
                }

                for (int x = 0; x < nScreenWidth; x++)
                {
                    // For each column, calculate the projected ray angle into world space
                    float fRayAngle = (fPlayerA - fFOV / 2.0f) + ((float)x / (float)nScreenWidth) * fFOV;

                    // Find distance to wall
                    float fStepSize = 0.1f;		  // Increment size for ray casting, decrease to increase										
                    float fDistanceToWall = 0.0f; //                                      resolution

                    bool bHitWall = false;		// Set when ray hits wall block
                    bool bBoundary = false;		// Set when ray hits boundary between two wall blocks

                    float fEyeX = sinf(fRayAngle); // Unit vector for ray in player space
                    float fEyeY = cosf(fRayAngle);

                    // Incrementally cast ray from player, along ray angle, testing for 
                    // intersection with a block
                    while (!bHitWall && fDistanceToWall < fDepth)
                    {
                        fDistanceToWall += fStepSize;
                        int nTestX = (int)(fPlayerX + fEyeX * fDistanceToWall);
                        int nTestY = (int)(fPlayerY + fEyeY * fDistanceToWall);

                        // Test if ray is out of bounds
                        if (nTestX < 0 || nTestX >= nMapWidth || nTestY < 0 || nTestY >= nMapHeight)
                        {
                            bHitWall = true;			// Just set distance to maximum depth
                            fDistanceToWall = fDepth;
                        }
                        else
                        {
                            // Ray is inbounds so test to see if the ray cell is a wall block
                            if (map.c_str()[nTestX * nMapWidth + nTestY] == '#')
                            {
                                // Ray has hit wall
                                bHitWall = true;

                                // To highlight tile boundaries, cast a ray from each corner
                                // of the tile, to the player. The more coincident this ray
                                // is to the rendering ray, the closer we are to a tile 
                                // boundary, which we'll shade to add detail to the walls
                                vector<pair<float, float>> p;

                                // Test each corner of hit tile, storing the distance from
                                // the player, and the calculated dot product of the two rays
                                for (int tx = 0; tx < 2; tx++)
                                    for (int ty = 0; ty < 2; ty++)
                                    {
                                        // Angle of corner to eye
                                        float vy = (float)nTestY + ty - fPlayerY;
                                        float vx = (float)nTestX + tx - fPlayerX;
                                        float d = sqrt(vx * vx + vy * vy);
                                        float dot = (fEyeX * vx / d) + (fEyeY * vy / d);
                                        p.push_back(make_pair(d, dot));
                                    }

                                // Sort Pairs from closest to farthest
                                sort(p.begin(), p.end(), [](const pair<float, float>& left, const pair<float, float>& right) {return left.first < right.first; });

                                // First two/three are closest (we will never see all four)
                                float fBound = 0.01;
                                if (acos(p.at(0).second) < fBound) bBoundary = true;
                                if (acos(p.at(1).second) < fBound) bBoundary = true;
                                if (acos(p.at(2).second) < fBound) bBoundary = true;
                            }
                        }
                    }

                    // Calculate distance to ceiling and floor
                    int nCeiling = (float)(nScreenHeight / 2.0) - nScreenHeight / ((float)fDistanceToWall);
                    int nFloor = nScreenHeight - nCeiling;

                    // Shader walls based on distance
                    short nShade = ' ';
                    if (fDistanceToWall <= fDepth / 4.0f)			nShade = 0x2588;	// Very close	
                    else if (fDistanceToWall < fDepth / 3.0f)		nShade = 0x2593;
                    else if (fDistanceToWall < fDepth / 2.0f)		nShade = 0x2592;
                    else if (fDistanceToWall < fDepth)				nShade = 0x2591;
                    else											nShade = ' ';		// Too far away

                    if (bBoundary)		nShade = ' '; // Black it out

                    for (int y = 0; y < nScreenHeight; y++)
                    {
                        // Each Row
                        if (y <= nCeiling)
                            screen[y * nScreenWidth + x] = ' ';
                        else if (y > nCeiling && y <= nFloor)
                            screen[y * nScreenWidth + x] = nShade;
                        else // Floor
                        {
                            // Shade floor based on distance
                            float b = 1.0f - (((float)y - nScreenHeight / 2.0f) / ((float)nScreenHeight / 2.0f));
                            if (b < 0.25)		nShade = '#';
                            else if (b < 0.5)	nShade = 'x';
                            else if (b < 0.75)	nShade = '.';
                            else if (b < 0.9)	nShade = '-';
                            else				nShade = ' ';
                            screen[y * nScreenWidth + x] = nShade;
                        }
                    }
                }

                // Display Stats
                swprintf_s(screen, 40, L"X=%3.2f, Y=%3.2f, A=%3.2f FPS=%3.2f ", fPlayerX, fPlayerY, fPlayerA, 1.0f / fElapsedTime);

                // Display Map
                for (int nx = 0; nx < nMapWidth; nx++)
                    for (int ny = 0; ny < nMapWidth; ny++)
                    {
                        screen[(ny + 1) * nScreenWidth + nx] = map[ny * nMapWidth + nx];
                    }
                screen[((int)fPlayerX + 1) * nScreenWidth + (int)fPlayerY] = 'P';

                // Display Frame
                screen[nScreenWidth * nScreenHeight - 1] = '\0';
                WriteConsoleOutputCharacter(hConsole, screen, nScreenWidth * nScreenHeight, { 0,0 }, &dwBytesWritten);
            }

            return 0;
    }
}