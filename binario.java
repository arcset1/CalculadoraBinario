import java.util.Scanner;
//import java.lang.math ;




public class binario{


	public static void BinarioaDecimal(){

	long a,b,c,d;
	int i;
	long aux;
	Scanner entrada;
	
	entrada = new Scanner(System.in);
	
	long BinarioA[] = new  long[70000];
	long BinarioB[] = new  long[70000];

	System.out.println("Introduce el numero binario");
	a=entrada.nextLong();
	aux=a;

	c=0;
	
	for(i=0;a!=0;i++){
	
	BinarioA[i]=a%10; // Lo que hace es que toma el último digito del numero que introducimos
	
	a = a/10; //Lo que hace es que elimina el último digito

	c++;
	}
	
	for(i=0;i<c;i++){

	BinarioB[i]=BinarioA[i]*(long) Math.pow(2, i);
	//1System.out.println(BinarioA[i]);
	//System.out.print(BinarioB[i]);
	
	}

	d=0;
	for(i=0;i<c;i++){
	
	//System.out.println("");
	//System.out.println(BinarioB[i]);
	d=d+BinarioB[i];
	}

	System.out.println(" El numero binario: "+aux+" Es igual a: "+d+" En base decimal ");

	}



	public static void DecimalaBinario(){
	
	int a,b,d,e;
	int i;
	int c;
	int A[] = new int [400];
	Scanner F;
	F = new Scanner(System.in);
	
	System.out.println("Introduce un numero de base 10");
	a = F.nextInt();
	
	c=0;
	for(i=0;a!=0;i++){
	
	A[i] = a%2;
	a = a/2;
	c++;	
	}


	System.out.println(c);
	for(i=c-1;i>=0;i--){
	
	System.out.print(A[i]);

	}
	
	}

	
	



	
	public static void suma(){



	int a,b,c,d,e;
	int i;
	int A[] = new int[40];
	int B[] = new int[40];
	Scanner I;
	I = new Scanner(System.in);

	

	System.out.println("Introduce un numero binario");
	a=I.nextInt();

	c=0;
	for(i=0;i!=0;i++){

	A[i]= a%2;
	a = a/2;
	c++;
	
	}

	
	

	
	}




	public static void main(String args[]){

	BinarioaDecimal();
	DecimalaBinario();


	
	}

}
