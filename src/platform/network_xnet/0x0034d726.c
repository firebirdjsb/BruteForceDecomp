/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 069AF2DCF7328E19D49ECBCB28F9B8180B38888976EA4553D6EC2CD0DCF91D50
 * Entry: 0x0034d726, Ghidra index: 13007, label: FUN_0034d726
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040f5d8;
extern uint32_t UNK_00300010;
extern uint32_t UNK_003b0f3e;
extern uint32_t _DAT_fef00004;
extern uint32_t _DAT_fef00080;
extern uint32_t _DAT_fef0008c;
extern uint32_t _DAT_fef00090;
extern uint32_t _DAT_fef0009c;
extern uint32_t _DAT_fef000a0;
extern uint32_t _DAT_fef000a4;
extern uint32_t _DAT_fef000a8;
extern uint32_t _DAT_fef000ac;
extern uint32_t _DAT_fef000b0;
extern uint32_t _DAT_fef000b4;
extern uint32_t _DAT_fef000b8;
extern uint32_t _DAT_fef000bc;
extern uint32_t _DAT_fef00100;
extern uint32_t _DAT_fef00104;
extern uint32_t _DAT_fef00108;
extern uint32_t _DAT_fef0013c;
extern uint32_t _DAT_fef00140;
extern uint32_t _DAT_fef00184;
extern uint32_t _DAT_fef00188;
extern uint32_t _DAT_fef0018c;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0034d726(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int unaff_FS_OFFSET;
  undefined4 uVar6;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  int local_c;
  byte local_6;
  byte local_5;
  
  iVar2 = FUN_0034cca3(param_1);
  if (iVar2 < 0) {
    return iVar2;
  }
  *(undefined1 **)(local_c + 0x250) = &LAB_0034d60b;
  *(undefined4 *)(local_c + 0x260) = *(undefined4 *)(*(int *)(unaff_FS_OFFSET + 0x20) + 0x24c);
  if (*(int *)(local_c + 0x260) == 0) {
    FUN_00352ebc(0x400);
    uVar6 = HalGetInterruptVector(4,local_c + 0x20c);
    *(undefined4 *)(local_c + 0x208) = uVar6;
    KeInitializeDpc(local_c + 0x1ec,&LAB_0034d71a,local_c);
    KeInitializeInterrupt
              (&DAT_0040f5d8,&LAB_0034d084,local_c,*(undefined4 *)(local_c + 0x208),
               *(undefined1 *)(local_c + 0x20c),0,1);
    FUN_0034ced7();
    *(uint *)(local_c + 0x240) = (uint)*(byte *)(local_c + 7);
    if (0x100 < *(uint *)(local_c + 0x240)) {
      *(uint *)(local_c + 0x240) = 0x100;
    }
    *(uint *)(local_c + 0x224) = *(byte *)(local_c + 0x10) + 1;
    if (0x100 < *(uint *)(local_c + 0x224)) {
      *(uint *)(local_c + 0x224) = 0x100;
    }
    puVar3 = (undefined4 *)
             MmAllocateContiguousMemoryEx((*(int *)(local_c + 0x240) + 2) * 0x800,0,0xffffffff,0,4);
    if (puVar3 == (undefined4 *)0x0) {
      return -0x7ff8d8b9;
    }
    puVar5 = puVar3;
    for (iVar2 = 0x400; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    iVar2 = MmGetPhysicalAddress(puVar3);
    *(int *)(local_c + 0x21c) = iVar2 - (int)puVar3;
    *(undefined4 **)(local_c + 0x228) = puVar3;
    *(undefined4 **)(local_c + 0x230) = puVar3;
    *(undefined4 **)(local_c + 0x234) = puVar3;
    *(undefined4 **)(local_c + 0x22c) = puVar3 + *(int *)(local_c + 0x224) * 2 + -2;
    *(int *)(local_c + 0x224) = *(int *)(local_c + 0x224) + -1;
    piVar4 = puVar3 + 0x200;
    *(int **)(local_c + 0x244) = piVar4;
    *(int **)(local_c + 0x24c) = piVar4;
    *(undefined4 **)(local_c + 0x248) = puVar3 + *(int *)(local_c + 0x240) * 2 + 0x1fe;
    iVar2 = *(int *)(local_c + 0x21c) + 0x1002 + (int)puVar3;
    for (; piVar4 <= *(int **)(local_c + 0x248); piVar4 = piVar4 + 2) {
      *piVar4 = iVar2;
      piVar4[1] = -0x7ffff803;
      iVar2 = iVar2 + 0x800;
    }
    iVar2 = ExQueryNonVolatileSetting(0x101,local_18,local_c + 0x1e6,6,&local_10);
    if ((iVar2 < 0) || (local_10 != 6)) {
      FUN_0034c7e5(&local_6,1);
      *(undefined1 *)(local_c + 0x1e7) = 0x50;
      *(undefined1 *)(local_c + 0x1e8) = 0xf2;
      *(byte *)(local_c + 0x1eb) = local_6 & 0x3e;
    }
    *(undefined4 *)(local_c + 0x210) = 100;
    _DAT_fef000a8 = *(undefined4 *)(local_c + 0x1e6);
    _DAT_fef000ac = (uint)*(ushort *)(local_c + 0x1ea);
    _DAT_fef000b8 = 0xffffffff;
    _DAT_fef000bc = 0xffff;
    _DAT_fef000b0 = 0xffffffff;
    _DAT_fef000b4 = 0xffff;
    *(undefined4 *)(local_c + 0x1e0) = *(undefined4 *)(local_c + 0x1e6);
    *(undefined2 *)(local_c + 0x1e4) = *(undefined2 *)(local_c + 0x1ea);
    _DAT_fef00090 = 0x5ee;
    _DAT_fef0008c = 0x7f0020;
    _DAT_fef00080 = &UNK_003b0f3e;
    FUN_0034c7e5(&local_5,1);
    local_5 = local_5 + (local_5 == 0);
    _DAT_fef0009c = local_5 | 0x7f00;
    _DAT_fef000a0 = 0x16070f;
    _DAT_fef000a4 = 0x16;
    _DAT_fef00100 = *(int *)(local_c + 0x228) + *(int *)(local_c + 0x21c);
    _DAT_fef00104 = *(int *)(local_c + 0x244) + *(int *)(local_c + 0x21c);
    _DAT_fef00108 = *(int *)(local_c + 0x240) * 0x10000 - 0x10000U | *(uint *)(local_c + 0x224);
    _DAT_fef00140 = &UNK_00300010;
    _DAT_fef0013c = &UNK_00300010;
    _DAT_fef00188 = 0x1040000;
    _DAT_fef0018c = 0x105;
    KeStallExecutionProcessor(0x32);
    iVar2 = PhyInitialize(0,0);
    if (iVar2 < 0) {
      return iVar2;
    }
    _DAT_fef00188 = _DAT_fef00188 | 0x100000;
    KeStallExecutionProcessor(0x32);
    FUN_0034cf6e(0,1);
    FUN_0034ce3c();
    _DAT_fef00184 = 8;
    _DAT_fef00004 = 0x5f;
    cVar1 = KeConnectInterrupt(&DAT_0040f5d8);
    if (cVar1 == '\0') {
      return -0x3ffffe92;
    }
    HalRegisterShutdownNotification(local_c + 0x250,1);
    uVar6 = 0x800;
  }
  else {
    if (*(int *)(*(int *)(local_c + 0x260) + 4) != 0x58424436) {
      return -0x7ff8d885;
    }
    HalRegisterShutdownNotification(local_c + 0x250,1);
    local_14 = 0;
    iVar2 = (**(code **)(**(int **)(local_c + 0x260) + 4))
                      (*(undefined1 *)(local_c + 7),*(undefined1 *)(local_c + 0x10),local_c + 0x1e6,
                       &local_14);
    if (iVar2 < 0) {
      HalRegisterShutdownNotification(local_c + 0x250,0);
      return iVar2;
    }
    *(undefined4 *)(local_c + 0x1e0) = *(undefined4 *)(local_c + 0x1e6);
    *(undefined2 *)(local_c + 0x1e4) = *(undefined2 *)(local_c + 0x1ea);
    FUN_00352ebc(0xc00);
    if (local_14 == 0) {
      return 0;
    }
    uVar6 = 0x80000000;
  }
  FUN_00352ebc(uVar6);
  return 0;
}
