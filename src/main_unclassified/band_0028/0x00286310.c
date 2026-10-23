/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5078F6A83BFD92A50FA8F864E2AC44422CB98DD6B11D5F3B4DC9F7F5CC7DA095
 * Entry: 0x00286310, Ghidra index: 9078, label: FUN_00286310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
undefined4 FUN_00286310(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  int *piStack_1c;
  int *local_8;
  undefined4 *puStack_4;
  
  piStack_1c = (int *)0x0;
  iVar1 = (**(code **)(*DAT_004432fc + 0x3c))(DAT_004432fc,2,&local_8);
  if ((-1 < iVar1) && (iVar1 = 0, 0 < unaff_EDI)) {
    do {
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      iVar2 = (**(code **)(*DAT_004432fc + 0x40))(DAT_004432fc,2,iVar1,&local_8,0);
      if (-1 < iVar2) {
        piStack_1c = (int *)0x0;
        iVar2 = (**(code **)(*DAT_004432fc + 0x24))
                          (DAT_004432fc,2,&stack0xffffffec,1,&piStack_1c,local_8);
        if (-1 < iVar2) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = local_8;
            (**(code **)(*local_8 + 4))(local_8);
          }
          if (puStack_4 != (undefined4 *)0x0) {
            *puStack_4 = piStack_1c;
            (**(code **)(*piStack_1c + 4))(piStack_1c);
          }
          if (piStack_1c != (int *)0x0) {
            (**(code **)(*piStack_1c + 8))(piStack_1c);
            piStack_1c = (int *)0x0;
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
          }
          return 1;
        }
        if (piStack_1c != (int *)0x0) {
          (**(code **)(*piStack_1c + 8))(piStack_1c);
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < unaff_EDI);
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return 0;
}
