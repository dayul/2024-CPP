#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(int civil, int force, string name, int territory) 
		: civil_(civil), force_(force), name_(name), territory_(territory) {}
	virtual ~Food() {}

private:
	int civil_;			// ±¹¹Î ¼ö
	int force_;			// ±º·Â
	string name_;		// ÀÌ¸§
	int territory_;		// ¶¥ ¸éÀû
};

class Kimchi : public Food {
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper)
		: Food(civil, force, name, territory), garlic_(garlic), pepper_(pepper) {}
	virtual ~Kimchi() {}

private:
	int garlic_;
	int pepper_;
};

class Jelly : public Food {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar) 
		: Food(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar) {}
	virtual ~Jelly() {}

private:
	int gelatin_;
	int sugar_;
};

class Cheese : public Food {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: Food(civil, force, name, territory), milk_(milk), rennet_(rennet) {}
	virtual ~Cheese() {}

private:
	int milk_;
	int rennet_;
};