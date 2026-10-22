/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD3F8C5BE13D5FEE1D75F9B577F360A65EFA317E9467857600107A893FC172CD
 * Entry: 0x00056aa0, Ghidra index: 834, label: FUN_00056aa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00056aa0(void)

{
  uint uVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  if (0xfffffffU - *(int *)(unaff_ESI + 8) < in_EAX) {
    FUN_00038a70();
  }
  uVar1 = *(uint *)(unaff_ESI + 8);
  uVar2 = uVar1 >> 1;
  if (uVar2 < 8) {
    uVar2 = 8;
  }
  if ((in_EAX < uVar2) && (uVar1 <= 0xfffffff - uVar2)) {
    in_EAX = uVar2;
  }
  uVar2 = *(uint *)(unaff_ESI + 0xc) >> 2;
  iVar3 = FUN_002ea01d((uVar1 + in_EAX) * 4);
  uVar4 = FUN_00264210(*(int *)(unaff_ESI + 4) + uVar2 * 4,iVar3 + uVar2 * 4);
  if (in_EAX < uVar2) {
    FUN_00264210(*(undefined4 *)(unaff_ESI + 4),uVar4);
    iVar3 = FUN_00264210(*(int *)(unaff_ESI + 4) + in_EAX * 4,iVar3);
  }
  else {
    uVar4 = FUN_00264210(*(undefined4 *)(unaff_ESI + 4),uVar4);
    FUN_0003efa0(uVar4,in_EAX - uVar2);
    in_EAX = uVar2;
  }
  FUN_0003efa0(iVar3,in_EAX);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(*(undefined4 *)(unaff_ESI + 4));
}
