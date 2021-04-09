a = ["a" , "b"]
c = ["c" , "d"]
h = {a => 100, c => 300}
puts h

puts h.keys

puts h[a]
puts h[["a","b"]]
puts h[c]
puts h[["c","d"]]
a[0] = "v"
puts a
puts h[a]
h.rehash
puts h[a]