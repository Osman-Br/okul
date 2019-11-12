def ortalama dizi
toplam = 0
dizi.each do |elemanlar|
toplam += elemanlar
end
ortalama = toplam / dizi.size
end
sayılar = [1,2,3,4,5]
puts ortalama sayılar
