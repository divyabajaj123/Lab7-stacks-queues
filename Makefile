all: tests

tests: tests.cpp stack.cpp queue.cpp
	g++ -std=c++11 tests.cpp stack.cpp queue.cpp -o tests


test: tests
	./tests "$(try)"

test-win:
	g++ -std=c++11 tests.cpp stack.cpp queue.cpp -o tests.exe
	.\tests.exe
	
clean:
	rm -f tests