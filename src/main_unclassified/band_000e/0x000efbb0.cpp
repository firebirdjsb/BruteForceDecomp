/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5A03021F97B9EFAABEBD76E6E57D47F67B940F3D88B33B4866F2F1793330E64
 * Entry: 0x000efbb0, Ghidra index: 2986, label: FUN_000efbb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined1 FUN_000efbb0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_ESI;
  undefined1 uVar4;
  int *piStack_10;
  int *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar4 = (undefined1)((uint)unaff_EBX >> 0x18);
  local_c = (int *)0x0;
  local_8 = 0;
  local_4 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  (**(code **)(*piVar2 + 100))(&piStack_10);
  piVar2 = piStack_10;
  do {
    if (piVar2 == local_c) {
LAB_000efc05:
      iVar1 = *(int *)(unaff_ESI + 4);
      if (iVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar1 + 4);
      }
      if (*(int *)(unaff_ESI + 0x24) == 0x1ca7cb7b) {
        iVar1 = iVar3;
      }
      if (iVar1 == 0) {
        uVar4 = 1;
      }
LAB_000efc29:
      if (piStack_10 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00237ec0(piStack_10);
      }
      return uVar4;
    }
    if (*piVar2 == -0x8ba06b6) {
      if (piVar2 != local_c) goto LAB_000efc29;
      goto LAB_000efc05;
    }
    piVar2 = piVar2 + 1;
  } while( true );
}
