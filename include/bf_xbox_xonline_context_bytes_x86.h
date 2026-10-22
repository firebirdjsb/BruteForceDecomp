/* Xbox XONLINE source-draft ECX context byte view.
 *
 * The recovered Visual Studio 2003/Xbox network wrappers at 0x003458C8,
 * 0x00346207, 0x0034628B and 0x003474F9 use XONLINES *this and explicit
 * offsets such as this + 0xBD2, this + 0xBD8, and this + 0xBDC.
 *
 * This typedef deliberately makes +N byte-indexed in host C11. It does
 * NOT claim that the entire Xbox XONLINES runtime object is one byte,
 * that its fields or vtable have been reconstructed, nor that source
 * offsets, calling convention, lock/thread rules or network behavior
 * are verified against the original x86 instructions.
 *
 * C11 syntax-only adapter; do not allocate or instantiate XONLINES and
 * do not infer a socket/session layout from this typedef.
 */
#ifndef BF_XBOX_XONLINE_CONTEXT_BYTES_X86_H
#define BF_XBOX_XONLINE_CONTEXT_BYTES_X86_H
#include <stdint.h>
typedef uint8_t XONLINES;
#endif
