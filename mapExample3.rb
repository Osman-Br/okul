def foo arr
arr.map do |x|
(x > 10) ? x+1 : x-1
end
end
dizi = [10, 5, 43, 4]
puts foo dizi
puts dizi
