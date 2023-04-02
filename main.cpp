//I create a define to hide all warnings
#define _CRT_SECURE_NO_WARNINGS
//I include a new libruary to have access to SFML
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <ctime>
#include <iostream>
#include <thread>
#include <chrono>
#include <fstream>
#include <iostream>
#include <string>
#include<stdlib.h>
#include <cstdlib>
#include <time.h>
//I use namespace sf to don't write "sf::"
 using namespace sf;

bool game = false;
bool ru = false;
void menu(RenderWindow& window)
{
    Texture play, about, background;
    sf::Font font;
    //I load new textures
    play.loadFromFile("images/play.png");
    about.loadFromFile("images/about.png");
    font.loadFromFile("C:\\Windows\\Fonts\\CHILLER.ttf");
    background.loadFromFile("images/terret.png");

    //I create a sprites of textures
    Sprite playB(play), aboutB(about), backgroundS(background);
    //I give position to sprites 
    playB.setPosition(200, 40);
    aboutB.setPosition(200, 100);
    backgroundS.setPosition(0, 0);


    int menuNum = 1;
    bool isMenu = true;

    while (isMenu)
    {

        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
            {
                window.close();
                isMenu = false;

            }
        }

        playB.setColor(Color::White);
        aboutB.setColor(Color::White);
        menuNum = 0;
        window.clear(Color(121, 181, 221));

        IntRect rect(800, 100, 400, 185);
        IntRect recr(800, 260, 400, 300);
        if (rect.contains(Mouse::getPosition(window)))
        {
            playB.setColor(Color::Blue);
            if (Mouse::isButtonPressed(Mouse::Left))
            {

                isMenu = false;
                break;

            }
        }
        if (recr.contains(Mouse::getPosition(window)))
        {
            aboutB.setColor(Color::Blue);
            if (Mouse::isButtonPressed(Mouse::Left))
            {
                ru = true;
                game = false;

            }
        }



        window.draw(backgroundS);
        window.draw(playB);
        window.draw(aboutB);

        if (ru == true && game == false)
        {
            window.clear();
            sf::Text hello;
            sf::Text up;
            sf::Text down;
            sf::Text right;
            sf::Text left;

            hello.setFont(font);
            up.setFont(font);
            down.setFont(font);
            right.setFont(font);
            left.setFont(font);


            hello.setString("Hello,\nThis game was created a 10 years old child(I created this game). \nBut now go pick pineapples!");
            up.setString("To go up click UP.");
            down.setString("To go down click DOWN.");
            right.setString("To go right click RIGHT.");
            left.setString("To go left click LEFT.");


            hello.setCharacterSize(14);
            up.setCharacterSize(16);
            down.setCharacterSize(16);
            right.setCharacterSize(16);
            left.setCharacterSize(16);

            hello.setFillColor(sf::Color::Black);
            up.setFillColor(sf::Color::Black);
            down.setFillColor(sf::Color::Black);
            right.setFillColor(sf::Color::Black);
            left.setFillColor(sf::Color::Black);

            hello.setStyle(sf::Text::Bold);
            up.setStyle(sf::Text::Bold);
            down.setStyle(sf::Text::Bold);
            right.setStyle(sf::Text::Bold);
            left.setStyle(sf::Text::Bold);



            up.setPosition(0, hello.getPosition().y + hello.getLocalBounds().height * 1.3);
            down.setPosition(0, up.getPosition().y + up.getLocalBounds().height * 1.3);
            right.setPosition(0, down.getPosition().y + down.getLocalBounds().height * 1.3);
            left.setPosition(0, right.getPosition().y + right.getLocalBounds().height * 1.3);

            window.draw(backgroundS);

            window.draw(hello);
            window.draw(up);
            window.draw(down);
            window.draw(right);
            window.draw(left);
        }

        window.display();
    }

}

int N = 30, M = 20;
int size = 16;
int w = size * N;
int h = size * M;

int dir = 0, num = 4;
int fruitType = 0;

struct Snake
{
    int x, y;
}  s[100];

struct Fruit
{
    int x, y;
} f;

void Tick()
{
    for (int i = num; i > 0; --i)
    {
        s[i].x = s[i - 1].x; s[i].y = s[i - 1].y;
    }

    int score = 0;
    if (dir == 0) s[0].y += 1;
    if (dir == 1) s[0].x -= 1;
    if (dir == 2) s[0].x += 1;
    if (dir == 3) s[0].y -= 1;

    if ((s[0].x == f.x) && (s[0].y == f.y))
    {
        f.x = rand() % N; f.y = rand() % M;

        num++;
        score += 1;
        if (fruitType == 3)
        {
            num++;
            score += 2;
        }


        fruitType = (rand() % 4);
    }

    if (s[0].x > N) s[0].x = 0;  if (s[0].x < 0) s[0].x = N;
    if (s[0].y > M) s[0].y = 0;  if (s[0].y < 0) s[0].y = M;

    for (int i = 1; i < num; i++)
        if (s[0].x == s[i].x && s[0].y == s[i].y)  num = i;
}

int main()
{

    RenderWindow window(VideoMode(w, h), "Snake it!");

    menu(window);

    Texture t1, t2, t3, t4, t5, t6, t7, t8;
    t1.loadFromFile("images/black.png");
    t2.loadFromFile("images/pine.png");
    t3.loadFromFile("images/snake2.png");
    t4.loadFromFile("images/snake.png");
    t5.loadFromFile("images/headR.png");
    t6.loadFromFile("images/headDo.png");
    t7.loadFromFile("images/headL.png");
    t8.loadFromFile("images/pineSf.png");

    Sprite background(t1);
    Sprite fruit(t2);
    Sprite snake(t3);
    Sprite headUp(t4);
    Sprite headR(t5);
    Sprite headD(t6);
    Sprite headL(t7);
    Sprite Sfruit(t8);


    Clock clock;
    float timer = 0, delay = 0.17;

    f.x = 10;
    f.y = 10;


    while (window.isOpen())
    {
        float time = clock.getElapsedTime().asSeconds();
        clock.restart();
        timer += time;

        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed)
                window.close();
        }

        if (timer > delay) { timer = 0; Tick(); }

        ////// draw  ///////
        window.clear();





        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++)
            {
                background.setPosition(i * size, j * size);
                window.draw(background);
            }


        for (int i = 0; i < num; i++)
        {
            if (i == 0)
            {
                if (Keyboard::isKeyPressed(Keyboard::Left))
                {
                    dir = 1;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Right))
                {
                    dir = 2;
                }
                else if (Keyboard::isKeyPressed(Keyboard::Up))
                {
                    dir = 3;
                }
                if (Keyboard::isKeyPressed(Keyboard::Down))
                {
                    dir = 0;
                }

                if (dir == 0) { headD.setPosition(s[0].x * size, s[0].y * size);  window.draw(headD); }
                if (dir == 1) { headL.setPosition(s[0].x * size, s[0].y * size);  window.draw(headL); };
                if (dir == 2) { headR.setPosition(s[0].x * size, s[0].y * size);  window.draw(headR); };
                if (dir == 3) { headUp.setPosition(s[0].x * size, s[0].y * size);  window.draw(headUp); };

            }
            else
            {
                snake.setPosition(s[i].x * size, s[i].y * size);  window.draw(snake);
            }
        }

        fruit.setPosition(f.x * size, f.y * size);
        Sfruit.setPosition(f.x * size, f.y * size);

        if (fruitType < 3)
        {
            window.draw(fruit);
        }
        else if (fruitType == 3)
        {
            window.draw(Sfruit);
        }


        window.display();

    }

    return 0;
}