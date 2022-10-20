# include <iostream>
int main() {

	//18. «адано натуральное число N. Ќайти количество натуральных чисел, не превосход€щих N и не дел€щихс€ ни на одно из чисел 2,3,5.
		int n;
		std::cout << "n:";
		std::cin >> n;
		int i = 1;
		int k = 0;
		while (i <= n) {
			if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
			{
				k++;
			}
			i = i + 1;
		}
		std::cout << k << std::endl;

		// task 1.
 int m;
 std::cout << "m:"; 
 std::cin >> m;
 int i1 = 7;
 while (i1 <= 98) {
	 if (i1 = i1 + 7){
	 } 
 std::cout << i1 << std::endl;
         }

//task 2.
 int N; 
 std::cout << "N:"; 
 std::cin >> N;
 int I = 0; 
 while (I < N) {
	 if (I = I + 1) {

	 }
	 std::cout << '$' << std::endl;
 }


 //task 3 
	int sum = 0;
	
	int I1 = 20 ;
	while (I1 <= 78) {
		if (I1 % 2 == 0) {
			
			sum += I1;
		}
		
		
		
		I1 = I1 + 1; 
	}
	std::cout << sum << std::endl;
}