/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 034B171209F0CF0FC0F2C452EA7570EC582A4AC92B865A160748C1221CDD4112
 * Entry: 0x002bd3d0, Ghidra index: 9944, label: FUN_002bd3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bd3d0(void)

{
  int iVar1;
  int in_EAX;
  int *in_ECX;
  
  in_ECX[0x1c] = in_EAX;
  iVar1 = *(int *)(in_EAX + 0x20);
  in_ECX[1] = 0;
  *in_ECX = iVar1;
  *(int **)(in_EAX + 0x20) = in_ECX;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = in_ECX;
  }
  *(short *)(in_EAX + 0x4a) = *(short *)(in_EAX + 0x4a) + 1;
  return;
}
