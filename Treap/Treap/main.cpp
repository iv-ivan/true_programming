#include<vector>
#include<cstdlib>
#include"Treap.h"
#include"RMQ.h"
void coutMin(int i, int j, std::vector<int>& a) {
	int min = a[i];
	int ind = i;
	for(int y = i + 1; y <=j; ++y) {
		if(a[y] <= min) {
			min = a[y];
			ind = y;
		}
	}
	std::cout << " " << ind << " " << min;
}

int main() {
	//my_treap::Treap<int,int> a;
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
	std::vector<int> aa;
	for(int i = 0; i < 100;++i) {
		aa.push_back(rand() % 15);
		std::cout << aa[i] << " ";
	}
	RMQ<int> b(aa);
	std::cout << std::endl << b.getMin(0,4).first << " " << b.getMin(0,4).second; coutMin(0,4,aa);
	std::cout << std::endl << b.getMin(34,41).first << " " << b.getMin(34,41).second; coutMin(34,41,aa);
	std::cout << std::endl << b.getMin(0,99).first << " " << b.getMin(0,99).second; coutMin(0,99,aa);
	std::cout << std::endl << b.getMin(74,81).first << " " << b.getMin(74,81).second; coutMin(74,81,aa);
	std::cout << std::endl << b.getMin(17,31).first << " " << b.getMin(17,31).second; coutMin(17,31,aa);
	//std::cout << a;
	return 0;
}