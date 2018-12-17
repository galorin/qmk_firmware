#include "keypad25.h"

void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up

	matrix_init_user();
	
	uint8_t hueStep = (uint8_t)(360 / _KEYS);
	for (uint8_t itr = 0; itr < _KEYS; itr++)
	{
		hsv_color[_BASE][itr].set_hsv_color(hueStep * itr,100,100);
		hsv_color[_APP][itr].set_hsv_color((uint8_t)(hueStep/2 * itr),100,100);
	}
	//hsv_color[_BASE][0].set_hsv_color(110,100,90);
	//hsv_color[_BASE][1].set_hsv_color(140,100,44);
	//hsv_color[_BASE][2].set_hsv_color(110,100,90);
	//hsv_color[_BASE][3].set_hsv_color(110,100,90);
	//hsv_color[_BASE][4].set_hsv_color(110,100,90);
	//hsv_color[_BASE][5].set_hsv_color(110,100,90);
	//hsv_color[_BASE][6].set_hsv_color(110,100,90);
	//hsv_color[_BASE][7].set_hsv_color(110,100,90);
	//hsv_color[_BASE][8].set_hsv_color(110,100,90);
	//hsv_color[_BASE][9].set_hsv_color(110,100,90);
	//hsv_color[_BASE][10].set_hsv_color(110,100,90);
	//hsv_color[_BASE][11].set_hsv_color(110,100,90);
	//hsv_color[_BASE][12].set_hsv_color(110,100,90);
	//hsv_color[_BASE][13].set_hsv_color(110,100,90);
	//hsv_color[_BASE][14].set_hsv_color(110,100,90);
	//hsv_color[_BASE][15].set_hsv_color(110,100,90);
	//hsv_color[_BASE][16].set_hsv_color(110,100,90);
	//hsv_color[_BASE][17].set_hsv_color(110,100,90);
	//hsv_color[_BASE][18].set_hsv_color(110,100,90);
	//hsv_color[_BASE][19].set_hsv_color(110,100,90);
	//hsv_color[_BASE][20].set_hsv_color(110,100,90);
	//hsv_color[_BASE][21].set_hsv_color(110,100,90);
	//hsv_color[_BASE][22].set_hsv_color(110,100,90);
	//hsv_color[_BASE][23].set_hsv_color(110,100,90);
	//hsv_color[_BASE][24].set_hsv_color(110,100,90);
	
	//hsv_color[_APP][0].set_hsv_color(110,100,90);
	//hsv_color[_APP][1].set_hsv_color(140,100,44);
	//hsv_color[_APP][2].set_hsv_color(110,100,90);
	//hsv_color[_APP][3].set_hsv_color(110,100,90);
	//hsv_color[_APP][4].set_hsv_color(110,100,90);
	//hsv_color[_APP][5].set_hsv_color(110,100,90);
	//hsv_color[_APP][6].set_hsv_color(110,100,90);
	//hsv_color[_APP][7].set_hsv_color(110,100,90);
	//hsv_color[_APP][8].set_hsv_color(110,100,90);
	//hsv_color[_APP][9].set_hsv_color(110,100,90);
	//hsv_color[_APP][10].set_hsv_color(110,100,90);
	//hsv_color[_APP][11].set_hsv_color(110,100,90);
	//hsv_color[_APP][12].set_hsv_color(110,100,90);
	//hsv_color[_APP][13].set_hsv_color(110,100,90);
	//hsv_color[_APP][14].set_hsv_color(110,100,90);
	//hsv_color[_APP][15].set_hsv_color(110,100,90);
	//hsv_color[_APP][16].set_hsv_color(110,100,90);
	//hsv_color[_APP][17].set_hsv_color(110,100,90);
	//hsv_color[_APP][18].set_hsv_color(110,100,90);
	//hsv_color[_APP][19].set_hsv_color(110,100,90);
	//hsv_color[_APP][20].set_hsv_color(110,100,90);
	//hsv_color[_APP][21].set_hsv_color(110,100,90);
	//hsv_color[_APP][22].set_hsv_color(110,100,90);
	//hsv_color[_APP][23].set_hsv_color(110,100,90);
	//hsv_color[_APP][24].set_hsv_color(110,100,90);
}
