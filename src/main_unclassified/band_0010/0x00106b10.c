/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FFB61C39FA9C6964BC5E306E45AF76F4FEB014CCFA58675C9E499C76FB1F01BA
 * Entry: 0x00106b10, Ghidra index: 3361, label: FUN_00106b10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t DAT_00469b58;
char FUN_00106b10(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  iVar1 = *(int *)(iVar1 + 0x54);
  iVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x234))();
  if (iVar2 < iVar1) {
    return '\0';
  }
  return (iVar1 < iVar2) + '\x01';
}
