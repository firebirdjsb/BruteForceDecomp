/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 30A884C640C77DBF3C6E6617B401D60B92025180233C0781D82B65FE6F7A21A6
 * Entry: 0x00374340, Ghidra index: 13422, label: CMiniport_InitHardware
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool D3D8LTCG__CMiniport_InitHardware(void)

{
  char cVar1;
  undefined1 uVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 local_14 [4];
  int local_10;
  undefined1 local_c [3];
  byte local_9;
  int local_8;
  
  KeInitializeDpc(in_EAX + 0x84,FUN_003778b0);
  *(undefined1 *)(in_EAX + 0x1a4) = 0;
  *(undefined1 *)(in_EAX + 0x194) = 0;
  iVar3 = in_EAX + 0x1ac;
  *(int *)(in_EAX + 0x1b0) = iVar3;
  *(int *)iVar3 = iVar3;
  iVar3 = in_EAX + 0x19c;
  *(int *)(in_EAX + 0x1a0) = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined1 *)(in_EAX + 0x1a6) = 4;
  *(undefined4 *)(in_EAX + 0x1a8) = 1;
  *(undefined1 *)(in_EAX + 0x196) = 4;
  *(undefined4 *)(in_EAX + 0x198) = 1;
  iVar3 = FUN_003744a0();
  if ((iVar3 != 0) && (iVar3 = FUN_003744cb(), iVar3 != 0)) {
    HalGetInterruptVector(3,local_14);
    KeInitializeInterrupt(in_EAX + 0x14,FUN_00377790);
    cVar1 = KeConnectInterrupt(in_EAX + 0x14);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_EAX + 0x168) = 0;
      *(undefined4 *)(in_EAX + 0x164) = &LAB_00378210;
      HalRegisterShutdownNotification((undefined4 *)(in_EAX + 0x164),1);
      iVar3 = FUN_0037450e();
      if (iVar3 != 0) {
        local_8 = in_EAX + 0x2dc;
        local_10 = 2;
        do {
          uVar4 = 0;
          do {
            puVar5 = (undefined1 *)(local_8 + uVar4);
            uVar2 = (undefined1)uVar4;
            puVar5[-0x100] = uVar2;
            *puVar5 = uVar2;
            puVar5[0x100] = uVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < 0x100);
          local_8 = local_8 + 0x300;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        out(0x80c0,1);
        HalReadWritePCISpace(1,0,0x4c,local_c,4,0);
        local_9 = local_9 | 0x1f;
        HalReadWritePCISpace(1,0,0x4c,local_c,4,1);
        *(undefined4 *)(in_EAX + 0xa0) = 1;
        iVar3 = FUN_0037458f();
        return iVar3 != 0;
      }
    }
  }
  return false;
}
