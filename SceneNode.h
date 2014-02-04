//SceneNode.h//

/*#include <SFML/System/Time.hpp>
#include <SFML/Graphics/Transformable.hpp>
#include <SFML/Graphics/Drawable.hpp>*/

//class SceneNode : public sf::Transformable, public sf::Drawable {
//public:
//	typedef std::unique_ptr<SceneNode> Ptr;
//
//public:
//	SceneNode();
//
//	void attachChild(Ptr child);
//	Ptr detachChild(const SceneNode& node);
//
//	void Update(sf::Time dt);
//	void Draw(sf::RenderTarget& target, sf::RenderStates states) const;
//
//	sf::Vector2f GetWorldPosition() const;
//	sf::Transform GetWorldTransform() const;
//
//private:
//	virtual void UpdateCurrent(sf::Time dt) = 0;
//	void UpdateChildren(sf::Time dt);
//
//	virtual void DrawCurrent(sf::RenderTarget& target, sf::RenderStates states) const = 0;
//	void DrawChildren(sf::RenderTarget& target, sf::RenderStates states) const;
//};