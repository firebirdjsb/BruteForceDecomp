/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D70B41B7C3AEDDB6646E9EB9CFEB92D1DB3D496AFBCA0F9DCF38933DF422A4E6
 * Entry: 0x00318786, Ghidra index: 12201, label: FUN_00318786
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00318786(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x12) & 1) != 0) {
    while ((*(ushort *)(in_ECX + 0x12) & 0x8000) != 0) {
      FUN_00317e2d();
    }
  }
  return;
}
