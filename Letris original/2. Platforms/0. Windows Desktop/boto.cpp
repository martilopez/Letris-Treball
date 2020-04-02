#include "boto.h"


Sprite boto("./data/GUI/Btn_Circle_Close_1_Normal.png");

void boto::settype(bool type) {
	m_type = type;
}

void boto::setPosInicial(int x, int y) {
	m_posButton_X = x;
	m_posButton_Y = y;
}

void boto::drawBoto() {
    boto.draw(m_posButton_X, m_posButton_Y);
}

{
    if (mousePosX > posButton_X && mousePosX < posButton_X + 90 &&
        mousePosY > posButton_Y && mousePosY < posButton_Y + 90 &&
        moousePressed)
    {
        m_active = !m_active;
    }
}