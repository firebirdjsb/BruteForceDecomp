/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A36B4C3799CFA3E5E7ADCE3DB4C438A349B35E6124DB6BA9D29613DB7E84B81
 * Entry: 0x00315bfb, Ghidra index: 12116, label: FUN_00315bfb
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00315bfb(int param_1)

{
  int *piVar1;
  int in_ECX;
  byte bVar2;
  uint *puVar3;
  ushort uVar4;
  undefined4 uVar5;
  
  uVar4 = 0;
  FUN_003118f0();
  *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + 1;
  if ((*(byte *)(*(int *)(param_1 + 0x78) + 8) & 0x10) == 0) {
    puVar3 = *(uint **)(in_ECX + 0x290);
    uVar4 = 0x40;
  }
  else {
    puVar3 = *(uint **)(in_ECX + 0x294);
  }
  if (*puVar3 < (uint)*(byte *)(param_1 + 100)) {
    uVar5 = 0x88780032;
  }
  else {
    *puVar3 = *puVar3 - (uint)*(byte *)(param_1 + 100);
    bVar2 = 0;
    if (*(char *)(param_1 + 100) != '\0') {
      do {
        piVar1 = (int *)(in_ECX + 0x2c0 + (uint)uVar4 * 4);
        if (*piVar1 == 0) {
          *(ushort *)(param_1 + 0xc + (uint)bVar2 * 2) = uVar4;
          *piVar1 = param_1;
          bVar2 = bVar2 + 1;
        }
        uVar4 = uVar4 + 1;
      } while (bVar2 < *(byte *)(param_1 + 100));
    }
    uVar5 = 0;
  }
  *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + -1;
  FUN_00311923();
  return uVar5;
}
