package Assignment;

import java.util.Scanner;

import BTVN8.Chuong;
import BtapH.DonHangDao;
import BtapH.NhomHangDao;
import BtapH.SanPhamDao;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
        int choose;
		do {
			showMenu();
            choose = Integer.parseInt(sc.nextLine());
//            NhomHangDao nhd = new NhomHangDao();
//            DonHangDao dhd = new DonHangDao();
//        	SanPhamDao spd = new SanPhamDao();
			switch(choose) {
                case 1:
                	Scanner sc1 = new Scanner(System.in);
                	
                	int choose1;
                    do {
                    	crudNhomHang();
						choose1 = Integer.parseInt(sc1.nextLine());
	                    switch (choose1) {
							case 1:
								System.out.println("1: thêm 1 nhóm hàng mới");
								nhd.taoNhomHang();
								break;
							case 2:
								System.out.println("2: hiển thị danh sách nhóm hàng");
								nhd.showDsNhomHang();
								break;
							case 3:
								System.out.println("3: nhập mã nhóm hàng");
								System.out.println("----------Tim kiem nhom hang----------");
	                            sc.nextLine();
	                            System.out.println("Nhap ma nhom hang can tim: ");
	                            String maNH = sc.nextLine();
	                            int index = nhd.timNhomHangTuMa(maNH);
	                            if (index == -1) {
	                                System.out.println("Ma nhom hang nhap sai.");
	                            } else if (index == -2) {
	                                System.out.println("Khong tim thay nhom hang");
	                            } else {
	                                System.out.println(nhd.getDsNhomHang().get(index));
	                            }
								break;
							case 4:
								System.out.println("4: Thoát");
								break;
							default:
								System.out.println("Lua chon khong hop le");
								break;
	                    }
	                    if (choose1 == 4) {
                            break;
	                    }
	                }while (choose1 != 4);	
                    break;
                case 2:
                    Scanner sc2 = new Scanner(System.in);      	
                	int choose2;
                    do {
                    	crudSanPham();
						choose2 = Integer.parseInt(sc2.nextLine());
						int index = -1;
                        String maSP = "";                  
	                    switch (choose2) {
							case 1:
								System.out.println("1: thêm 1 sản phẩm mới");
								spd.taoSanPham(nhd);								
								break;
							case 2:
								System.out.println("2: hiển thị danh sách sản phẩm");
								spd.showDsSanPham();
								break;
							case 3:
								System.out.println("3: nhập mã sản phẩm");
								sc.nextLine();
	                            System.out.println("Nhap ma san pham can tim: ");
	                            maSP = sc.nextLine();
	                            index = spd.timSanPhamTuMa(maSP);
	                            if (index == -1) {
	                                System.out.println("Ma san pham nhap sai.");
	                            } else if (index == -2) {
	                                System.out.println("Khong tim thay san pham");
	                            } else {
	                                System.out.println(spd.getDsSanPham().get(index).toDetail());
	                            }
								break;
							case 4:
								System.out.println("4: Câp nhật thông tin sản phẩm");
								sc.nextLine();
	                            System.out.println("Nhap ma san pham can tim Nhom Hang: ");
	                            maSP = sc.nextLine();
	                            index = spd.timSanPhamTuMa(maSP);
	                            if (index == -1) {
	                                System.out.println("Ma san pham nhap sai.");
	                            } else if (index == -2) {
	                                System.out.println("Khong tim thay nhom hang nao tu ma vua nhap.");
	                            } else {
	                                String maNH = spd.getDsSanPham().get(index).getNhomHang().getMaNhomHang();
	                                index = nhd.timNhomHangTuMa(maNH);
	                                System.out.println(nhd.getDsNhomHang().get(index));
	                            }
								break;
							case 5:
								System.out.println("5: Thoát");
								break;
							default:
								break;
	                    }
	                }while (choose2 >= 1 && choose2 <= 4);
					
                    break;
                case 3:
                    Scanner sc3 = new Scanner(System.in);
                	int choose3;
                    do {
                    	crudDonHang();
						choose3 = Integer.parseInt(sc3.nextLine());
	                    switch (choose3) {
							case 1:
								System.out.println("1: tạo 1 đơn hàng mới");
								dhd.taoDonHang(spd);								
								break;
							case 2:
								System.out.println("2: hiển thị danh sách đơn hàng");
								dhd.showDsDonHang();
								break;
							case 3:
								System.out.println("3: Thoát");
								
								break;
							default:
								break;
	                    }
	                }while (choose3 >= 1 && choose3 <= 2);
                    break;
                case 4:
                	System.out.println("----Báo cáo----");
                    break;
                default:
                    System.out.println("nhập sai");
                    break;
            }
        } while(choose >= 1 && choose <= 4);
    }		
	
	
	public static void showMenu() {
	    System.out.println("---------MAIN MENU---------");
	    System.out.println("1. CRUD Nhom Hang.");
	    System.out.println("2. CRUD San Pham.");
	    System.out.println("3. CRUD Don Hang.");
	    System.out.println("4. Bao Cao.");
        System.out.println("5. Thoat.");
	 }

	 public static void crudNhomHang() {
		System.out.println("---------CRUD NHOM HANG---------");
	    System.out.println("1. Them Nhom Hang.");
	    System.out.println("2. Show DS Nhom Hang.");
	    System.out.println("3. Tim Nhom Hang.");
	    System.out.println("4. <-Back to MAIN MENU.");
	 }

	 public static void crudSanPham() {
	    System.out.println("---------CRUD SAN PHAM---------");
	    System.out.println("1. Them San Pham.");
	    System.out.println("2. Show DS San Pham.");
	    System.out.println("3. Tim San pham Theo Ma San Pham.");
	    System.out.println("4. Tim Nhom Hang Theo Ma San Pham.");
	    System.out.println("5. Sua Thong tin San Pham.");
	    System.out.println("6. <-Back to MAIN MENU.");
	 }

	 public static void crudDonHang() {
	    System.out.println("---------CRUD DON HANG---------");
	    System.out.println("1. Them Don Hang.");
	    System.out.println("2. Show All DS Don Hang.");
	    System.out.println("3. Show DS Don Hang theo thang.");
	    System.out.println("4. <-Back to MAIN MENU.");
	   }

	 public static void baoCao() {
	    System.out.println("---------BAO CAO---------");
	    System.out.println("1. Bao Cao doanh so ca nam.");
	    System.out.println("2. Bao Cao doanh so theo thang.");
	    System.out.println("3. Bao Cao Top 3 san pham ban chay theo thang.");
	    System.out.println("4. <-Back to MAIN MENU.");
	 }
	 static DonHangDao dhd = new DonHangDao();
	 static SanPhamDao spd = new SanPhamDao();
	 static NhomHangDao nhd = new NhomHangDao();
}
