puts %w[ant bear cat].one?{|word| word.length == 4}
puts %w[ant bear cat].one?{|word| word.length > 4}
puts %w[ant bear cat].one?{|word| word.length < 4}
puts %w[ant bear cat].one?{/t/}
puts %w[nil true 99].one?
puts %w[nil true 99].one?
puts %w[nil true false].one?
