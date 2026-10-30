/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 633387AD64E9FB04AEFBB3B697A9EB1B9CBA659B76F382C6D85A08774BE245AE
 * Entry: 0x00311c2a, Ghidra index: 11918, label: CDirectSound_DoWork
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
void DSOUND__CDirectSound_DoWork(void)

{
  char cVar1;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    CMcpxAPU_ServiceDeferredCommandsLow();
  }
  if (cVar1 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return;
}
