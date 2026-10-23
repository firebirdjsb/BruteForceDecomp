/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 376FAD920267879374BF897694C0488AB841086AD81604C415D7C2E6524CF236
 * Entry: 0x0029eda0, Ghidra index: 9482, label: FUN_0029eda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9350;
extern uint32_t PTR_LAB_003a3750;
undefined4 FUN_0029eda0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_003b9350;
  puVar3 = (undefined4 *)(param_1 + 0xc);
  do {
    (**(code **)(*(int *)*puVar3 + 0xc))((int *)*puVar3);
    uVar1 = *puVar4;
    piVar2 = (int *)FUN_002ea01d(0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 0x3f800000;
      piVar2[2] = 0;
      *piVar2 = (int)&PTR_LAB_003a3750;
      piVar2[3] = 1;
    }
    (**(code **)(*piVar2 + 0x18))(piVar2,uVar1);
    (**(code **)(*(int *)*puVar3 + 0x14))((int *)*puVar3,0,piVar2);
    (**(code **)(*piVar2 + 8))(piVar2);
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
  } while ((int)puVar4 < 0x3b9374);
  *(undefined4 *)(param_1 + 8) = 0x1ff;
  return 0;
}
