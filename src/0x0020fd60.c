/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC88A19DD370A1EE55A550F6473C19048F9F34C6F98384C3872CB4AD45B4C6BD
 * Entry: 0x0020fd60, Ghidra index: 7413, label: FUN_0020fd60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee source declares FUN_000a3d50(void).  Xbox callback/register ABI remains
 * ABI_UNVERIFIED; this forward declaration is for C11 source inspection only. */
extern void FUN_000a3d50(void);
void FUN_0020fd60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  iVar4 = (iVar1 + 1) * (iVar1 + 1);
  iVar2 = thunk_FUN_002ea01d(iVar4 * 0x18);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_0001fe40(iVar2,0x18,iVar4,FUN_000a3d50);
  }
  *(int *)(param_1 + 0x80) = iVar2;
  iVar2 = thunk_FUN_002ea01d(iVar4 * 0xc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_0001fe40(iVar2,0xc,iVar4,FUN_000a3d50);
  }
  *(int *)(param_1 + 0x84) = iVar2;
  uVar3 = thunk_FUN_002ea01d(iVar1 * iVar1 * 0xc);
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  FUN_0020fe00();
  FUN_0020f060();
  return;
}
