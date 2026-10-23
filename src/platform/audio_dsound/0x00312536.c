/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 37D21C994F6EE28B3DD0B11C936DAA19A26810797424E0AADFC143FBB8F6B723
 * Entry: 0x00312536, Ghidra index: 11940, label: CDirectSoundStream_Process
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__CDirectSoundStream_Process(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint local_8;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    iVar2 = CMcpxStream_GetStatus(&local_8);
    if (-1 < iVar2) {
      if ((local_8 & 1) == 0) {
        iVar2 = -0x7787ffce;
      }
      if (-1 < iVar2) {
        iVar2 = FUN_00317292(param_2);
      }
    }
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    iVar2 = -0x7fffbffb;
  }
  return iVar2;
}
