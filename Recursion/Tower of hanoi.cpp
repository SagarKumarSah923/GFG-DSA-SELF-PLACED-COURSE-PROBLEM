import.java.util.*;
class hanoi{
    long moves=0;
    public long toh(int n,int from,int to,int aux){
        if(N==1){
            System.out.println("move disk 1 from rod" + from + "to rod" +to)
            moves++;
            return moves;
        }
        toh(N-1,from,aux,to);
        System.out.println("move disk"+N+"from rod"+from+"to rod"+to);
        moves++;
        toh(N-1,aux,to,from);
        return moves;
    }
    public static void main(String args[]){
        Hanoi hanoi =new Hanoi();
        int n=3;
        hanoi.toh(n,1,3,2);
        
    }
}