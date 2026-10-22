/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EB33374C96308FE010DDCB8DA8087F946D5C9D21BB54F03C39F1720808AA48E4
 * Entry: 0x003793f4, Ghidra index: 13482, label: FUN_003793f4
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003d0000;
extern uint32_t DAT_00400080;
extern uint32_t DAT_00400100;
extern uint32_t DAT_00400144;
extern uint32_t DAT_00400148;
extern uint32_t DAT_00400750;
extern uint32_t DAT_00400764;
extern uint32_t DAT_00400784;
extern uint32_t DAT_00400788;
extern uint32_t PTR_DAT_00400720;
extern uint32_t PTR_DAT_00400754;
extern uint32_t PTR_PTR_00400084;
void FUN_003793f4(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_EBX;
  uint uVar4;
  
  iVar1 = *unaff_EBX;
  if (*(int *)(&DAT_00400100 + iVar1) != 0) {
    FUN_00377cb0();
  }
  uVar4 = *(uint *)((int)&PTR_DAT_00400720 + iVar1);
  *(undefined4 *)((int)&PTR_DAT_00400720 + iVar1) = 0;
  FUN_003793b5();
  uVar2 = unaff_EBX[0x4d];
  if (uVar2 != param_1) {
    FUN_00379515(uVar2);
  }
  unaff_EBX[0x4d] = param_1;
  if (param_1 == 2) {
    *(undefined4 *)(&DAT_00400144 + iVar1) = 0x10000100;
    *(undefined4 *)(&DAT_00400764 + iVar1) = 0x8000000;
    *(uint *)((int)&PTR_DAT_00400720 + iVar1) = uVar4 | 1;
  }
  else {
    if (unaff_EBX[param_1 + 0x51] != 0) {
      *(undefined4 *)(&DAT_00400080 + iVar1) = 0x70000;
      *(undefined4 *)(&DAT_00400080 + iVar1) = 0;
      *(undefined **)(&DAT_00400750 + iVar1) = &DAT_003d0000;
      iVar3 = 0xf;
      do {
        iVar3 = iVar3 + -1;
        *(undefined4 *)((int)&PTR_DAT_00400754 + iVar1) = 0;
      } while (iVar3 != 0);
    }
    *(uint *)((int)&PTR_PTR_00400084 + iVar1) =
         *(uint *)((int)&PTR_PTR_00400084 + iVar1) | 0x1000000;
    uVar4 = (param_1 & 0x1f) << 0x18;
    *(uint *)((int)&DAT_00400148 + iVar1) = uVar4;
    *(uint *)(&DAT_00400784 + iVar1) = unaff_EBX[param_1 + 0x4e] & 0xffff;
    *(undefined4 *)(&DAT_00400788 + iVar1) = 1;
    FUN_003793b5();
    *(uint *)((int)&DAT_00400148 + iVar1) =
         *(uint *)((int)&DAT_00400148 + iVar1) & 0xe0ffffff | uVar4;
    *(undefined4 *)(&DAT_00400144 + iVar1) = 0x10010100;
    *(uint *)(&DAT_00400764 + iVar1) = *(uint *)(&DAT_00400764 + iVar1) & 0xcfffffff;
  }
  return;
}
