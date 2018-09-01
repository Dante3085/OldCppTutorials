
//Aufgabe 1
bool isPrime(int x) {
	bool isPrime = true;				//Es wird davon ausgegangen, dass x eine Primzahl ist.

	if (x < 2) {						//Falls x kleiner als 2 ist, ist x keine Primzahl und "false" ist der return-Wert.
		return false;
	}

	for (int i = 2; i < x; i++) {		//x wird einer Modulo Division mit jeder Zahl zwischen 2 und x - 1 unterzogen. Der Teiler beginnt bei 2 und wird so lange hochgezählt, bis er gleich x ist.

		if (x % i == 0) {				//Falls x % i gleich null ist, ist x keine Primzahl, da kein Rest eine perfekte Division bedeutet.
			isPrime = false;
			break;						//Die Schleife wird beendet.
		}
	}
	return isPrime;						//isPrime wird als return-Wert zurückgegeben. War x % i kein einziges Mal 0, so ist es immer noch true. Andernfalls false. (false = 0; true  = Wert größer 0).
}