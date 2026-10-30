/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E528BF245A123BED89FA75918564B3194BAB7AA7A4679CAC77E141AFA49E5F10
 * Entry: 0x0031351d, Ghidra index: 12008, label: CDirectSoundBuffer_SetVelocity
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4
DSOUND__CDirectSoundBuffer_SetVelocity
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    uVar2 = CDirectSoundVoice_SetVelocity(param_1,param_2,param_3,param_4,param_5);
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
