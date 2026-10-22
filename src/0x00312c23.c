/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF602E5C748E3891B868F4FD916248A40FABAD150291C87CF1E92E6607C57047
 * Entry: 0x00312c23, Ghidra index: 11978, label: DirectSoundDoWork
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe68;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
void DSOUND__DirectSoundDoWork(void)

{
  char cVar1;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032fe68 != 0) {
    CDirectSound_DoWork(DAT_0032fe68);
  }
  if (cVar1 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return;
}
