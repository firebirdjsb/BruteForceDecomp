/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37C8ECF2C406507ACCD19270FF8F4F96FB6FC4EF144D57E0DBB99F8538F7E8E8
 * Entry: 0x000f7230, Ghidra index: 3096, label: FUN_000f7230
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
undefined1 FUN_000f7230(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined4 ***pppuStack_20;
  undefined1 local_1c [4];
  undefined2 local_18;
  uint uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)DAT_00469b58[2];
  uVar7 = 0;
  local_4 = 7;
  local_8 = 0;
  local_18 = 0;
  cVar3 = (**(code **)(*piVar1 + 0x19c))(1,local_1c);
  uVar8 = 0;
  if (cVar3 != '\0') {
    ppppuVar4 = (undefined4 ****)pppuStack_20;
    if (uStack_c < 8) {
      ppppuVar4 = &pppuStack_20;
    }
    cVar3 = FUN_00102300(ppppuVar4,0,&stack0xffffffd4);
    uVar8 = uVar7;
    if (cVar3 == '\x01') {
      (**(code **)(*piVar1 + 0x1bc))(&stack0xffffffd4);
      cVar3 = FUN_00102120();
      if (cVar3 != '\0') {
        iVar5 = (**(code **)(*piVar1 + 0xdc))(1);
        if (iVar5 != 0) {
          FUN_00102210(&stack0xffffffd4,&stack0xffffffd8);
          iVar2 = *piVar1;
          iVar6 = (**(code **)(*DAT_00469b58 + 0x48))();
          (**(code **)(iVar2 + 0x230))(*(undefined4 *)(iVar6 + 0x50));
          iVar5 = *(int *)(iVar5 + 0x1c);
          if (*(uint *)(iVar5 + 0x18) < 0x10) {
            iVar5 = iVar5 + 4;
          }
          else {
            iVar5 = *(int *)(iVar5 + 4);
          }
          (**(code **)(*piVar1 + 0x5c))(iVar5,0);
          FUN_00084d50();
          uVar8 = 1;
        }
      }
    }
  }
  if (uStack_c < 8) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(pppuStack_20);
}
