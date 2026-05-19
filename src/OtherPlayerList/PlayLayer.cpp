#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {
    void update(float dt) {
        PlayLayer::update(dt);
        
        // 1. Get your character's positions
        auto player1 = m_player1;
        float posX = player1->getPositionX();
        float posY = player1->getPositionY();
        bool isDead = player1->m_isDead;

        // 2. TODO: Pack posX, posY, and isDead into a byte packet
        // 3. TODO: Send packet to your network thread / socket
    }
};
