enu = [10, 19, 18]
res = enu.any?{|num| num > 18}
puts res
p [nil, true, 99].any?{Integer}