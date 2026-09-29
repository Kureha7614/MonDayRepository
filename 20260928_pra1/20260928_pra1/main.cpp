#include "Game.h"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#endif

int main()
{
#ifdef _WIN32
    // コンソールの日本語表示をShift-JISにする
    SetConsoleOutputCP(932);
#endif
    // 乱数の初期設定は起動時に1回だけ行う
    srand(static_cast<unsigned int>(time(nullptr)));
    try
    {
        Game game;
        game.run();
    }
    catch (const std::exception& error)
    {
        std::cerr << "エラー：" << error.what() << "\n";
        return 1;
    }
    return 0;
}