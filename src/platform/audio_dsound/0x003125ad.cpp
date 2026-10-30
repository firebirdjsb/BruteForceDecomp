/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C5E7EB3B69D2ECA463C640FCA7ACB508E68050FE859FCD58D07C52030B164F6
 * Entry: 0x003125ad, Ghidra index: 11941, label: CDirectSoundStream_Pause
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSoundStream_Pause(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    uVar2 = CMcpxStream_Pause(param_2);
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    uVar2 = 0x80004005;
  }
  return uVar2;
}
