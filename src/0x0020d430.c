/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4A5916EE904BC9EFB95497E98691D6525573DAB2D413CF1D7325E690B5CC2359
 * Entry: 0x0020d430, Ghidra index: 7369, label: FUN_0020d430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x0020d4f1) */

undefined1
FUN_0020d430(undefined4 param_1,char param_2,int *param_3,int *param_4,int param_5,char *param_6,
            undefined4 param_7)

{
  int in_EAX;
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((*param_6 == '\0') && (*param_3 == *param_4)) {
    if (param_2 == '\0') {
      FUN_0020c590();
      iVar3 = *(int *)(param_5 + 8);
      for (iVar1 = *(int *)(param_5 + 4); iVar1 != iVar3; iVar1 = iVar1 + 4) {
        FUN_0020d780();
        FUN_000d6ac0(param_1,*(int *)(in_EAX + 8) + -8,param_7);
      }
      uVar2 = 1;
    }
    else {
      iVar3 = *(int *)(in_EAX + 4);
      if (iVar3 != *(int *)(in_EAX + 8)) {
        do {
          iVar1 = FUN_001fb020();
          if (iVar1 != 0) {
            FUN_00074fb0();
          }
          iVar3 = iVar3 + 8;
        } while (iVar3 != *(int *)(in_EAX + 8));
        *param_6 = '\x01';
        return 0;
      }
    }
    *param_6 = '\x01';
  }
  return uVar2;
}
