g++ -c Server.cpp -I.
g++ -c Test.cpp -I.

ar rv libTest.a Server.o Test.o
ranlib libTest.a

g++ -o main main.cpp -I. ./libTest.a
