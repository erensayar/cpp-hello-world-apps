
# <center> What's Repository For?
My C++ and C++ environments exploration trials and notes repo.
This repo include C++ project that projects include C++ development environment and tools like CMAKE, CPM, Conan.io, maybe Ninja someday.. Also i will try that projects will be developing as a Cross Platform Applications.

---

<br><br>

# <center> MY PERSONAL NOTES

<br><br><br>

# CMAKE

1. build dosyası oluşturulur, bu dizin içindeyken şu komut girilir:
       
       cmake ..     
	
    veya 

       cmake .. -G "MinGW Makefiles"

2. gene aynı dizinde şu komut girilir:

       cmake --build .


Artık çalıştırılabilir bir çıktı elde edilmiştir.

Burdan sonra eğer sisteme eklemek istersek MAKE kullanacağız. Örneğin OpenCV kütüphanesini Linux sistemimize eklemek istediğimizde bu adıma kadar gelip ardından make ile sisteme eklememiz gerekir.

3. build dizininde şu koutlar sırayla girilir. 

       make -j4 (4 : işlemci çekirdek sayısı)

       sudo make install


---

<br>
<br>

# GPP

### 1. Kullanım 1 : Derleme Ve Çalıştırma

   Derleme: 
 	
       g++ main.cpp
        
 
   Çalıştırma:
        
       ./a.out

### 2. Kullanım 2 : Derleme Ve Çalıştırma - Çıktı Tipini Belirleme

       g++ -o main.sh main.cpp

   veya

       g++ -o main.exe main.cpp


---

<br>
<br>

## Sources
* /docs/C++ Syntax.md -> https://github.com/gibsjose/cpp-cheat-sheet
* /docs/CPM pdf -> https://medium.com/swlh/cpm-an-awesome-dependency-manager-for-c-with-cmake-3c53f4376766