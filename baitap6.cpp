class HocSinh
{
  private String hoTen; private double toan, ly, hoa;
 public double diemTB(double toan, double ly, double hoa)
 { 
   return (toan + ly + hoa) / 3;
 }
}
class HocSinhChuyenToan extends HocSinh
{
  public double diemTB(double toan, double ly, double hoa)
  { 
    return ((toan*2) + ly + hoa) / 4; 
  }
}
public class DaHinh5
{
  public static void main(String[] args)
  {
    HocSinh data0 = new HocSinh();  System.out.println(data0.diemTB(5.0, 6.0, 7.0)); 
    HocSinhChuyenToan data1 = new HocSinhChuyenToan(); 
    System.out.println(data1.diemTB(8.0, 6.0, 8.0)); 
  }
}
