#include "SET-TABLE.h"


void main(void){

	/*collection.Add(pair_i(DATE(12, 03, 2017), Item("Chair", 341, 12, 03, 2017)));
	collection.Add(pair_i(DATE(), Item("Table", 150)));
	collection.Add(pair_i(DATE(), Item("Computer", 200)));
	collection.Add(pair_i(DATE(02, 06), Item("Tablet", 232, 02, 06)));*/
	set_table s(4, { text, numeric, numeric, numeric});
	s.SetSortBy(2);
	int n = 0;
	int i;
	
		for (i = 0; i < 40; i++){
			s.Create_Row({ New("Amili gold"), New(23), New(61), New(92) });
			cout << i;
		}
		s.Show();
	/*cout << sizeof(s)+400*sizeof(TNode<string>)+sizeof(Searcher)+4*sizeof(set<string>);*/

	system("pause");
	/*lazy initialisation*/
}