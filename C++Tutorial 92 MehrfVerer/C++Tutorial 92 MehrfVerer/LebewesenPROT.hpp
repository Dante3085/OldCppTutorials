#pragma once

class Lebewesen {
private:

public:
	void virtual makeSound() = 0;
	virtual ~Lebewesen() {};		//"{}" verhindet Implementierungszwang. Der Lebewesendekonstruktor macht hier zwar immer nocht nichts, das "virtual" sorgt aber daf�r das direkt nach dem Lebewesendekonstruktor der Menschdekonstruktor aufgerufen wird.
};