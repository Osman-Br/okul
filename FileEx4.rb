def temizle gelen
sonuc = []
gelen.each do |e|
if e.include? '.'
sonuc << e.chop
else
sonuc << e
end
end
sonuc
end

file = File.open("banane.txt", 'r')
icerik = file.read
icerik = icerik.split(" ")
sonuc = {}
temizle(icerik).each do |e|
unless sonuc.key? e
sonuc[e] = 1
else
sonuc[e] += 1
end
end
print "Bu metinde #{sonuc.size} eşsiz kelime kullanılmaktadır. Kelimlerin sayıları da şöyledir. \n"
puts 
puts sonuc