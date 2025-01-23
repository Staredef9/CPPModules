#include <iostream>

class Pony {

	private:
		int 	height;
		int 	width;
		float	rainbowness;
	public:
		Pony(){};
		Pony(int h, int w, int r){height = h; width = w; rainbowness = r;}
		~Pony();
		
		
		void 	augment(float sprinkles);
		void	set_height(int h);
		void	set_width(int w);
		void	set_rainbowness(float r);
		void	print();


};
