/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E40A3182B0DAD01D37B065EE0E596723CB0A33185CC848A05C967A25E8519F78
 * Entry: 0x00335a85, Ghidra index: 12442, label: FUN_00335a85
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00335a85(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = false;
  uVar4 = 0;
  if (*(ushort *)(param_1 + 0xc) != 0) {
    piVar2 = (int *)(param_1 + 0x30);
    do {
      uVar5 = uVar4;
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) {
        bVar1 = true;
        break;
      }
      uVar4 = uVar5 + 1;
      piVar2 = piVar2 + 4;
    } while (uVar4 < *(ushort *)(param_1 + 0xc));
    uVar4 = uVar5 + 1;
  }
  if (uVar4 < *(ushort *)(param_1 + 0xc)) {
    puVar3 = (undefined4 *)((uVar4 + 2) * 0x10 + param_1);
    do {
      *puVar3 = puVar3[4];
      puVar3[1] = puVar3[5];
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 4;
    } while (uVar4 < *(ushort *)(param_1 + 0xc));
  }
  if (bVar1) {
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 0;
}
