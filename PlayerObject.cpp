//PlayerObject.cpp//

#include "stdafx.h"

#include "PlayerObject.h"

PlayerObject::PlayerObject(){

}

void PlayerObject::UpdateCurrent(sf::Time p_xDtime){
	sf::Vector2f l_xVel((sf::Keyboard::isKeyPressed(sf::Keyboard::D) - sf::Keyboard::isKeyPressed(sf::Keyboard::A)), (sf::Keyboard::isKeyPressed(sf::Keyboard::S) - sf::Keyboard::isKeyPressed(sf::Keyboard::W)));
	
	setVelocity(l_xVel * (float)p_xDtime.asMicroseconds());
}

void PlayerObject::DrawCurrent(sf::RenderTarget& p_xTarget, sf::RenderStates p_xStates) const {
	p_xTarget.draw(m_xpSprite->GetTexture(), p_xStates);
}