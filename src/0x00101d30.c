/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96EDDB7CD12598D0C908FB88B811E992E9F33C0031A5B6C25898BB9A30771213
 * Entry: 0x00101d30, Ghidra index: 3255, label: FUN_00101d30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_00101d30(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 uVar6;
  undefined4 uStack_40;
  undefined4 auStack_3c [2];
  undefined4 uStack_30;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined2 local_18;
  uint uStack_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 7;
  local_8 = 0;
  local_18 = 0;
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x1a0))(local_1c);
  if (cVar1 == '\0') {
    uStack_40 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar5 = *piVar3;
    uVar4 = FUN_001e97c0();
    uVar4 = FUN_001e97c0(uVar4);
    (**(code **)(iVar5 + 0x34))(&uStack_40,uVar4);
    uVar6 = (undefined1)((uint)unaff_EDI >> 0x18);
  }
  else {
    auStack_3c[0] = 0;
    puVar2 = auStack_3c;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_3c[1] = *(undefined4 *)(unaff_ESI + 0x60);
    uStack_30 = 0xcc83d9b;
    puVar2 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar5 = (**(code **)*puVar2)(auStack_3c);
    uVar6 = iVar5 != 0;
  }
  if (7 < uStack_c) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_20);
  }
  return uVar6;
}
