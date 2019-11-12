a = [18,22,33,3,5,6]
b = [1,4,1,1,88,9]
c = [18,22,3,3,50,6]
puts "select fonksiyonu : #{a.select {|num| num > 10 }}" 

puts "select fonksiyonu : #{b.select {|num| num.odd? }}" 

puts "select fonksiyonu : #{c.select {|num| num % 5 == 0 }}" 
