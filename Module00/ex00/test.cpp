#include <iostream>

class MyClass {
    private:
        int         i = 5;
        int         j = 10;
        int         k;
        std::string str = "chaimaa";
    public:
        int get_i(){
            return (k);
        }
        void    set_k(int k){
            this->k = k;
        }
};

int main (){
    MyClass cl;
    cl.set_k(1000);
    std::cout<<cl.get_i()<<std::endl;
}



// #include <iostream>
// #include <cctype>

// int main(int argc, char **argv)
// {
// 	if (argc == 1)
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
// 	for (int i = 1 ; i < argc ; i++)
// 	{
// 		for (int j = 0 ; j < (int)strlen(argv[i]) ; j++)
// 		{
// 			std::cout << (char)toupper(argv[i][j]);
// 		}
// 	}
// 	std::cout << std::endl;
// 	return (0);
// }