int BubbleSort(int n, int A[]){
    int C=0;
    int M=0;
    int tmp =0;
    for (int i=0; i<(n-1); i++){
        for (int j=(n-1); j>i; j--){ 
            C++;
            if (A[j]<A[j-1]){
                tmp = A[j]; M++;
                A[j]=A[j-1]; M++;
                A[j-1]= tmp; M++;
            }
        }
    }
    return C+M;
}