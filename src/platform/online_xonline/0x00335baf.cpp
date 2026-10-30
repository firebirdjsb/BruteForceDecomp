/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C59951469BA98E1DC591F7653CBD71E43452F2D2A7BE9CC0FAF37255F755FD37
 * Entry: 0x00335baf, Ghidra index: 12445, label: FUN_00335baf
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00335baf(void)

{
  int in_ECX;
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(in_ECX + 0x15b8);
  if (iVar1 != 0) {
    FUN_003356c8(iVar1);
    *(int *)(in_ECX + 0x15b8) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x15b4);
  if (iVar1 != 0) {
    FUN_003356c8(iVar1);
    *(int *)(in_ECX + 0x15b4) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x15c8);
  if (iVar1 != 0) {
    FUN_00330c53(iVar1);
    *(int *)(in_ECX + 0x15c8) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x15c4);
  if (iVar1 != 0) {
    FUN_0033c53d(iVar1);
    *(int *)(in_ECX + 0x15c4) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x15c0);
  if (iVar1 != 0) {
    FUN_00330c53(iVar1);
    *(int *)(in_ECX + 0x15c0) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x15bc);
  if (iVar1 != 0) {
    FUN_0033c53d(iVar1);
    *(int *)(in_ECX + 0x15bc) = 0;
  }
  uVar2 = 0;
  piVar3 = (int *)(in_ECX + 0x1314);
  do {
    if (piVar3[-1] != 0) {
      FUN_0033e9ea(piVar3[-1]);
    }
    if (*piVar3 != 0) {
      FUN_0033e9ea(*piVar3);
    }
    if (piVar3[1] != 0) {
      FUN_003356c8(piVar3[1]);
      piVar3[1] = 0;
    }
    FUN_003476af(uVar2,0);
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 0x2e;
  } while (uVar2 < 4);
  puVar4 = (undefined4 *)(in_ECX + 0x12d0);
  for (iVar1 = 0xb8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}
