#include <iostream>

/*Voidpointer: Pointer, die auf alles zeigen können (float, int, string bzw. jedes beliebige Objekt).
 *
 *"static_cast" kann bei pointer zu voidpointer und anders herum benutzt werden. Zu anderen primitiven Datentypen macht es jedoch keinen Sinn.
 *
 *Um festzustellen auf was Voidpointer zeigen, muss eine extra Variable erstellt werden, die dies immer in sich speichert. Macht dessen Benutzung eher nervig. 
 */

int main() {

	void *vp = nullptr;

	float a = 183.21f;
	float *p1 = &a;
	vp = p1;

	float *p2 = static_cast<float*>(p1);
	*p2 = 10;

	std::cout << a << std::endl;

	system("pause");
	return 0;
}