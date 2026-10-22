/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CF6FB0F69A0F62E6849AA42C0C68502351D951B6CF2495C9C48CCDBE99EC8DF7
 * Entry: 0x00374895, Ghidra index: 13433, label: FUN_00374895
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00400100;
void FUN_00374895(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *in_EAX;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_8;
  
  iVar8 = 0;
  iVar2 = *in_EAX;
  if (in_EAX[0x207] != 0) {
    *(undefined4 *)(iVar2 + 0x9140) = 0;
    in_EAX[0x207] = 0;
  }
  iVar6 = AvGetSavedDataAddress();
  if (iVar6 == 0) {
    AvSendTVEncoderOption(iVar2,9,1,0);
  }
  do {
    FUN_00374c34(in_EAX,1);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 8);
  *(undefined4 *)(iVar2 + 0x2044) = 0;
  while ((((*(byte *)(iVar2 + 0x3214) & 0x10) == 0 || ((*(byte *)(iVar2 + 0x2400) & 0x10) == 0)) ||
         ((*(byte *)(iVar2 + 0x3220) & 0x10) != 0))) {
    FUN_00377d70(in_EAX);
    if (*(int *)(&DAT_00400100 + iVar2) != 0) {
      FUN_00377cb0();
    }
    if ((*(uint *)(iVar2 + 0x100) & 0x1000000) != 0) {
      FUN_00377a50();
    }
  }
  pbVar1 = (byte *)(iVar2 + 0x3220);
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  do {
  } while ((*pbVar1 & 0x10) != 0);
  *(undefined4 *)(iVar2 + 0x2500) = 0;
  *(undefined4 *)(iVar2 + 0x3000) = 0;
  *(undefined4 *)(iVar2 + 0x3050) = 0;
  *(undefined4 *)(iVar2 + 0x3200) = 0;
  *(undefined4 *)(iVar2 + 0x3250) = 0;
  FUN_003795d3(1);
  *(undefined4 *)(iVar2 + 0x3210) = 0;
  *(undefined4 *)(iVar2 + 0x3270) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x2500);
  uVar4 = *(undefined4 *)(iVar2 + 0x3200);
  uVar5 = *(undefined4 *)(iVar2 + 0x3250);
  *(undefined4 *)(iVar2 + 0x2500) = 0;
  *(undefined4 *)(iVar2 + 0x3200) = 0;
  *(undefined4 *)(iVar2 + 0x3250) = 0;
  local_8 = 0;
  do {
    if (in_EAX[0x42] != 0) {
      puVar7 = (undefined4 *)(local_8 + iVar2 + in_EAX[0x4a]);
      puVar7[1] = *puVar7;
      *(undefined4 *)(local_8 + iVar2 + 0x10 + in_EAX[0x4a]) = 0;
    }
    local_8 = local_8 + 0x40;
  } while (local_8 < 0x80);
  *(undefined4 *)(iVar2 + 0x3250) = uVar5;
  *(undefined4 *)(iVar2 + 0x3200) = uVar4;
  *(undefined4 *)(iVar2 + 0x2500) = uVar3;
  *(undefined4 *)(iVar2 + 0x2508) = 0;
  *(undefined4 *)(iVar2 + 0x2140) = 0;
  FUN_003793f4(2);
  *(int *)(iVar2 + 0x100200) = in_EAX[0x53];
  *(int *)(iVar2 + 0x100204) = in_EAX[0x54];
  *(int *)(iVar2 + 0x200) = in_EAX[0x55];
  *(int *)(iVar2 + 0x140) = in_EAX[0x56];
  HalRegisterShutdownNotification(in_EAX + 0x59,0);
  KeDisconnectInterrupt(in_EAX + 5);
  return;
}
