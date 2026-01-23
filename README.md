# Python & C++ Exercise Solutions

Kho lưu trữ các bài tập lập trình được giải bằng cả Python và C++. Mỗi bài tập được tổ chức trong một folder riêng biệt, chứa cả file Python (`.py`) và file C++ (`.cpp`) để so sánh và học tập.

## 📋 Mô tả

Project này bao gồm **78 bài tập lập trình** được giải quyết bằng 2 ngôn ngữ:
- **Python**: Dễ đọc, dễ hiểu, phù hợp cho người mới bắt đầu
- **C++**: Hiệu suất cao, sử dụng `bits/stdc++.h` cho competitive programming

Tất cả các bài tập được lấy từ nền tảng [LuyenCode.net](https://luyencode.net/problems/) - một trang web luyện tập lập trình trực tuyến.

---

## 🎯 Hướng dẫn sử dụng LuyenCode.net

### Bước 1: Truy cập trang web

Vào địa chỉ: **https://luyencode.net/problems/**

### Bước 2: Tạo tài khoản

1. Click vào nút **"Đăng ký"** hoặc **"Sign Up"** ở góc trên bên phải
2. Điền thông tin đăng ký (tên đăng nhập, email, mật khẩu)
3. Xác nhận email (nếu yêu cầu)
4. Đăng nhập vào tài khoản vừa tạo

### Bước 3: Vào phần Problems

1. Sau khi đăng nhập, click vào tab **"PROBLEMS"** trên thanh menu
2. Bạn sẽ thấy danh sách các bài tập được hiển thị

### Bước 4: Cài đặt chế độ mặc định

Ở bảng **"Problem search"** bên phải, đảm bảo:
- ✅ **Tất cả các checkbox đều BỎ CHỌN** (không tích):
  - Hide solved problems
  - Has editorial
  - Show problem types
- ✅ **Category**: Chọn **"All"** (Tất cả)
- ✅ **Point range**: Để mặc định `0` đến `10`

> 💡 **Lưu ý**: Giữ nguyên các cài đặt mặc định này để xem được tất cả các bài tập từ dễ đến khó.

### Bước 5: Chọn bài tập và giải bằng 2 ngôn ngữ

1. **Chọn một bài tập** từ danh sách (ví dụ: CB01, CB02, SUM1, ...)
2. **Đọc kỹ đề bài** và hiểu yêu cầu
3. **Giải bài bằng Python**:
   - Click vào bài tập để xem chi tiết
   - Chọn ngôn ngữ **Python 3** trong phần submit
   - Viết code giải bài
   - Test code với các test case mẫu
4. **Giải bài bằng C++**:
   - Chọn ngôn ngữ **C++17** hoặc **C++** trong phần submit
   - Viết code giải bài tương tự
   - Test code với các test case mẫu

### Bước 6: Submit và kiểm tra kết quả

1. **Submit code Python**:
   - Copy code Python của bạn
   - Paste vào ô code trên LuyenCode
   - Chọn ngôn ngữ **Python 3**
   - Click **"Submit"**
   - Đợi kết quả:
     - ✅ **"Accepted"** (AC): Code đúng, bài đã pass
     - ❌ **"Wrong Answer"** (WA): Kết quả sai
     - ❌ **"Time Limit Exceeded"** (TLE): Vượt quá thời gian
     - ❌ **"Runtime Error"** (RE): Lỗi khi chạy
     - ❌ **"Compilation Error"** (CE): Lỗi biên dịch

2. **Submit code C++**:
   - Làm tương tự với code C++
   - Chọn ngôn ngữ **C++17** hoặc **C++**
   - Submit và kiểm tra kết quả

3. **Lặp lại cho đến khi PASS**:
   - Nếu chưa pass, đọc lại đề bài
   - Kiểm tra logic code
   - Sửa lỗi và submit lại
   - **Tiếp tục submit cho đến khi được "Accepted"**

### Bước 7: Hiểu và lưu trữ solution

Sau khi đã **pass cả 2 ngôn ngữ** (Python và C++):

1. ✅ **Hiểu rõ thuật toán**: Đảm bảo bạn hiểu cách giải, không chỉ copy code
2. ✅ **Lưu code vào project này**:
   - Tạo folder với tên bài (ví dụ: `CB01/`)
   - Lưu file Python: `CB01/CB01.py`
   - Lưu file C++: `CB01/CB01.cpp`
3. ✅ **Commit và push lên GitHub**:
   ```bash
   git add CB01/
   git commit -m "Add solution for CB01 in Python and C++"
   git push origin main
   ```

---

## 📁 Cấu trúc thư mục

Mỗi bài tập được tổ chức trong một folder riêng với cấu trúc:

```
Tên_Bài/
├── Tên_Bài.py    # Giải pháp Python (đã pass trên LuyenCode)
└── Tên_Bài.cpp   # Giải pháp C++ (đã pass trên LuyenCode)
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

## 🚀 Cách chạy code local

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

## 📝 Quy trình làm bài chuẩn

1. ✅ Vào [LuyenCode.net](https://luyencode.net/problems/)
2. ✅ Chọn bài tập từ danh sách
3. ✅ Đọc kỹ đề bài và hiểu yêu cầu
4. ✅ Giải bài bằng **Python** → Submit → Đợi kết quả
5. ✅ Nếu chưa pass → Sửa lỗi → Submit lại → Lặp đến khi pass
6. ✅ Giải bài bằng **C++** → Submit → Đợi kết quả
7. ✅ Nếu chưa pass → Sửa lỗi → Submit lại → Lặp đến khi pass
8. ✅ **Hiểu rõ thuật toán** (không chỉ copy code)
9. ✅ Lưu cả 2 file vào project (`.py` và `.cpp`)
10. ✅ Commit và push lên GitHub

## ⚠️ Lưu ý quan trọng

- 🔴 **KHÔNG chỉ copy code**: Phải hiểu thuật toán và cách giải
- 🔴 **Submit cho đến khi PASS**: Không bỏ cuộc giữa chừng
- 🔴 **Giải bằng CẢ 2 ngôn ngữ**: Python và C++ đều phải pass
- 🔴 **Test kỹ trước khi submit**: Kiểm tra với các test case mẫu
- 🔴 **Đọc kỹ đề bài**: Hiểu rõ input/output format

## 🎯 Mục đích

Project này phục vụ cho:
- Học tập và so sánh giữa Python và C++
- Thực hành competitive programming trên LuyenCode.net
- Tham khảo các thuật toán và kỹ thuật lập trình
- Chuẩn bị cho các kỳ thi lập trình
- Rèn luyện kỹ năng giải bài bằng nhiều ngôn ngữ

## 📊 Thống kê

- **Tổng số bài tập**: 78
- **Ngôn ngữ**: Python 3, C++17
- **Tổng số file**: 156 (78 Python + 78 C++)
- **Nền tảng**: [LuyenCode.net](https://luyencode.net/problems/)

## 🔗 Liên kết hữu ích

- **LuyenCode Problems**: https://luyencode.net/problems/
- **LuyenCode Homepage**: https://luyencode.net/

## 🤝 Đóng góp

Mọi đóng góp đều được chào đón! Nếu bạn có cách giải tối ưu hơn hoặc muốn thêm bài tập mới, vui lòng:
1. Giải bài trên LuyenCode.net và pass cả 2 ngôn ngữ
2. Lưu code vào project
3. Tạo Pull Request

## 📄 License

Project này được tạo cho mục đích học tập và tham khảo.

---

**Happy Coding! 🚀**

*Nhớ: Submit qua là qua, nhưng phải hiểu là được! 💪*
