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
void XAPILIB__XapiCallThreadNotifyRoutines(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined4 unaff_retaddr;
  
  RtlEnterCriticalSection(&PTR_LAB_00040000_1_003b76d0);
  ppuVar2 = (undefined **)XapiThreadNotifyRoutineList;
  while (ppuVar2 != &XapiThreadNotifyRoutineList) {
    ppuVar1 = (undefined **)*ppuVar2;
    (*(code *)ppuVar2[2])(unaff_retaddr);
    ppuVar2 = ppuVar1;
  }
  RtlLeaveCriticalSection(&PTR_LAB_00040000_1_003b76d0);
  return;
}
