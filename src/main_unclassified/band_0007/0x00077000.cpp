/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 70BB990705EF3D300CA65F70521CA80BB7B5DF6B538D7D53F1F9409E88D190C6
 * Entry: 0x00077000, Ghidra index: 1390, label: FUN_00077000
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_00077740(int param_1,int param_2);
extern void FUN_00077820(void);
extern int FUN_000779a0(int param_1,int param_2,int param_3,undefined4 param_4);
extern void FUN_000771b0(void);

void FUN_00077000(void)

{
  int iVar1;
  int in_EAX;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (in_ECX == in_EAX) {
    return;
  }
  iVar1 = *(int *)(in_EAX + 4);
  if (iVar1 != 0) {
    uVar3 = *(int *)(in_EAX + 8) - iVar1 >> 4;
    if (uVar3 != 0) {
      iVar4 = *(int *)(in_ECX + 4);
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 8) - iVar4 >> 4;
      }
      if (uVar3 <= uVar5) {
        FUN_00077740(iVar1,*(int *)(in_EAX + 8));
        FUN_00077820();
        if (*(int *)(in_EAX + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             (*(int *)(in_EAX + 8) - *(int *)(in_EAX + 4) >> 4) * 0x10 + *(int *)(in_ECX + 4);
        return;
      }
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(int *)(in_ECX + 0xc) - iVar4 >> 4;
      }
      if (uVar3 <= uVar5) {
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(in_ECX + 8) - iVar4 >> 4;
        }
        iVar4 = iVar4 * 0x10 + iVar1;
        FUN_00077740(iVar1,iVar4);
        uVar2 = FUN_000779a0(iVar4,*(undefined4 *)(in_EAX + 8),*(undefined4 *)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = uVar2;
        return;
      }
      FUN_00077820();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(*(undefined4 *)(in_ECX + 4));
    }
  }
  FUN_000771b0();
  return;
}
