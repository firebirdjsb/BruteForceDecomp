/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0C4237527C5A45D475CB9F499E9A45906E42C8DD8E0D73F7A36A92D646C2516B
 * Entry: 0x0031322b, Ghidra index: 11999, label: CDirectSoundBuffer_SetPlayRegion
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSoundBuffer_SetPlayRegion(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc != 0) {
    if (cVar1 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    return 0x80004005;
  }
  if (param_3 == 0) {
    param_3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xbc) - param_2;
  }
  else if (*(uint *)(*(int *)(param_1 + 0x1c) + 0xbc) < (uint)(param_2 + param_3)) {
    uVar2 = 0x88780032;
    goto LAB_00313294;
  }
  FUN_003131d4(param_2,param_3);
  uVar2 = FUN_00319687();
LAB_00313294:
  if (cVar1 != '\0') {
    RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
  }
  return uVar2;
}
