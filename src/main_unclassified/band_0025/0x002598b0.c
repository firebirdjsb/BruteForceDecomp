/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 80C6343FA82149CAF57599B538E811078EC4B7270A0F8CDC387CF8EE767AA4D4
 * Entry: 0x002598b0, Ghidra index: 8507, label: FUN_002598b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003934c8;
undefined4 FUN_002598b0(undefined2 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 *in_EAX;
  int *piVar2;
  undefined4 uVar3;
  int local_14;
  char local_10;
  undefined4 local_c;
  undefined1 *local_8;
  int *local_4;
  
  if (in_EAX == (undefined1 *)0x0) {
    in_EAX = (uintptr_t)0x00259850U;
  }
  local_c = param_2;
  local_4 = (int *)0x0;
  local_8 = in_EAX;
  FUN_0025a2d0(&local_c);
  if (local_4 != (int *)0x0) {
    (**(code **)(*local_4 + 8))(local_4);
  }
  if (local_10 != '\x01') {
    return 0x80004005;
  }
  piVar2 = (int *)FUN_002ea01d(0x20);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_0025a860();
    *piVar2 = (int)&PTR_LAB_003934c8;
    *(undefined2 *)((int)piVar2 + 0x1e) = 1;
  }
  piVar1 = *(int **)(local_14 + 0x14);
  if (piVar1 != piVar2) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(local_14 + 0x14) = 0;
    }
    *(int **)(local_14 + 0x14) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  (**(code **)(**(int **)(local_14 + 0x14) + 8))(*(int **)(local_14 + 0x14));
  uVar3 = FUN_002383b0();
  *(undefined4 *)(*(int *)(local_14 + 0x14) + 4) = uVar3;
  *(undefined2 *)(*(int *)(local_14 + 0x14) + 0x1c) = param_1;
  return 0;
}
