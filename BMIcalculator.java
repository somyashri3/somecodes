// package controller;
// // import java.util.Scanner;
public class CalculateBMI {

	//Enter the code here....
   public static double calculator(double height,double weight) {
   {
      double BMI = weight / (height * height);
    //   System.out.print( BMI);
	return BMI;
   }
}
   public static String description(double BMI) {
	   String s="underweight";
	if(BMI < 18.5){
		return s;
		// System.out.println("underweight");

	}else if(BMI >= 18.5 && BMI < 24.9){
		String s1="Normal";
		return s1;

		// System.out.println("Normal");

	}else if(BMI >= 25 && BMI < 29.9){
		String s1="Overweight";
		return s1;
		// System.out.println("Overweight");

	}else if(BMI >= 30 && BMI < 34.9){
		String s1="Obese";
		return s1;
		// System.out.println("Obese");

	}else if(BMI > 35 ){
		String s1="extremely Obese";
		return s1;
		// System.out.println("extremely Obese");

   }
//    else
//    return s;


}
}
