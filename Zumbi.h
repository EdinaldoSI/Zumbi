# include <iostrem>
Class Zumbi{
	public:
		Zumbi();
		Zumbi(const int );
		Zumbi(const int , const int );
		Zumbi(z : Zumbi);
		
	public:
		int morder(const int);
		void andar(const int);
		int defender(const int);
	private:
		const static int maxVeloc;
		int veloc;
		int defesa;
		int forca;
		string: nome;
	};