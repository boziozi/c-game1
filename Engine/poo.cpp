#include "poo.h"
#include "Graphics.h"

void poo::Update()
{
	/*update the poo location */
	x += vx;
	y += vy;

	/*calculat thr size fo poo */
	const int right = x + width;
	if (x < 0)
	{
		x = 0;
		vx = -vx;
	}
	/*keep the poo in the screen*/
	else if (right >= Graphics::ScreenWidth)
	{
		x = (Graphics::ScreenWidth - 1) - width;
		vx = -vx;
	}
	const int bottom = y + height;
	if (y < 0)
	{
		y = 0;
		vy = -vy;
	}
	else if (bottom >= Graphics::ScreenHeight)
	{
		y = (Graphics::ScreenHeight - 1) - height;
		vy = -vy;
	}
}
