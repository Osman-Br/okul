metin = "bu ne bu nasil aga".split
freq = {}
freq = metin.each do |e|

if(freq.key?e)
freq[e] += 1
else
freq[e] = 1
end
puts freq[e].key
puts freq[e]
end

