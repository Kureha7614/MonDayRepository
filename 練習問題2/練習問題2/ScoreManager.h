#pragma once
class ScoreManager
{
	int currentScore_ = 0;//現在のスコア
	int highScore_ = 0;//ハイスコア
public:
	void Initialize();
	void Update(int points);
	void Draw();
	void addPoints(int points);
	void resetScore();
	void updateHighScore();
	void displayScores();
};

