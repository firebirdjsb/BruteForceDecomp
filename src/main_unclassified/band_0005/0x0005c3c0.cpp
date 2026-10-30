/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D1B5A17508C14E80DB8B1C0D728F748F24C2F430D1E776EB439CA26C17763F9
 * Entry: 0x0005c3c0, Ghidra index: 951, label: FUN_0005c3c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469ab4;
extern uint32_t DAT_00469b58;
undefined8 FUN_0005c3c0(char param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *in_EAX;
  undefined4 uVar4;
  uint uVar5;
  int unaff_ESI;
  int unaff_retaddr;
  uint local_34;
  undefined4 *puStack_30;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  (**(code **)(*DAT_00469ab4 + 0x34))();
  uStack_c = 0;
  uStack_8 = 0;
  iStack_4 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  iStack_14 = 0;
  uVar4 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0xf0))(auStack_10,&uStack_20);
  uVar5 = *(uint *)(iStack_4 + 4);
  local_34 = 0;
  if (uVar5 != 0) {
    puStack_30 = in_EAX;
    do {
      if (3 < unaff_ESI) break;
      if (((((local_34 < uVar5) &&
            (iVar1 = *(int *)(*(int *)(iStack_4 + 8) + local_34 * 4), iVar1 != 0)) &&
           (iVar2 = *(int *)(iVar1 + 4), iVar2 != 0)) && ((*(byte *)(iVar2 + 0x70) & 1) != 0)) &&
         (((*(int *)(iVar1 + 0x14) == 0 || (param_1 != '\0')) &&
          (iVar2 = *(int *)(iVar2 + 0xc), iVar2 != 0)))) {
        cVar3 = FUN_0005c370(iVar2 + 8);
        if ((cVar3 != '\x01') || (cVar3 = FUN_0005c370(iVar2 + 8), cVar3 != '\0')) {
          *(undefined4 *)((unaff_retaddr - (int)in_EAX) + (int)puStack_30) =
               *(undefined4 *)(iVar2 + 0x120);
          unaff_ESI = unaff_ESI + 1;
          *puStack_30 = *(undefined4 *)(*(int *)(*(int *)(iVar1 + 4) + 0xc) + 8);
          puStack_30 = puStack_30 + 1;
        }
      }
      uVar5 = *(uint *)(iStack_4 + 4);
      local_34 = local_34 + 1;
    } while (local_34 < uVar5);
  }
  if (iStack_24 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_24);
  }
  uStack_20 = 0;
  uStack_1c = 0;
  if (iStack_14 != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iStack_14);
  }
  return CONCAT44(uVar4,unaff_ESI);
}
