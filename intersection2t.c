#include <iostream>
using namespace std;
int main() {
	cout << "Enter the size of the array A";
	int n;
	cin >> n;
  cout << "Enter the size of the array B";
	int n1;
	cin >> n1;
	int a[n],b[n1];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
  for (int i = 0; i < n1; i++) {
		cin >> b[i];
	}
  int i=0,j=0;
	while(i<n && j<n1)
  {
			if (a[i] == b[j]) 
      {
				cout << a[i] << " ";
        i++;
        j++;
			}
      if(a[i] > b[j])
      j++;
      if(a[i]<b[j])
      i++;
	}
  return 0;
}
