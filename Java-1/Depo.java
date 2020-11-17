public class Depo
{
 public static void main(String[] args)
 {
  Kutu k1 = new Kutu();
  k1.x = 10;
  k1.y = 4;
  k1.z = 5;
  double hacim = k1.x*k1.y*k1.z; 
  System.out.println("Kutu Hacmi :" + hacim);
 }
}