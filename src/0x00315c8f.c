/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52EF562367C76550D18A56C0DCBBE364C6C0A214997A79B279C0578CEC91E136
 * Entry: 0x00315c8f, Ghidra index: 12117, label: FUN_00315c8f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00315c8f(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  ushort uVar4;
  
  FUN_003118f0();
  *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + 1;
  uVar4 = 0;
  if (*(char *)(param_1 + 100) != '\0') {
    do {
      puVar1 = (ushort *)(param_1 + 0xc + (uint)uVar4 * 2);
      uVar3 = (uint)*puVar1;
      *puVar1 = 0xffff;
      *(undefined4 *)(in_ECX + 0x2c0 + uVar3 * 4) = 0;
      if (uVar3 < 0x40) {
        piVar2 = *(int **)(in_ECX + 0x294);
      }
      else {
        piVar2 = *(int **)(in_ECX + 0x290);
      }
      *piVar2 = *piVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(byte *)(param_1 + 100));
  }
  *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + -1;
  FUN_00311923();
  return;
}
