/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 84AA9B31A3F9BC8320AD12C08FDB93FD4B5B270C5D748163FE5E00E31C4DCD42
 * Entry: 0x0017b600, Ghidra index: 5031, label: FUN_0017b600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400390;
extern uint32_t *DAT_00469908;
undefined4 FUN_0017b600(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 ****ppppuVar4;
  char *in_EDX;
  undefined4 unaff_EBX;
  int *unaff_EDI;
  int **ppiVar5;
  int *local_40;
  int *local_3c [2];
  undefined4 ***local_34;
  uint uStack_30;
  undefined4 local_24;
  uint local_20;
  uint local_18;
  undefined4 local_8;
  uint local_4;
  
  local_20 = 0xf;
  local_4 = 0xf;
  local_24 = 0;
  local_34 = (undefined4 ***)((uint)local_34 & 0xffffff00);
  local_8 = 0;
  local_18 = local_18 & 0xffffff00;
  pcVar2 = in_EDX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0001fed0(in_EDX,(int)pcVar2 - (int)(in_EDX + 1));
  FUN_0001f4f0(&DAT_00400390,0,0xffffffff);
  FUN_001e8a20();
  FUN_000784c0(0);
  FUN_000784c0(0);
  if (0xf < local_4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(local_18);
  }
  local_40 = (int *)0x0;
  local_3c[0] = (int *)0x0;
  iVar3 = FUN_001a2df0(local_3c);
  if (iVar3 == 0) {
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 8))(local_40);
      local_40 = (int *)0x0;
    }
    ppppuVar4 = (undefined4 ****)local_34;
    if (local_20 < 0x10) {
      ppppuVar4 = &local_34;
    }
    ppiVar5 = &local_40;
    iVar3 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,ppppuVar4,0x80000000);
    if (iVar3 < 0) {
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      if (ppiVar5 != (int **)0x0) {
        (*(code *)(*ppiVar5)[2])(ppiVar5);
      }
      if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(unaff_EBX);
      }
    }
    else {
      iVar3 = FUN_0023a790(0xb8c74e0,1);
      if (iVar3 != 0) {
        if (unaff_EDI != (int *)0x0) {
          (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        }
        if (ppiVar5 != (int **)0x0) {
          (*(code *)(*ppiVar5)[2])(ppiVar5);
        }
        FUN_000519c0();
        return 1;
      }
      if (unaff_EDI != (int *)0x0) {
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      }
      if (ppiVar5 != (int **)0x0) {
        (*(code *)(*ppiVar5)[2])(ppiVar5);
      }
      FUN_000519c0();
    }
  }
  else {
    if (local_3c[0] != (int *)0x0) {
      (**(code **)(*local_3c[0] + 8))(local_3c[0]);
    }
    if (local_40 != (int *)0x0) {
      (**(code **)(*local_40 + 8))(local_40);
      local_40 = (int *)0x0;
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(local_34);
    }
  }
  return 0;
}
