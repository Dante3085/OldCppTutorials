#include <iostream>
#include <queue>


/*"queue": Verh�lt sich gegenteilig zu "stack". Das �lteste Element kommt zuerst wieder heraus.
*/

int main() {

	std::queue<int> st;

	st.push(4151);
	st.push(451);
	st.push(414);
	st.push(41481);

	std::cout << st.front() << std::endl;		//"front()" gibt das �lteste Element der "queue" aus.
	st.pop();									//"pop()" l�scht das �lteste Element der "queue".
	std::cout << st.front() << std::endl;

	system("pause");
	return 0;
}