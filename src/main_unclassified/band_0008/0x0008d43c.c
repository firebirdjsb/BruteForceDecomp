/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23A8B3595EB04F7F1FBDAE4E5C33A4B23BAA54B50CF1B28508DFC23B1A8F1DCA
 * Entry: 0x0008d43c, Ghidra index: 1712, label: FUN_0008d43c
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1
FUN_0008d43c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  uint unaff_EBX;
  uint uVar8;
  bool in_ZF;
  undefined1 unaff_retaddr;
  
  if ((in_ZF) ||
     (piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))(), *piVar3 != 0x17506391))
  {
    return 0;
  }
  uVar4 = (**(code **)(*in_ECX + 0x10))(&stack0x0000000c);
  if (uVar4 != unaff_EBX) {
    iVar1 = *(int *)(uVar4 + 0x28);
    uVar2 = *(uint *)(iVar1 + 4);
    unaff_retaddr = 1;
    if (uVar2 != 0) {
      if (unaff_EBX < uVar2) {
        iVar5 = **(int **)(iVar1 + 8);
      }
      else {
        iVar5 = 0;
      }
      uVar8 = *(uint *)(iVar5 + 4);
      if (uVar8 != unaff_EBX) {
        iVar5 = 0;
        uVar7 = 1;
        do {
          if (*(int *)(*(int *)(uVar8 + 0xc) + 8) == *(int *)(*(int *)(param_4 + 0xc) + 8)) {
            if ((*(byte *)(uVar8 + 0x70) & 1) == 0) {
              return 0;
            }
            FUN_001129e0();
            FUN_0005bee0(iVar1,uVar8);
            break;
          }
          if (uVar2 <= uVar7) break;
          iVar5 = iVar5 + 4;
          if (uVar7 < uVar2) {
            iVar6 = *(int *)(iVar5 + *(int *)(iVar1 + 8));
          }
          else {
            iVar6 = 0;
          }
          uVar8 = *(uint *)(iVar6 + 4);
          uVar7 = uVar7 + 1;
        } while (uVar8 != 0);
      }
    }
    FUN_0008b400(uVar4,param_4,param_5);
  }
  return unaff_retaddr;
}
