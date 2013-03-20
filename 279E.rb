x, y = 0, 1
s = readline.strip
s.each_char do |c|
	m = [x, y].min + 1
	if c == '0'
		y = m
	else
		x = m
	end
end
puts x
