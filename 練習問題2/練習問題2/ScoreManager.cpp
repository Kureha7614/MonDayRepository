#include "ScoreManager.h"
#include<iostream>
using namespace std;

void ScoreManager::Initialize()
{
	currentScore_ = 0;
	highScore_ = 0;
}

void ScoreManager::Update(int points)
{
	addPoints(points);
	resetScore();
	updateHighScore();
}

void ScoreManager::Draw()
{
	displayScores();
}

void ScoreManager::addPoints(int points)
{
	currentScore_ += points;
}

void ScoreManager::resetScore()
{
	currentScore_ = 0;
}

void ScoreManager::updateHighScore()
{
	if (highScore_ < currentScore_)
	{
		highScore_ = currentScore_;
	}
}

void ScoreManager::displayScores()
{
	cout << "現在のスコア" << currentScore_ << "\n";
	cout << "ハイスコア" << highScore_ << "\n";
}
