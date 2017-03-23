raw_str = raw_input("input your string:\n")
raw_seq = raw_str.split('%')
seq = []
for ele in raw_seq[1:]:
	seq.append(int(ele, 16))

str = ""
for ele in seq:
	str += chr(ele)

print str