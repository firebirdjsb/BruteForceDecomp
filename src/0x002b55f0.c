/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B324926B59AFE30F9D1E07560E23EF6A5CDDF8756D35E32E34231E5FA373171A
 * Entry: 0x002b55f0, Ghidra index: 9798, label: FUN_002b55f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc654;
void FUN_002b55f0(void)

{
  int iVar1;
  float fVar2;
  int in_EAX;
  undefined2 local_c24;
  undefined2 local_c22;
  undefined1 *local_c20;
  short local_c1c;
  undefined1 local_c18 [2052];
  undefined2 local_414;
  undefined2 local_412;
  undefined1 *local_410;
  short local_40c;
  undefined1 local_408 [1028];
  
  iVar1 = *(int *)(in_EAX + 0x24);
  fVar2 = *(float *)(in_EAX + 0xb8) * *(float *)(iVar1 + 0x10);
  *(float *)(iVar1 + 0x14) = fVar2 * fVar2;
  *(float *)(iVar1 + 0x18) = *(float *)(iVar1 + 8) * *(float *)(iVar1 + 8);
  (**(code **)**(undefined4 **)(in_EAX + 0x28))();
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(1);
  *(undefined4 *)(in_EAX + 300) = 0;
  if (*(short *)(in_EAX + 0xea) != 0) {
    FUN_002bd510();
  }
  if (*(int *)(in_EAX + 0x2c) != 0) {
    FUN_002bcda0(*(undefined4 *)(in_EAX + 0xc),*(int *)(in_EAX + 0x2c));
  }
  (**(code **)(**(int **)(in_EAX + 0xa0) + 0x28))();
  FUN_002b55c0();
  FUN_002c0150();
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(2);
  local_c20 = local_c18;
  local_c24 = 0x200;
  local_c22 = 0;
  local_c1c = 0;
  FUN_002be810(*(undefined4 *)(in_EAX + 8),&local_c24);
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(3);
  local_410 = local_408;
  local_412 = 0;
  local_40c = 0;
  local_414 = 0x100;
  FUN_002c6dc0();
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(4);
  *(undefined4 *)(in_EAX + 300) = 2;
  FUN_002c6e80();
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(5);
  *(undefined4 *)(in_EAX + 300) = 3;
  FUN_002c01f0();
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(6);
  *(undefined4 *)(in_EAX + 300) = 4;
  FUN_002c0120();
  (**(code **)(**(int **)(in_EAX + 0x28) + 4))(7);
  (**(code **)(**(int **)(in_EAX + 0x28) + 8))();
  *(undefined4 *)(in_EAX + 300) = 5;
  if (local_40c != 0) {
    if (local_410 != (undefined1 *)0x0) {
      (*(code *)PTR_FUN_003bc654)(local_410);
      return;
    }
    local_414 = 0;
    local_40c = 0;
  }
  local_412 = 0;
  if ((local_c1c != 0) && (local_c20 != (undefined1 *)0x0)) {
    (*(code *)PTR_FUN_003bc654)(local_c20);
    return;
  }
  return;
}
