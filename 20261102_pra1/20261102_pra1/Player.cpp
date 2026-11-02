#include "Player.h"
#include "Enemy.h"
//コンストラクタ
Player::Player()
{
	hp = MAX_HP;
	heal = MAX_HEAL;
	reduction = 0;
	damage = MAX_PLAYER_DAMAGE;
}
//プレイヤーの攻撃
void Player::Attack(Enemy* target)
{
	std::cout << "プレイヤーの攻撃！" << std::endl;
	target->TakeDamage(damage);
}
//プレイヤーの回復
void Player::Heal()
{
	std::cout << "プレイヤーの回復！" << std::endl;
	hp += heal;
}
//プレイヤーの防御
void Player::Reduce()
{
	std::cout << "プレイヤーの防御！" << std::endl;
	reduction = MAX_Player_Reduction;
}
//プレイヤーがダメージを受ける処理
void Player::TakeDamage(int damage)
{
	//防御が有効な場合、ダメージを減少させる
	if (reduction > 0)
	{
		damage -= reduction;
		if (damage < 0)
		{
			damage = 0;
		}
		reduction = 0;
	}
	//プレイヤーのHPを減少させる
	hp -= damage;
	if (hp < 0)	
	{
		hp = 0;
	}
	std::cout << "プレイヤーは" << damage << "のダメージを受けた！" << std::endl;
	std::cout << "プレイヤーの残りHP：" << hp << std::endl;
}
//プレイヤーのHPを表示する処理
void Player::ShowHP()
{
	std::cout << "プレイヤーの残りHP：" << hp << std::endl;
	std::cout << "\n";
}
//プレイヤーのHPを取得する処理
int Player::GetHP()
{
	return hp;
}
