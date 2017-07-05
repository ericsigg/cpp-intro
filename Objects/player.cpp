#include "player.h"

player::player(){
	name = "Default";
}
player::player(string theName){
	name=theName;
}
void player::Greet(){
	cout << "Hey there " << name << "!" << endl;
}
int main(){
	player thePlayer;
	thePlayer.Greet();
	player playerTwo("Player Name");
	playerTwo.Greet();
}
