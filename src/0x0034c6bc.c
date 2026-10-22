/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D244871F5DAA94412D3296681165B88B17CD39DD6946F67BFCD51A086841E212
 * Entry: 0x0034c6bc, Ghidra index: 12966, label: FUN_0034c6bc
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c6bc(int param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  
  if (param_1 != 0) {
    KeRaiseIrqlToDpcLevel();
    uVar2 = *(ushort *)(param_1 + -4);
    iVar6 = param_1 + -8 + (uint)*(ushort *)(param_1 + -2) * -0x20;
    *(undefined1 *)(param_1 + -7) = 0;
    iVar7 = param_1 + -8;
    if (*(char *)(iVar6 + 1) == '\0') {
      iVar7 = *(int *)(iVar6 + 8);
      piVar4 = *(int **)(iVar6 + 0xc);
      *piVar4 = iVar7;
      *(int **)(iVar7 + 4) = piVar4;
      *(short *)(iVar6 + 4) = *(short *)(iVar6 + 4) + uVar2;
      iVar7 = iVar6;
    }
    iVar6 = (uint)*(ushort *)(iVar7 + 4) * 0x20 + iVar7;
    if (*(char *)(iVar6 + 1) == '\0') {
      piVar4 = *(int **)(iVar6 + 0xc);
      iVar5 = *(int *)(iVar6 + 8);
      *piVar4 = iVar5;
      *(int **)(iVar5 + 4) = piVar4;
      *(short *)(iVar7 + 4) = *(short *)(iVar7 + 4) + *(short *)(iVar6 + 4);
    }
    uVar3 = *(ushort *)(iVar7 + 4);
    if (uVar3 != uVar2) {
      *(ushort *)((uint)uVar3 * 0x20 + 6 + iVar7) = uVar3;
    }
    iVar6 = 5;
    if (*(ushort *)(iVar7 + 4) < 6) {
      iVar6 = *(ushort *)(iVar7 + 4) - 1;
    }
    piVar1 = (int *)(in_ECX + 0x54 + iVar6 * 8);
    iVar6 = *piVar1;
    piVar4 = (int *)(iVar7 + 8);
    *piVar4 = iVar6;
    *(int **)(iVar7 + 0xc) = piVar1;
    *(int **)(iVar6 + 4) = piVar4;
    *piVar1 = (int)piVar4;
    KfLowerIrql();
  }
  return;
}
