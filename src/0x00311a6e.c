/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BFA72D492E83E18E06971BED525EFF259C8165A86FDE621D23509B4E90D05643
 * Entry: 0x00311a6e, Ghidra index: 11911, label: DirectSoundUseFullHRTF
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7a4;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
void DSOUND__DirectSoundUseFullHRTF(void)

{
  char cVar1;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (2 < DAT_0032f7a4) {
    CHrtfSource_SetAlgorithm_FullHrtf();
  }
  if (cVar1 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return;
}
