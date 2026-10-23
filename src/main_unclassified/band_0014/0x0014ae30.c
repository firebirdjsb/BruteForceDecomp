/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B187120092FFD09D4134C445C783B4792BE74B80D80D14478961F67586752606
 * Entry: 0x0014ae30, Ghidra index: 4307, label: FUN_0014ae30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014ae30(void)

{
  int iVar1;
  char cVar2;
  int *in_ECX;
  
  cVar2 = (**(code **)(*in_ECX + 0x20))();
  if (cVar2 != '\0') {
    iVar1 = in_ECX[8];
    *(undefined4 *)(iVar1 + 0x1b0) = 0;
    *(byte *)(iVar1 + 0x71) = *(byte *)(iVar1 + 0x71) | 0x20;
    FUN_0014ae80();
  }
  if (in_ECX[8] != 0) {
    FUN_0008f6a0(0);
  }
  (**(code **)(*in_ECX + 0x24))(0);
  return;
}
