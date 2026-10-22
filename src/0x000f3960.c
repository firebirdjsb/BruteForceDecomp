/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2A16CF891BEDF05392429991ECA90E2587F73C74C4C2511C9C1E6BB6B790979E
 * Entry: 0x000f3960, Ghidra index: 3044, label: FUN_000f3960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003c0658;
extern uint32_t DAT_00469b58;
undefined4 FUN_000f3960(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_000f2330();
  if (iVar1 == 0) {
    iVar2 = FUN_00100fc0();
    iVar1 = *(int *)(in_EAX + 0x60);
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 0x20))();
    if ((iVar2 != 4) && (iVar1 != DAT_003c0658)) {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar3 + 0x70))(iVar2);
      DAT_003c0658 = iVar1;
    }
    return 1;
  }
  return 0;
}
