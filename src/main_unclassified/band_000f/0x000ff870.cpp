/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C412C5088D6C38482655E3BB14696772EE265F4B8244CD7772EE518A48ADD58
 * Entry: 0x000ff870, Ghidra index: 3198, label: FUN_000ff870
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
extern uint32_t PTR_FUN_0039e3d8;
extern uint32_t PTR_LAB_0039e5c8;
void FUN_000ff870(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_EAX;
  int iVar4;
  int iVar5;
  
  *in_EAX = PTR_FUN_0039e3d8;
  if (in_EAX[0x1d] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (int)(in_EAX[0x1e] - in_EAX[0x1d]) >> 2;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    do {
      puVar3 = *(undefined4 **)(in_EAX[0x1d] + iVar4 * 4);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  iVar5 = in_EAX[0x28];
  if (iVar5 != 0) {
    piVar1 = (int *)(DAT_00469948 + 4);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_001e7880();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar5);
  }
  piVar1 = (int *)in_EAX[0x29];
  if (piVar1 != (int *)0x0) {
    iVar5 = *piVar1;
    if ((0 < iVar5) && (iVar5 < 9)) {
      piVar2 = (int *)(DAT_00469948 + 0x10 + iVar5 * 4);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FUN_001e7880();
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(piVar1);
  }
  FUN_0008f720();
  if (in_EAX[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x1b]);
  }
  if (in_EAX[0x1d] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x1d]);
  }
  in_EAX[0x1d] = 0;
  in_EAX[0x1e] = 0;
  in_EAX[0x1f] = 0;
  *in_EAX = &PTR_LAB_0039e5c8;
  FUN_000ef7f0();
  if (in_EAX[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_EAX[0x15]);
  }
  in_EAX[0x15] = 0;
  in_EAX[0x16] = 0;
  in_EAX[0x17] = 0;
  return;
}
