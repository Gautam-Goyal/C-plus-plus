#include <iostream>

using namespace std;

int main(){

	int n;
  int item;
	int k;
  int choose;
  int count=0;

	cout<<"No. of elements ";
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Press 1-Insertion"<<endl<<"Press 2-Deletion"<<endl;
  cin>>choose;

	switch(choose){
		case 1:
      cout<<"Element want to insert ";
	    cin>>item;
	    cout<<"Place at which element want to be inserted ";
	    cin>>k;

      n++;
			for(int j=n;j>=k;j--){
				a[j-1] = a[j-2];
			}

			a[k-1]=item;
      
      for(int i=0;i<n;i++){
		  cout<<a[i]<<endl;
	  }
      break;
    case 2:
      cout<<"Element u want to delete ";
      cin>>item;

	    for(int i=0; i<n; i++)
	    {
		    if(a[i]==item)
		  {
			  for(int j=i; j<(n-1); j++){
				a[j]=a[j+1];
			}
			count++;
			break;
		  }
	  }
    n--;
	  if(count==0)
	  {
		  cout<<"Invalid element";
	  }
	  else
	  {
		  for(int i=0; i<n; i++)
		  {
			  cout<<a[i]<<endl;
		  }
	  }
	}
}
