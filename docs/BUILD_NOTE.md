# CMAKE

1. build dosyası oluşturulur, bu dizin içindeyken şu komut girilir:
       
       cmake ..     
	
    veya 

       make .. -G "MinGW Makefiles"

2. gene aynı dizinde şu komut girilir:

       cmake --build .


Artık çalıştırılabilir bir çıktı elde edilmiştir.

Burdan sonra eğer sisteme eklemek istersek MAKE kullanacağız. Örneğin OpenCV kütüphanesini Linux sistemimize eklemek istediğimizde bu adıma kadar gelip ardından make ile sisteme eklememiz gerekir.

3. build dizininde şu koutlar sırayla girilir. 

       make -j4

       sudo make install


---

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
