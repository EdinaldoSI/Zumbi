#include <string>
using std::string;




class Zumbi
{
	public:
		Zumbi();
		Zumbi(const int );
		Zumbi(const int , const int );
		Zumbi(const Zumbi &);
		void morder(const int, int);
		void andar(const int);
		void defender(const int);
	private:
		const static int maxLife;
		static int maxPosition;
		int life;
		int position;
		int veloc;
		int defesa;
		int forca;
		string nome;
};
