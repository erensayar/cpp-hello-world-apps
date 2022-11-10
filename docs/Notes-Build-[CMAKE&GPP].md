CMAKE

1. build dosyası oluşturulur, bu dizin içindeyken şu komut girilir:
       
       cmake .. -G "MinGW Makefiles"    (veya cmake ..)

2. gene aynı dizinde şu komut girilir:

       cmake --build .

---

GPP

1. Kullanım 1 : Derleme Ve Çalıştırma

       Derleme    : g++ main.cpp
       Çalıştırma : ./a.out

2. Kullanım 2 : Derleme Ve Çalıştırma - Çıktı Tipini Belirleme

       g++ -o main.sh main.cpp
       veya
       g++ -o main.exe main.cpp
