#include <stdio.h>
#include <fstream>

using namespace std;

int main() {
	
	ofstream fout("numbers.txt"); 
	bool check=false;
	int range = 0;
	printf("Введите число: ");
	scanf("%d", &range);
	for (int j=2; j < range; j++)
	{
		for(int i=2;i<= j/2;i++)
			if((j%i)==0 ){
				check=true; 
				break;
			}
		if(check == false){
			printf("%d ", j);
			fout << j;
			fout << "  ";
		}
		check=false;
	}

	fout.close();
	printf("\n");
	return 0;
};