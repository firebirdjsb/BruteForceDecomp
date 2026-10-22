/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1911C5B50DD1F8A3BEBEC80705D84A825C599E78C7448BA37316D07C8BF8FB87
 * Entry: 0x003121e9, Ghidra index: 11937, label: CDirectSoundBuffer_Lock
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
int DSOUND__CDirectSoundBuffer_Lock
              (int param_1,int param_2,uint param_3,int *param_4,uint *param_5,undefined4 *param_6,
              int *param_7,byte param_8)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_8;
  
  local_8 = 0;
  cVar1 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    if (((param_8 & 1) == 0) ||
       (local_8 = CDirectSoundBuffer_GetCurrentPosition(param_1,0,&param_2), -1 < local_8)) {
      uVar2 = param_3;
      if ((param_8 & 2) != 0) {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 0xbc);
      }
      *param_4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xb8) + param_2;
      uVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xbc) - param_2;
      uVar4 = uVar2;
      if (uVar3 <= uVar2) {
        uVar4 = uVar3;
      }
      *param_5 = uVar4;
      if ((param_6 != (undefined4 *)0x0) && (param_7 != (int *)0x0)) {
        if (uVar4 < uVar2) {
          *param_6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xb8);
          *param_7 = uVar2 - *param_5;
        }
        else {
          *param_6 = 0;
          *param_7 = 0;
        }
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
    local_8 = -0x7fffbffb;
  }
  return local_8;
}
