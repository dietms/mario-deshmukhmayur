//CS50 PSet 1-C: Mario
import java.util.Scanner;

class Mario {
  int height;
  void triangle() {
    if (this.height > 1 && this.height < 23) {
      for (int i=2; i < (this.height + 2); i++) {
        for (int j=0; j < ((this.height + 1) - i); j++) {
          System.out.print(" ");
        }
        for (int j=1; j <= i; j++) {
          System.out.print("#");
        }
        System.out.println();
      }
    }
  }
  void getHeight() {
    Scanner user_input = new Scanner(System.in);
    System.out.print("Height: ");
    this.height = user_input.nextInt();
  }
  public static void main(String... args) {
    Mario m = new Mario();
    m.getHeight();
    m.triangle();
  }
}
