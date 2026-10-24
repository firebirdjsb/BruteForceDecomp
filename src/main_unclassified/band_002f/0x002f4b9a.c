/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5947FFDAEC37EC3F46B433381882531242795DE3DA272757C7A6DC10C2CF9A7
 * Entry: 0x002f4b9a, Ghidra index: 10873, label: XapiCallThreadNotifyRoutines
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00040000_1_003b76d0;
void XAPILIB__XapiCallThreadNotifyRoutines(undefined4 param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  RtlEnterCriticalSection(&PTR_LAB_00040000_1_003b76d0);
  ppuVar2 = (undefined **)(uintptr_t)*(uint32_t *)(uintptr_t)UINT32_C(0x003b76ec);
  while (ppuVar2 != (undefined **)(uintptr_t)UINT32_C(0x003b76ec)) {
    ppuVar1 = (undefined **)*ppuVar2;
    (*(code *)ppuVar2[2])(param_1);
    ppuVar2 = ppuVar1;
  }
  RtlLeaveCriticalSection(&PTR_LAB_00040000_1_003b76d0);
  return;
}
