isimler = ["halil", "durmus", "meryem", "kaan"]
isimler.map! {
|isim| isim.capitalize
}
isimler.each do |isim|
puts "#{isim} bilgisayar muhendisidir"
end
