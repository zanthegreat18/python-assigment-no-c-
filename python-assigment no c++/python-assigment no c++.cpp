nilaipresentasi = int(input("Masukan Nilai: "))
if nilaipresentasi >= 90:
print("Excellent performance")
elif nilaipresentasi >= 80 :
    print("Very Good performance")
    elif nilaipresentasi >= 70 :
    print("then Good performance")
    elif nilaipresentasi >= 60 :
    print("then average performance")
else:
print("Nilai Anda Jelek")


bilangan1 = int(input("Masukkan bilangan pertama: "))
bilangan2 = int(input("Masukkan bilangan kedua: "))
bilangan3 = int(input("Masukkan bilangan ketiga: "))

if bilangan1 >= bilangan2 and bilangan1 >= bilangan3: #pencarian bilangan
bilangan_terbesar = bilangan1
elif bilangan2 >= bilangan1 and bilangan2 >= bilangan3:
bilangan_terbesar = bilangan2
else:
bilangan_terbesar = bilangan3

print("Bilangan terbesar adalah:", bilangan_terbesar) #nampilin hasil


# Program untuk menampilkan deret Fibonacci hingga n

n = int(input("Masukkan nilai n: "))

a, b = 0, 1
if a <= n:
print(a, end = " ")
a, b = b, a + b
print("===================")



# Program untuk menampilkan bilangan ganjil hingga n


n = int(input("Masukkan nilai ganjil: "))

for i in range(1, n + 1, 2) :
    print(i, end = " ")




    # Program untuk menghasilkan desain yang ditentukan

    baris = 6
    kolom = 6

    for i in range(baris) :
        for char in['A', 'B', 'C'] :
            print(char, end = " ")
            print()



