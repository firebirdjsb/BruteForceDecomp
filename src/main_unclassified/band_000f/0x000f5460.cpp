/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E4C5AB5994FA26CA6FB5A9C69675CB8F288E76CDA36D1B7164E6D7A6EB2C37C
 * Entry: 0x000f5460, Ghidra index: 3073, label: FUN_000f5460
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
void FUN_000f5460(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_224 [540];
  uint local_8;
  
  cVar1 = FUN_001ed100(local_224);
  if ((((cVar1 != '\0') && (1 < ((local_8 & 4) >> 2) + ((local_8 & 2) >> 1) + 1 + (local_8 & 1))) &&
      (*(int *)(DAT_0046995c + 0x1c) != 0)) &&
     (((cVar1 = FUN_002e5880(), cVar1 == '\0' &&
       (iVar2 = FUN_002e5bf0(0), 0 < *(int *)(iVar2 + 0x2c))) &&
      ((*(int *)(DAT_0046995c + 0x1c) == 2 && (*(char *)(DAT_0046995c + 0x2e25) != '\0')))))) {
    piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    (**(code **)(*piVar3 + 4))(param_2);
  }
  return;
}
