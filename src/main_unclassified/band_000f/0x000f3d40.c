/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 475CCAF010ACD1218644A0780D8DC92EEE083AEAA0A3D49F4EB14557191C4B1D
 * Entry: 0x000f3d40, Ghidra index: 3051, label: FUN_000f3d40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000f3d40(void)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_ESI;
  undefined1 uStack_51;
  undefined4 uStack_44;
  undefined4 auStack_40 [2];
  undefined4 uStack_34;
  undefined4 uStack_24;
  undefined1 local_1c [4];
  undefined2 local_18;
  uint uStack_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 7;
  local_8 = 0;
  local_18 = 0;
  cVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x19c))(0);
  if (cVar1 == '\0') {
    uStack_44 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar5 = *piVar3;
    uVar4 = FUN_001e97c0();
    uVar4 = FUN_001e97c0(uVar4);
    (**(code **)(iVar5 + 0x34))(&uStack_44,uVar4);
    uStack_51 = (undefined1)((uint)local_1c >> 0x18);
  }
  else {
    uVar4 = *(undefined4 *)(unaff_ESI + 0x98);
    puVar2 = auStack_40;
    for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_40[1] = *(undefined4 *)(unaff_ESI + 0x60);
    auStack_40[0] = 0xe37b5c35;
    uStack_34 = uVar4;
    puVar2 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    iVar5 = (**(code **)*puVar2)(auStack_40);
    uStack_51 = iVar5 != 0;
  }
  if (7 < uStack_10) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(uStack_24);
  }
  return uStack_51;
}
