#include"Treap.h"
#include<vector>
#include<cstdlib>
int main() {
	my_treap::Treap<int,int> a;
	/*my_treap::Treap<int, int> b;
	b.insert(1,1);
	b.insert(2,5);
	b.insert(0,2);
	b.insert(8,4);
	a.insert(1,11);
	b.insert(8,8);
	b.insert(2,2);
	b.insert(3,0);
	b.insert(6,7);
	b.insert(1,5);
	std::cout << a;
	std::cout << std::endl << b << std::endl;
	a.unionWith(b);
	std::cout << a;*/
	std::vector<std::pair<int, int> > aa;
	for(int i = 0; i < 15;++i)
		aa.push_back(std::make_pair(i,rand() % 15));
	a.orderBuild(aa,0,14);
	std::cout << a;
	return 0;
}