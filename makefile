CC := g++
CFLAGS := -Wall -g
SH := ./process_time.sh


%: ./cases/%.cpp
	@g++ $^ -o ./build/$@
	@$(CC) $(CFLAGS) $^ -o ./build/$@
	@$(SH) ./build/$@

clrx:
	@rm -rf ./build/case*