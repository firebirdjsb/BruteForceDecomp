/* Opaque tag for pointer-only recovered calls to original Xbox _longjmp.
 *
 * A legacy Ghidra draft emits the name '__jmp_buf_tag' (a host C-library
 * name), but the real Visual Studio 2003 / Xbox _longjmp context layout
 * is NOT established by that spelling. It MUST NOT be replaced with the
 * host setjmp.h jmp_buf, a fabricated register array or a native-PC longjmp
 * adapter without machine-code evidence.
 *
 * The tagged incomplete type is used ONLY by caller functions that cast
 * and forward an observed 32-bit pointer. src/0x002eb90c.c dereferences
 * the original jump context; it is deliberately excluded from this header
 * because its recovered fields/FS register ABI remain unverified.
 */
#ifndef BF_XBOX_JUMP_CONTEXT_OPAQUE_H
#define BF_XBOX_JUMP_CONTEXT_OPAQUE_H
typedef struct BF_XBOX_X86_JUMP_CONTEXT_LAYOUT_UNKNOWN __jmp_buf_tag;
#endif
