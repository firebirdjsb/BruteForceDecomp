/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 77E4F14B60CE49DAC20EBABBC8D1B09957BFE8339EA5CAD8595831FC557485B1
 * Entry: 0x002218e0, Ghidra index: 7572, label: FUN_002218e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002218e0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = 0;
  if (unaff_EDI != 0) {
    FUN_002b2e00();
    if ((*(uint *)(unaff_EDI + 0x70) & 0x300) != 0) {
      if (*(int **)(unaff_EDI + 0x84) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EDI + 0x84) + 0x10))(1);
      }
      *(undefined4 *)(unaff_EDI + 0x84) = 0;
      *(uint *)(unaff_EDI + 0x70) = *(uint *)(unaff_EDI + 0x70) & 0xfffffcff;
      FUN_002b32b0(unaff_EDI,1);
    }
    local_10 = 0x3f000000;
    local_c = 0x3f000000;
    local_1c = 0;
    local_18 = 0;
    local_14 = 1;
    FUN_002b39a0(&local_1c);
    iVar1 = *(int *)(unaff_EDI + 0x18);
    if (iVar1 != 0) {
      if (param_1 != 0) {
        iVar2 = param_1 + 0x1b0;
      }
      if (*(ushort *)(iVar1 + 8) <= *(ushort *)(iVar1 + 10)) {
        FUN_002ccf80();
      }
      *(int *)(*(int *)(iVar1 + 0xc) + (uint)*(ushort *)(iVar1 + 10) * 4) = iVar2;
      *(short *)(iVar1 + 10) = *(short *)(iVar1 + 10) + 1;
    }
    if ((*(uint *)(unaff_EDI + 0x70) & 0x300) == 0) {
      FUN_002c00d0(*(undefined4 *)(*(int *)(unaff_EDI + 0x14) + 0x10));
      *(uint *)(unaff_EDI + 0x70) = *(uint *)(unaff_EDI + 0x70) & 0xfffffdff | 0x100;
    }
  }
  return;
}
