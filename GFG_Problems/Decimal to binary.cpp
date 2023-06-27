void toBinary(int N)
{
    // your code here
    int arr[30];
    int i=0;
    while(N){
        arr[i]=N%2;
        N=N/2;
        i++;
    }
    for(int j=i-1; j>=0; j--){
        cout<<arr[j];
    }
        
}