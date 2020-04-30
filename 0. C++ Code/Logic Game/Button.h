#pragma once


///////////////////////////////////////////////////////////////////////////
//Llibreria grafica
#include "../Graphic Lib/libreria.h"
///////////////////////////////////////////////////////////////////////////
#include <string>

using namespace std;

class Button
{
public:
	typedef enum {
		NORMAL = 0,
		PRESSED,
		NONE
	} ButtonState;

	typedef enum {
		NORMAL = 0,
		RADIO,
	} ButtonType;

	Button(const string& path_normal,
		const string& path_pressed,
		int posX, int posY, int width, int height);

	~Button();

	bool Update(int mousePosX, int mousePosY, bool mouseIsPressed);
	void Render();

private:
	ButtonState m_eCurrentState;
	ButtonType  m_eButtonType;
	int         m_iPosX;
	int         m_iPosY;
	int         m_iWidth;
	int         m_iHeight;
	bool		m_blsOn;
	Sprite      m_oNormal;
	Sprite      m_pPressed;
};
