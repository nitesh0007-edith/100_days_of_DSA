double termOfGP(int A,int B,int N)
    {
        //Your code here
        double a1=A;
        double a2=B;
        double r=a2/a1;
        double Nth=a1*pow(r,N-1);
        return Nth;
    }
