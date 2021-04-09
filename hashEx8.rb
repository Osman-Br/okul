h1 = {"a" => 100 , "b" => 150}

h.each do |key,value|
puts "key: #{key}, value: #{value}"
end

h.each_value {|value| puts "value: #{value}"}
h.each_key {|key| puts "key: #{key}"}