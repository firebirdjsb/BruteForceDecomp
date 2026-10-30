/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65EDEB4E2ED26384C743B6D9D1E04FEB6003851BABF50272E311470D1AABFBE4
 * Entry: 0x00162c60, Ghidra index: 4655, label: FUN_00162c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00162c60(void)

{
  undefined4 *in_EAX;
  uint uVar1;
  int iVar2;
  undefined4 *in_EDX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (in_EDX != in_EAX) {
    puVar4 = in_EAX + in_EAX[0x41] + 1;
    puVar3 = in_EDX;
    for (uVar1 = in_EDX[0x41] & 0x3fffffff; puVar3 = puVar3 + 1, uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    in_EAX[0x41] = in_EAX[0x41] + in_EDX[0x41];
    in_EAX[0x43] = in_EAX[0x43] | in_EDX[0x43];
    in_EAX[0x44] = in_EAX[0x44] | in_EDX[0x44];
  }
  return;
}
