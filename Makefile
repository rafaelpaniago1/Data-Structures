# Variáveis
CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinclude
SRCDIR = src
INCLUDEDIR = include
BINDIR = bin
SRCS = $(wildcard $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp,$(BINDIR)/%.o,$(SRCS))
EXEC = teste.out

# Regra padrão
all: $(EXEC)

# Regras de compilação
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

# Compilação individual de cada arquivo .cpp em .o
$(BINDIR)/%.o: $(SRCDIR)/%.cpp $(INCLUDEDIR)/%.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regras para arquivos sem dependências .hpp correspondentes
$(BINDIR)/main.o: $(SRCDIR)/main.cpp $(INCLUDEDIR)/binary_tree.hpp $(INCLUDEDIR)/TipoItem.hpp $(INCLUDEDIR)/TipoNo.hpp $(INCLUDEDIR)/Fila.hpp
	$(CXX) $(CXXFLAGS) -c $(SRCDIR)/main.cpp -o $(BINDIR)/main.o

$(BINDIR)/binary_tree.o: $(SRCDIR)/binary_tree.cpp $(INCLUDEDIR)/binary_tree.hpp $(INCLUDEDIR)/TipoNo.hpp
	$(CXX) $(CXXFLAGS) -c $(SRCDIR)/binary_tree.cpp -o $(BINDIR)/binary_tree.o

$(BINDIR)/TipoItem.o: $(SRCDIR)/TipoItem.cpp $(INCLUDEDIR)/TipoItem.hpp
	$(CXX) $(CXXFLAGS) -c $(SRCDIR)/TipoItem.cpp -o $(BINDIR)/TipoItem.o

$(BINDIR)/TipoNo.o: $(SRCDIR)/TipoNo.cpp $(INCLUDEDIR)/TipoNo.hpp
	$(CXX) $(CXXFLAGS) -c $(SRCDIR)/TipoNo.cpp -o $(BINDIR)/TipoNo.o

$(BINDIR)/Fila.o: $(SRCDIR)/Fila.cpp $(INCLUDEDIR)/Fila.hpp
	$(CXX) $(CXXFLAGS) -c $(SRCDIR)/Fila.cpp -o $(BINDIR)/Fila.o

# Regra de limpeza
clean:
	rm -f $(BINDIR)/*.o $(EXEC)

# Phony targets
.PHONY: all clean
