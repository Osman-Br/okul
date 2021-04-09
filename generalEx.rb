def foo dizi=[], a=[], b=[]
dizi.each do |e|
if(e + 1)%2 == 0
a.unshift e
end
end
b = a.map do |e|
e>5 ? e+2 : e-2
end
b.select { |e|
if e.odd?
puts e*e
end
}
end
dizi = (1  .. 10).to_a
foo dizi
