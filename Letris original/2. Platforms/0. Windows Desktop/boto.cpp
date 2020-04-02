#include "boto.h"


Sprite botoX("./data/GUI/Btn_Circle_Close_1_Normal.png");

void boto::settype(bool type) {
	m_type = type;
}

void boto::setPosInicial(int x, int y) {
	m_posButton_X = x;
	m_posButton_Y = y;
}

void boto::drawBoto() {
    botoX.draw(m_posButton_X, m_posButton_Y);
}

{
    if (mousePosX > m_posButton_X && mousePosX < m_posButton_X + m_size_X &&
        mousePosY > m_posButton_Y && mousePosY < m_posButton_Y + m_size_Y &&
        moousePressed)
    {
        m_active = !m_active;
    }
}