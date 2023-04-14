all:
	g++ -g -Wall -std=c++11 main.cpp Node.cpp BST.cpp -o bst
	./bst

memCheck:
	g++ -g -Wall -std=c++11 main.cpp Node.cpp BST.cpp -o bst
	valgrind ./bst

memCheckFull:
	g++ -g -Wall -std=c++11 main.cpp Node.cpp BST.cpp -o bst
	valgrind --leak-check=full ./bst