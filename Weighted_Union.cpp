//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/tutorial/

int arr[MAXN];
int size[MAXN];
//Initialisation

void initialize(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
  arr[i]=i;
  size[i]=1;
 }
}

int find(int arr[],int A)
{                              //////Root of a subset O(N)
 int i=A;
 while(i!=arr[i])
 {
  i=arr[i];
 }
 return i;
}
//     Root calculation using path compression O(logN)
int root_using_path_compression(int arr[],int A)
{
 int i=A;
 while(i!=arr[i])
 {
  arr[i]=arr[arr[i]];
  i=arr[i];
 }
 return i;
}

// Union
void Weighted_Union(int arr[],int A,int B)
{
 int root_A=find(arr,A); // or int root_A=root_using_path_compression(int arr,int A)
 int root_B=find(arr,B);//  or int root_B=root_using_path_compression(int arr,int B)
 
 if(size[root_A]<=size[root_B])
 {
  arr[root_A]=arr[root_B];
  size[root_B]+=size[root_A];
 }
 else
 {
  arr[root_B]=arr[root_A];
  size[root_A]+=size[root_B];
 }
}

bool find(int A,int B)
{
 int root_A=root(A);
 int root_B=root(B);
 if(root_A==root_B)
 return true;
 
 return false;
}

