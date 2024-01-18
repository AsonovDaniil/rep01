j main
func:
beq $s2, $s3 on_equal
addi $s4, $0, 1
jr $ra
on_equal:
addi $s4, $0, 100
jr $ra
main:
lw $s0, 0 ($0)
lw $s1, 4 ($0)
add $s2, $s0, $s1
addi $s3, $0, 68
jal func
sw $s4, 8 ($0)
