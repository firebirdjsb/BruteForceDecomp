/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95FD37EF4B3D989CFFF48C306CC21996BB40BB05AE78143F6E3BAFE0E2C60197
 * Entry: 0x001e48b0, Ghidra index: 6784, label: FUN_001e48b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e48b0(void)

{
  int iVar1;
  undefined4 *in_EDX;
  undefined4 *puVar2;
  
  *in_EDX = 0;
  in_EDX[1] = 0x20;
  in_EDX[2] = 0;
  puVar2 = in_EDX + 3;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}
