/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F7E2BC7E74EBA37E3B89E7FA8074B8E0B940D5FDEC59F0CE83ECFB91C5AA9C11
 * Entry: 0x000860e0, Ghidra index: 1575, label: FUN_000860e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000860e0(void)

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
  uVar2 = *(uint *)(unaff_ESI + 0xc) >> 3;
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
