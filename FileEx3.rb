file = File.open("banane.txt", 'r')
icerik = file.read
sonuc = {}
sesli = %w(a e i o u A E I O U)
icerik.chars.each do |harf|
if sesli.include? harf
sonuc[harf] = "sesli"
else
sonuc[harf] = "sessiz"
end
end

print "Bu metinde #{sonuc.size} farklı karakter kullanılmaktadır. Bunlardan dolayı #{sonuc.select{|k,v| v == "sesli"}.size} tanesi sesli , #{sonuc.select{|k,v| v == "sessiz"}.size} tanesi sessizdir.\n "

print "bune"
print sonuc
