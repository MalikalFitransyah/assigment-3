
### Malikal Fitransyah Alwan | 5024251005
## Tujuan
Program C++ ini digunakan untuk menentukan jenis segitiga:
* Segitiga **sama sisi**
* Segitiga **sama kaki**
* Segitiga **siku-siku**
* Segitiga **sembarang**

Input diberikan dalam format **x y z** untuk setiap titik, lalu program memprosesnya menggunakan kalkulasi jarak Euclidean antar titik.

## Cara Kerja Program
* Program membaca **N buah segitiga** dari input menggunakan `cin`
* Setiap segitiga dibentuk dari **3 titik** bertipe `Point2D` dengan koordinat x, y, z
* Semua titik dan segitiga disimpan dalam `vector<Triangle>`
* Klasifikasi dilakukan melalui pengecekan panjang sisi menggunakan `distanceTo()`

## Fungsi Utama
* **distanceTo()**
  Menghitung jarak Euclidean antara dua titik `Point2D` menggunakan rumus akar kuadrat.
* **IsEquilateral()**
  Mengecek apakah ketiga sisi sama panjang dengan toleransi epsilon `1e-4`.
* **IsIsosceles()**
  Mengecek apakah tepat dua sisi sama panjang (bukan sama sisi).
* **IsRight()**
  Mengecek apakah memenuhi teorema Pythagoras dengan mengurutkan sisi terlebih dahulu.
* **TriangleType()**
  Mencetak jenis segitiga ke output berdasarkan urutan pengecekan di atas.

## Contoh
Input:
```
4
0 0 0  2 0 0  1 1.7321 0
0 0 0  4 0 0  2 3 0
0 0 0  3 0 0  0 4 0
0 0 0  5 0 0  2 3 0
```
Output:
```
sama sisi
sama kaki
siku-siku
sembarang
```

---
## Kesimpulan
Program ini mampu mengklasifikasikan jenis segitiga secara otomatis berdasarkan koordinat titik dalam ruang 3D, dengan memanfaatkan namespace `geo`, pemisahan kelas `Point2D` dan `Triangle`, serta fungsi-fungsi yang terstruktur agar kode lebih modular dan mudah dipahami.
