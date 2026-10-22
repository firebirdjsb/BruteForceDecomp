/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EEF7F2C23FBB4DBD4B07E66AFF2B2B55CC0A4C2B51D3969F5690A557F215E6BD
 * Entry: 0x001653b0, Ghidra index: 4695, label: FUN_001653b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001653b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_EAX;
  int iVar4;
  int unaff_EBX;
  int unaff_EDI;
  
  while (unaff_EBX < in_EAX) {
    iVar4 = (in_EAX + -1) / 2;
    puVar1 = (undefined4 *)(unaff_EDI + iVar4 * 0x18);
    if (param_1 <= *(int *)(unaff_EDI + iVar4 * 0x18)) break;
    *(undefined4 *)(unaff_EDI + in_EAX * 0x18) = *puVar1;
    iVar2 = unaff_EDI + in_EAX * 0x18;
    *(undefined4 *)(iVar2 + 4) = puVar1[1];
    *(undefined4 *)(iVar2 + 8) = puVar1[2];
    *(undefined4 *)(iVar2 + 0xc) = puVar1[3];
    *(undefined4 *)(iVar2 + 0x10) = puVar1[4];
    *(undefined4 *)(iVar2 + 0x14) = puVar1[5];
    in_EAX = iVar4;
  }
  piVar3 = (int *)(unaff_EDI + in_EAX * 0x18);
  *piVar3 = param_1;
  piVar3[1] = param_2;
  piVar3[2] = param_3;
  piVar3[3] = param_4;
  piVar3[4] = param_5;
  piVar3[5] = param_6;
  return;
}
