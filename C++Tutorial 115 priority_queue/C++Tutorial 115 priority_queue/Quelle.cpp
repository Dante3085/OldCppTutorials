#include <iostream>
#include <queue>
#include <string>


/*"priority_queue": Das Element mit der größten Priorität kommt zuerst raus. Das Element, was am größten ist. Sollte in den meisten Fällen für Objekte verwendet werden. Geht aber auch
mit normalen Zahlen.
*/

class Person {
private:
	int priority;
public:
	std::string name;
	
	Person(int priority, std::string name) : priority(priority), name(name) {
		//DO NOTHING
	}

	friend bool operator<(const Person &p1, const Person &p2) {		//"Outstanding Function Overloading"
		return p1.priority < p2.priority;
	}
};

int main() {

	std::priority_queue<Person> pq;

	pq.push(Person(12, "Peter"));
	pq.push(Person(120, "Klaus"));
	pq.push(Person(1, "Luke"));
	pq.push(Person(16, "Leia"));

	std::cout << pq.top().name << std::endl;		//"top()" gibt das Element mit der höchsten Priorität aus.
	pq.pop();
	std::cout << pq.top().name << std::endl;

	system("pause");
	return 0;
}