#include "0. C++ Code/Graphic Lib/libreria.h"


class boto
{
public:
	void settype(bool type);
	void setPosInicial(int x, int y);

	void drawBoto();
private:
	bool m_active;
	bool m_type;
	int m_posButton_X;
	int m_posButton_Y;
};

