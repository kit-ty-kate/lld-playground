all:
	clang++ lld-test.cpp -llldELF -llldCore -llldConfig `llvm-config-5.0 --link-static --ldflags --cxxflags --libs all` -pthread -lz -lcurses
