package Assignment;

import java.util.ArrayList;
import java.util.Scanner;

public class DonHangDao {
    private ArrayList<DonHang> dsDonHang;
    Scanner sc = new Scanner(System.in);

    public DonHangDao() {
        this.dsDonHang = new ArrayList<DonHang>();
    }

    public ArrayList<DonHang> getDsDonHang() {
        return this.dsDonHang;
    }

    public void setDsDonHang(ArrayList<DonHang> dsDonHang) {
        this.dsDonHang = dsDonHang;
    }

    public void taoDonHang(SanPhamDao spd) {
        DonHang dh = new DonHang();
        dh.nhapDonHang();
        String confirm = "";
        System.out.println("----------DS san pham----------: ");
        spd.showDsSanPham();
        do {
            System.out.println("NHAP MA SAN PHAM DE THEM VAO DON HANG");
            String maSP = sc.nextLine();
            int index = spd.timSanPhamTuMa(maSP);
            if (index == -1) {
                System.out.println("MA SAN PHAM NHAP SAI");
            } else if (index == -2) {
                System.out.println("KHONG TIM THAY SAN PHAM TU MA NAY");
            } else {
                int sl = 0;
                do {
                    try {
                        System.out.println("So luong: ");
                        sl = sc.nextInt();
                    } catch (Exception e) {
                        sc.nextLine();
                    }
                } while (sl == 0);
                for (int i = 0; i < sl; i++) {
                    dh.getDsSanPham().add(spd.getDsSanPham().get(index));
                }
            }
            System.out.println("Them san pham khac vao don hang? (N = no):");
            confirm = sc.nextLine();
        } while (!"n".equalsIgnoreCase(confirm));
        this.dsDonHang.add(dh);
    }

    public void showDsDonHang() {
        for (DonHang dh : this.dsDonHang) {
            System.out.println(dh.toString());
        }
    }

    public void taoDonHangDemo(DonHang dh) {
        this.dsDonHang.add(dh);
    }
}