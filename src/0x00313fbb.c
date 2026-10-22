/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49EF9483C660ADAA28385ECC567EF07FFE000476141AFFD8A2BB3A60FF5940B7
 * Entry: 0x00313fbb, Ghidra index: 12044, label: CDirectSoundBuffer_SetBufferData
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__CDirectSoundBuffer_SetBufferData(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar3 = 0;
  if ((param_2 != 0) || (param_2 = 0, param_3 != 0)) {
    param_2 = 1;
  }
  cVar2 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    if ((((iVar1 != *(int *)(*(int *)(param_1 + 0x1c) + 0xb8)) ||
         (param_3 != *(int *)(*(int *)(param_1 + 0x1c) + 0xbc))) &&
        (iVar3 = FUN_003199cc(param_2), -1 < iVar3)) &&
       ((iVar3 = CDirectSoundBufferSettings_SetBufferData(iVar1,param_3), -1 < iVar3 &&
        (param_2 != 0)))) {
      iVar3 = CMcpxBuffer_SetBufferData();
    }
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    iVar3 = -0x7fffbffb;
  }
  return iVar3;
}
