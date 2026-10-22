/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D3512486EB204ED61B0527437433337C63A01D58DFE6A0897AA208AC824716C9
 * Entry: 0x000d4590, Ghidra index: 2654, label: FUN_000d4590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
int FUN_000d4590(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*DAT_00469b54 + 0x48))();
  iVar2 = *(int *)(iVar1 + 0xe0);
  if (iVar2 != *(int *)(iVar1 + 0xe4)) {
    do {
      if (*(int *)(iVar2 + 0x20) == *param_1) {
        return iVar2;
      }
      iVar2 = iVar2 + 0x3c;
    } while (iVar2 != *(int *)(iVar1 + 0xe4));
  }
  return 0;
}
