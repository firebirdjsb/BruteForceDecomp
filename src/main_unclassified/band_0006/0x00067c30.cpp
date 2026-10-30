/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FB0DCE788D03667919663F74005DE6C8653DD3ABC4D5B5AE15FE7F4CDBAA1FD
 * Entry: 0x00067c30, Ghidra index: 1141, label: FUN_00067c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
extern uint32_t PTR_FUN_003bc658;
undefined4 FUN_00067c30(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar6 = param_2;
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = (*(code *)PTR_FUN_003bc650)(param_2);
    return uVar2;
  }
  if (param_2 == 0) {
    uVar2 = (*(code *)PTR_FUN_003bc654)(param_1);
    return uVar2;
  }
  puVar3 = (undefined4 *)(*(code *)PTR_FUN_003bc650)(param_2);
  if (puVar3 != (undefined4 *)0x0) {
    param_1 = (undefined4 *)(*(code *)PTR_FUN_003bc658)(puVar1);
    puVar4 = &param_2;
    if (param_1 <= uVar6) {
      puVar4 = (uint *)&param_1;
    }
    uVar6 = *puVar4;
    puVar7 = puVar1;
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    uVar2 = (*(code *)PTR_FUN_003bc654)(puVar1);
    return uVar2;
  }
  return 0;
}
