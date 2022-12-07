// If we divide the number n by 9 ... 2 until n > 1 then we will get the smallest number

// If n = 100 then
// n / 9 = x
// n / 8 = x
// n / 7 = x
// n / 6 = x
// n / 5 = 10

// now n = 10 then

// n / 9 = x
// n / 8 = x
// n / 7 = x
// n / 6 = x
// n / 5 = 2

// now n = 2 then

// n / 9 = x
// n / 8 = x
// n / 7 = x
// n / 6 = x
// n / 5 = x
// n / 4 = x
// n / 3 = x
// n / 2 = 1

// 2x5x5 = 100.
// So, 255 is the smallest number.

// If n = 12 then

// n / 9 = x
// n / 8 = x
// n / 7 = x
// n / 6 = 2

// now n = 2

// n / 9 = x
// n / 8 = x
// n / 7 = x
// n / 6 = x
// n / 5 = x
// n / 4 = x
// n / 3 = x
// n / 2 = 1

// so, 2 * 6 = 12. i.e. 1 x 2 x 6 = 12 that's why 126 is the smallest number




public class Main {
	private static int[] min(int n) {
		int[] x = new int[50];
		int i = 0;
		x[1] = x[2] = 1;
		boolean Divisible = true;
		while(n > 1){
			Divisible = true;
			int m = 9;
			while(m > 1) {
				if(n % m == 0) {
					x[i++] = m;
					n /= m;
					Divisible = false;
					break;
				}
				m--;
			}			
			if(Divisible == true) {
				x[0] = 0;
				return x;
			}
		}
		
		return x;
	}
	public static void main(String[] args) {
		int[] x;
		int n = 12;
		x = min(n);
		if(x[0] != 0 && x[3] == 0) {
			System.out.print(x[2]);
			System.out.print(x[1]);
			System.out.print(x[0]);
		}
	}
}
