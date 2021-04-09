file = File.open("bunane.txt.txt", 'r')
icerik = file.read
file.close
icerik.split(" ").each do |e|
puts e
end
