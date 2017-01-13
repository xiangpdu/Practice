#include<stdio.h>
#include<iostream>
#include<String>
using namespace std;

class Animal
{
        private:
                string color;
        public:
                //构造函数
                Animal()
                {
                        printf("调用Animal构造函数\n");
                }
                //带颜色的构造函数
                Animal():color("a")
                {
                        printf("调用Animal带颜色的构造函数\n");
                }
                //拷贝构造函数
                Animal(Animal &a)
                {
                        printf("调用Animal拷贝构造函数\n");
                }
                virtual ~Animal()
                {
                        printf("调用Animal的析构函数\n");
                }
};

class Bear:public Animal
{
        private:
                int fishNum;
        public:
                Bear()
                {
                        printf("调用Bear的构造函数\n");
                }
                Bear(int fishNum):Animal(color)
                {
                        
                }
};

int main(int argc,char *args[])
{
  Animal a;
  Animal b(a);
  return 0;
}
