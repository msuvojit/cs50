	.text
	.file	"hello2.c"
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# BB#0:
	pushq	%rbp
.Ltmp0:
	.cfi_def_cfa_offset 16
.Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
.Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movabsq	$.L.str, %rax
	movabsq	$.L.str.1, %rcx
	movl	%edi, -4(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rax, %rdi
	movq	%rcx, %rsi
	movb	$0, %al
	callq	printf
	xorl	%edx, %edx
	movl	%eax, -20(%rbp)         # 4-byte Spill
	movl	%edx, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc

	.type	.L.str,@object          # @.str
	.section	.rodata.str1.1,"aMS",@progbits,1
.L.str:
	.asciz	"Hello, World!My name is %s!\n"
	.size	.L.str, 29

	.type	.L.str.1,@object        # @.str.1
.L.str.1:
	.asciz	"Suvo"
	.size	.L.str.1, 5


	.ident	"clang version 3.8.0-2ubuntu3 (tags/RELEASE_380/final)"
	.section	".note.GNU-stack","",@progbits
