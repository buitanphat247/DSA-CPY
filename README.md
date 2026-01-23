# Python & C++ Exercise Solutions

Kho lưu trữ các bài tập lập trình được giải bằng cả Python và C++. Mỗi bài tập được tổ chức trong một folder riêng biệt, chứa cả file Python (`.py`) và file C++ (`.cpp`) để so sánh và học tập.

## 📋 Mô tả

Project này bao gồm **78 bài tập lập trình** được giải quyết bằng 2 ngôn ngữ:
- **Python**: Dễ đọc, dễ hiểu, phù hợp cho người mới bắt đầu
- **C++**: Hiệu suất cao, sử dụng `bits/stdc++.h` cho competitive programming

## 📁 Cấu trúc thư mục

Mỗi bài tập được tổ chức trong một folder riêng với cấu trúc:

```
Tên_Bài/
├── Tên_Bài.py    # Giải pháp Python
└── Tên_Bài.cpp   # Giải pháp C++
```

## 🗂️ Phân loại bài tập

### CB (Cơ bản) - 8 bài
- **CB01-CB08**: Các bài tập cơ bản về nhập xuất, phép toán, chu vi, diện tích

### SUM (Tổng) - 8 bài
- **SUM1-SUM8**: Các bài tập về tính tổng, chuỗi số, công thức toán học

### VT (Vectơ/Mảng) - 16 bài
- **VT01-VT16**: Thao tác với mảng, tìm kiếm, sắp xếp, xử lý dữ liệu

### VL (Vòng lặp) - 21 bài
- **VL01-VL21**: Các bài tập về vòng lặp, số nguyên tố, ước số, GCD, LCM

### DK (Điều kiện) - 10 bài
- **DK01-DK10**: Các bài tập về điều kiện, phương trình, năm nhuận

### Các bài tập khác
- **GPTB1**: Giải phương trình bậc nhất
- **GT1**: Giai thừa
- **DT1**: Diện tích hình tròn
- **TAMGIAC**: Tam giác
- **SUMBIG**: Cộng số lớn
- **SUMDIG**: Tổng các chữ số
- **SUMDIV**: Tổng ước số
- **SANGNT**: Sàng số nguyên tố
- **RANGED**: Kiểm tra khoảng
- **PHTINH**: Phép tính
- **MAGPERM**: Magic permutation
- **GAPDOI**: Gấp đôi
- **SPACE**: Đếm khoảng trắng
- **DUYNO**: Duyệt số
- **DEMTU**: Đếm từ
- **DEC2BIN**: Chuyển đổi số
- **DCTDN1**: Dãy con tăng dài nhất

## 🚀 Cách sử dụng

### Chạy file Python

```bash
python Tên_Bài/Tên_Bài.py
```

Ví dụ:
```bash
python CB01/CB01.py
```

### Biên dịch và chạy file C++

```bash
# Biên dịch
g++ -o Tên_Bài/Tên_Bài Tên_Bài/Tên_Bài.cpp

# Chạy
./Tên_Bài/Tên_Bài
```

Hoặc sử dụng trình biên dịch nhanh:
```bash
g++ -std=c++17 -O2 Tên_Bài/Tên_Bài.cpp -o Tên_Bài/Tên_Bài && ./Tên_Bài/Tên_Bài
```

Ví dụ:
```bash
g++ CB01/CB01.cpp -o CB01/CB01 && ./CB01/CB01
```

## 💻 Yêu cầu hệ thống

### Python
- Python 3.x trở lên
- Không cần thư viện bên ngoài (chỉ sử dụng thư viện chuẩn)

### C++
- Trình biên dịch hỗ trợ C++17 (g++, clang++)
- Tất cả file C++ sử dụng `bits/stdc++.h` (chỉ hoạt động trên GCC/Clang)

## 📝 Ghi chú

- Tất cả file C++ sử dụng `#include<bits/stdc++.h>` để bao gồm tất cả thư viện chuẩn
- Code được viết theo phong cách competitive programming
- Mỗi bài có thể có nhiều cách giải, đây là một trong những cách tiếp cận

## 🎯 Mục đích

Project này phục vụ cho:
- Học tập và so sánh giữa Python và C++
- Thực hành competitive programming
- Tham khảo các thuật toán và kỹ thuật lập trình
- Chuẩn bị cho các kỳ thi lập trình

## 📊 Thống kê

- **Tổng số bài tập**: 78
- **Ngôn ngữ**: Python 3, C++17
- **Tổng số file**: 156 (78 Python + 78 C++)

## 🤝 Đóng góp

Mọi đóng góp đều được chào đón! Nếu bạn có cách giải tối ưu hơn hoặc muốn thêm bài tập mới, vui lòng tạo Pull Request.

## 📄 License

Project này được tạo cho mục đích học tập và tham khảo.

---

**Happy Coding! 🚀**
