/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00137D90084BBBB94E58808F3B08227EF0EB3786A1537388BAB5ABBE19C60BFF
 * Entry: 0x00311ff9, Ghidra index: 11931, label: CDirectSoundBuffer_Play
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSoundBuffer_Play(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000010;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    uVar2 = CMcpxBuffer_Play(in_stack_00000010);
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
