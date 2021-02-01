#include <iostream>
using namespace std;
int main()
{	int i;
	int n ;
	cout<<"unesite n koje predstavlja duzinu niza "<<endl;
	cin>>n;
	int niz [n];
		cout<<"unesite brojeve niza: "<<endl;
	for(i=0; i<n; i++){
		cin>>niz [i];
	}
	for(i=0; i<n; i++){
	if(niz[i]%2==0)
	cout<<"broj je paran"<<niz [i]<<endl;
	else
		cout<<"broj je neparan"<<niz [i]<<endl;
		}

	return 0;
}
