/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58367FFA2A0179375018FA0F5C26DA24391E42EBE0ED8FDDA35A21FC7BDC396F
 * Entry: 0x000a3d50, Ghidra index: 1952, label: FUN_000a3d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original 0x000A3D50: MOV EAX, ECX; RET.  This models the 32-bit
 * guest register transfer explicitly; a host callback still needs an
 * x86 ECX/EAX calling-convention adapter before native linking. */
uint32_t FUN_000a3d50(uint32_t guest_ecx)

{
  return guest_ecx;
}
