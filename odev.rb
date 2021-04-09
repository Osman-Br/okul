def siralama verilen = [1,2]
 j = verilen.length
 while j > 0
  i = j - 1
  while (verilen[j] - verilen[i]) >= 0 && (verilen[j] - verilen[i]) <= 1 && i > 0
   i = i - 1
  end
  temp = verilen[j-1]
  verilen[j-1] = verilen[i]
  verilen[i] = temp 
 end
 return verilen
end
bisi = [3 ,2 ,4 ,1 ,5 ,6]
siralama bisi