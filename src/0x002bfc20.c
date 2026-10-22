/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8B4F7D647A186937D37023B43AFBC3A3A5E1AD3DAF3D0AE17C9376E17A67B2F
 * Entry: 0x002bfc20, Ghidra index: 10003, label: FUN_002bfc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bfc20(int param_1)

{
  int iVar1;
  int *unaff_EDI;
  
  unaff_EDI[5] = unaff_EDI[5] & 0xffcfffffU | 0xc0000;
  unaff_EDI[0x1d] = *(int *)(param_1 + 8);
  unaff_EDI[0x1e] = 0;
  if (unaff_EDI[0x1d] != 0) {
    *(int **)(unaff_EDI[0x1d] + 0x78) = unaff_EDI;
  }
  iVar1 = *(int *)(unaff_EDI[10] + 0x1c);
  unaff_EDI[8] = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0xc) = unaff_EDI + 6;
  }
  unaff_EDI[9] = 0;
  *(int **)(unaff_EDI[10] + 0x1c) = unaff_EDI + 6;
  iVar1 = *(int *)(unaff_EDI[0x11] + 0x1c);
  unaff_EDI[0xf] = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 0xc) = unaff_EDI + 0xd;
  }
  unaff_EDI[0x10] = 0;
  *(int **)(unaff_EDI[0x11] + 0x1c) = unaff_EDI + 0xd;
  *(int **)(param_1 + 8) = unaff_EDI;
  FUN_002c1860(unaff_EDI);
  if ((*(int *)(*(int *)(unaff_EDI[10] + 0x90) + 0x10) != 0) ||
     (*(int *)(*(int *)(unaff_EDI[0x11] + 0x90) + 0x10) != 0)) {
    if (*(ushort *)(param_1 + 0xc) <= *(ushort *)(param_1 + 0xe)) {
      FUN_002ccf80();
    }
    *(int **)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0xe) * 4) = unaff_EDI;
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
  }
  if ((unaff_EDI[5] & 0xc000U) == 0) {
    FUN_002c0220(unaff_EDI,
                 (char)(*(byte *)(*(int *)(unaff_EDI[0x11] + 0x90) + 100) |
                       *(byte *)(*(int *)(unaff_EDI[10] + 0x90) + 100)) < '!',0);
    return;
  }
  (**(code **)(*unaff_EDI + 0x1c))(param_1);
  return;
}
