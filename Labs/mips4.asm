lw $s0, 0 ($0)
lw $s2, 0 ($0)
lw $s1, 4 ($0)
addi $s3, $0, 1
add $s4, $s3, $s4

sum:
add $s2, $s2, $s0
add $s4, $s3, $s4
beq $s1, $s4 on_equal
j sum

on_equal:
sw $s2, 8 ($0)

 
