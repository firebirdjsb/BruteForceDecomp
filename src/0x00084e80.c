/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30A399C69E00F6C84E406D979C85F5CF9D8EA8B091A8F9345BDF6F6A8FA8AEB1
 * Entry: 0x00084e80, Ghidra index: 1547, label: FUN_00084e80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
extern uint32_t DAT_00469b58;
void FUN_00084e80(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  byte abStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  piVar1 = *(int **)(DAT_00469b58 + 8);
  (**(code **)(*DAT_00469940 + 0x6c))(1);
  (**(code **)(*DAT_00469940 + 8))();
  (**(code **)(*piVar2 + 0x1c))();
  (**(code **)(*piVar1 + 0x200))(1);
  abStack_1c[0] = abStack_1c[0] & 0xe2 | 2;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  iVar3 = (**(code **)(*piVar1 + 0x6c))();
  if (iVar3 != 0) {
    (**(code **)(*piVar1 + 0x60))();
    iVar3 = FUN_00234c90();
    if (iVar3 != 0) goto LAB_00084f0e;
  }
  abStack_1c[0] = abStack_1c[0] | 4;
LAB_00084f0e:
  (**(code **)(*piVar1 + 0x30))(abStack_1c);
  FUN_00069780(0x3f800000);
  return;
}
