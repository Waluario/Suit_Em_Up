//Sprite.cpp//

#include "stdafx.h"

#include "Sprite.h"

Sprite::Sprite()
: m_xSprite(){
	
}

Sprite::Sprite(const sf::Texture &p_xTex)
: m_xSprite(p_xTex){
	
}

Sprite::~Sprite(){

}

void Sprite::SetTexture(const sf::Texture& p_xTex){
	m_xSprite.setTexture(p_xTex);
}

const sf::Texture* Sprite::GetTexture() const {
	return m_xSprite.getTexture();
}

void Sprite::SetSprite(){

}

const sf::Sprite Sprite::GetSprite(){
	return m_xSprite;
}

void Sprite::Draw(sf::RenderTarget& m_xTarget, sf::RenderStates m_xStates) const {
	m_xStates.transform *= getTransform();
	m_xTarget.draw(m_xSprite, m_xStates);
}