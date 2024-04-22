class fuel;
class engine
{
    friend class fuel;
	private:
		int powerlevel;
	public:
		engine() {powerlevel = 0;}
		void engine_fn(fuel &f);
};

class fuel
{
    friend class engine;
	private:
		int fuelLevel;
	public:
		fuel() {fuelLevel = 0;}
		void fuel_fn(engine &e);
};