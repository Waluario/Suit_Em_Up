//Gamestate.cpp//

#include "stdafx.h"

#include "Gamestate.h"

#include "PlayerObject.h"

Gamestate::Gamestate(){
	m_xpPlayer = new PlayerObject;
}

Gamestate::~Gamestate(){
	delete m_xpPlayer;
	m_xpPlayer = NULL;
}

bool Gamestate::Enter(){
	return true;
}

void Gamestate::Exit(){
	
}

bool Gamestate::Update(sf::Time p_xDtime){
	m_xpPlayer->Update(p_xDtime);

	return false;
}

void Gamestate::Draw(){
	m_xpPlayer->draw(m_xpWindow, );

	// Add the background sprite to the scene
	/*std::unique_ptr<Ground> backgroundSprite(new Ground(mTextures, mWindow.getSize()));
	mGround = backgroundSprite.get();
	mSceneLayers[Background]->attachChild(std::move(backgroundSprite));

	//Add test bump
	std::unique_ptr<Ground_Bump> groundBump(new Ground_Bump(mTextures, 1, 250.f));
	mGroundBump_Test = groundBump.get();
	mGroundBump_Test->setPosition(mSpawnPosition + sf::Vector2f(0, 200.f));
	mGroundBump_Test->setVelocity(40.f, 30.f);
	mSceneLayers[Main]->attachChild(std::move(groundBump));

	//Add Player bump
	std::unique_ptr<Ground_Bump> groundBumpP(new Ground_Bump(mTextures, 0, 100.f));
	mGroundBump_Player = groundBumpP.get();
	mGroundBump_Player->setPosition(mSpawnPosition);
	mSceneLayers[Main]->attachChild(std::move(groundBumpP));

	//Add player
	std::unique_ptr<Player> _player(new Player(mTextures));
	mPlayer = _player.get();
	mPlayer->setPosition(mSpawnPosition);
	mSceneLayers[Main]->attachChild(std::move(_player));*/
}

std::string Gamestate::Next(){
	return "Menustate";
}

bool Gamestate::IsType(const std::string &p_Type){
	return p_Type.compare("Gamestate") == 0;
}