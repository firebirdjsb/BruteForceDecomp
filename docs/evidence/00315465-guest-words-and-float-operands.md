# 0x00315465 guest words and float operand storage

Original XBE SHA-256:
`B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`.
Original body: 356 bytes, SHA-256:
`A56CC1DFEAEA537DBC01851BC5886A022055C951BB8D33ABB40AD3308083831B`.

At 0x31546e, MOV EAX,[ECX+0x50] reads a DWORD guest pointer. ADD EAX,0x3c
and MOV EAX,[EAX] at 0x315471/74 read the state word. This is not a numeric
float-to-integer conversion of the draft's param_1[0x14]. The C draft now
copies the DWORD and retains 32-bit wrapping of the address addition.

If the state is one, the original selects addresses 0x32f4c0 and 0x31cca8.
Otherwise 0x315482/85 reads the guest pointer at object +0x48 and dereferences
its first DWORD for the matrix base. 0x315493 reloads the outer guest word,
and 0x315496 adds four for the other scalar base. The C draft retains both
reads and separate bases using four-byte copies and uintptr_t bridges.
These bridges assume guest address mapping; they do not implement it.

The x87 memory operands at 0x315499/49f/4a7 read binary32 values at matrix
+0x24/+0x20/+0x1c. 0x3154db/4e1/4eb similarly read +0x30/+0x2c/+0x28.
Those six reads now copy float representations, replacing numeric conversion
of the uint32_t values formerly inferred by Ghidra. This does not establish
a complete object/global structure layout.

Scope: observed DWORD pointer/state reads and the six m32fp operand values.
The surrounding draft arithmetic order and intermediate rounding, x87
comparison/exception behavior, default global storage extents, guest pointer
translation and external callee contract remain unverified. Full function
semantics and behavior are not certified by this storage correction.
Focused i686 and x86_64 C11 checks use the repository sweep flags.

Independent review checked the selected pointer words, 32-bit additions,
reload and six float operand locations. Both focused target checks passed.
Verified levels are A and limited B; full C and D remain unverified.
