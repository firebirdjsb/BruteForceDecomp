/* Source-only opaque vararg cursor for recovered Xbox CRT vprintf wrapper.
 *
 * The Ghidra C11 draft at 0x002EBD11 uses a host-specific spelling
 * '__gnuc_va_list' and only forwards that value to FUN_002EDBDE.
 * Xbox Visual Studio 2003 x86 cdecl variadic layout, formatter state,
 * register/stack inputs and binary implementation are NOT verified.
 *
 * The pointer is intentionally opaque; do NOT substitute host va_list
 * or assume native C variadic calling conventions when porting.
 */
#ifndef BF_XBOX_CRT_VARARGS_OPAQUE_H
#define BF_XBOX_CRT_VARARGS_OPAQUE_H
typedef struct BF_XBOX_CRT_VARARGS_LAYOUT_UNVERIFIED *__gnuc_va_list;
#endif
