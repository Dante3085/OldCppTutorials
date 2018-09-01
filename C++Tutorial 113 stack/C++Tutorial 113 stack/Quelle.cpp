#include <iostream>
#include <stack>


/*"stack": Das Element, was als letztes reingepackt wurde, wird als erstes wieder herauskommen.
*/

int main() {

	std::stack<int> st;

	st.push(451);
	st.push(51);
	st.push(4451);
	st.push(475);

	std::cout << st.top() << std::endl;		//"top" liefert das Element, was als letztes in den "stack" reingepackt wurde.
	st.pop();								//"pop" löscht das Element, was als letztes in den stack reingepackt wurde.
	std::cout << st.top() << std::endl;

	system("pause");
	return 0;
}