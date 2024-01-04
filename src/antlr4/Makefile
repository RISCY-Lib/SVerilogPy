
all: SystemVerilogLexer.cpp SystemVerilogParser.cpp

SystemVerilogParser.cpp: SystemVerilogParser.g4
	antlr4 -Dlanguage=Cpp -o . $<

SystemVerilogLexer.cpp: SystemVerilogLexer.g4
	antlr4 -Dlanguage=Cpp -o . $<