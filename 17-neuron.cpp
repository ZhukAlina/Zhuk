#include <iostream>
#include <math.h>
using namespace std;
class Neuron{
private:
	int n;//êîëè÷åñòâî âåñîâ(ýëåìåíòîâ ìàññèâà)
	double* weights;//ïðèâàòíûå ïîëÿ
	int flag;//0 - ëèíåéíàÿ êîìáèíàöèÿ, 1 - äðóãàÿ ôóíêöèÿ àêòèâàöèè íåéðîíà

public:
	Neuron(){
		weights = new double[10];
		flag = 0;
	}
	Neuron(int n_,double* weights_,int flag_){
		n = n_;

		weights = new double[n_];
		for (int i = 0; i < n_; i++)
		{
			weights[i] = weights_[i];
		}

		flag = flag_;
	}

	double calc(){
		double result = 0;
		if(flag == 0){
			for (int i = 0; i < n; i++)
			{
				result += i * weights[i];
			}
		}
		else{
			if(flag == 1){
				for (int i = 0; i < n; i++)
				{
					result += 1/(1 + exp(-weights[i]));
				}
			}
		}
		return result;
	}
};

int main(){
	double w_[5] = {1,3,4,2,5};
	Neuron neuron_1(5,w_,1);
	cout << neuron_1.calc() << endl;
	return 0;
}
