/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B572C9EF1073297C4053A35D5880757F3E9425510DB17B3D50B14188FAC6E8CA
 * Entry: 0x00313d42, Ghidra index: 12040, label: CDirectSound_SetI3DL2Listener
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7dc;
extern uint32_t PTR_LAB_00040000_1_0032f7e8;
undefined4 DSOUND__CDirectSound_SetI3DL2Listener(int param_1,undefined4 *param_2,byte param_3)

{
  byte *pbVar1;
  char cVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  cVar2 = DirectSoundEnterCriticalSection();
  if (DAT_0032f7dc == 0) {
    if (*(int *)(*(int *)(param_1 + 8) + 0xc) == -1) {
      uVar3 = 0x88780032;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x74) = *param_2;
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x78) = param_2[1];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x7c) = param_2[2];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x80) = param_2[3];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x84) = param_2[4];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x88) = param_2[5];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x8c) = param_2[6];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x90) = param_2[7];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x94) = param_2[8];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x98) = param_2[9];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0x9c) = param_2[10];
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xa0) = param_2[0xb];
      pbVar1 = (byte *)(*(int *)(param_1 + 8) + 0xa5);
      *pbVar1 = *pbVar1 | 3;
      if ((param_3 & 1) == 0) {
        CDirectSound_CommitDeferredSettings(param_1);
      }
    }
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
  }
  else {
    if (cVar2 != '\0') {
      RtlLeaveCriticalSection(&PTR_LAB_00040000_1_0032f7e8);
    }
    uVar3 = 0x80004005;
  }
  return uVar3;
}
