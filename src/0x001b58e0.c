/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8140625FA35F5A2A5185CC9A4BCB272FB0487BCD0BF9E61852273C0CAEA88C11
 * Entry: 0x001b58e0, Ghidra index: 5676, label: FUN_001b58e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b58e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EDI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(unaff_EDI + 8) - iVar1 >> 5;
  }
  if (uVar4 < in_EAX) {
    FUN_001c82c0(*(undefined4 *)(unaff_EDI + 8),&param_1);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_EDI + 8), in_EAX < (uint)(iVar2 - iVar1 >> 5))) &&
     (in_EAX * 0x20 + iVar1 != iVar2)) {
    uVar3 = FUN_0015eaf0(iVar2,iVar2,param_1);
    *(undefined4 *)(unaff_EDI + 8) = uVar3;
  }
  return;
}
