/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB95C90C23749E40623E0DE12762AF358BAB08BE524B57570E8739B04A684C99
 * Entry: 0x003125fe, Ghidra index: 11942, label: CDirectSoundStream_FlushEx
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
DSOUND__CDirectSoundStream_FlushEx
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    if (param_4 == 0) {
      CMcpxStream_Flush(0);
      uVar2 = 0;
    }
    else {
      uVar2 = CMcpxStream_Stop_Ex(param_2,param_3,param_4);
    }
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
