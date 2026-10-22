/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CEC5F793861F3FD7D900B944EA7CA4B2232319DCAFAD8AF7EC2197E9F874698C
 * Entry: 0x0037f712, Ghidra index: 13503, label: FUN_0037f712
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fc0;
extern uint32_t DAT_004a8fc4;
undefined4 FUN_0037f712(int *param_1,char param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined1 uStack0000000b;
  
  piVar3 = param_1;
  uVar7 = (uint)(byte)(param_2 - 1);
  param_1[0x117] = uVar7;
  param_1[1] = *(int *)(param_3 + 0x18);
  *param_1 = *(int *)(param_3 + 0x14);
  FUN_0037fbcf(param_1);
  FUN_0037fbda(param_1);
  iVar2 = *param_1;
  *(undefined4 *)(iVar2 + 0x48) = 0x1200;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined4 *)(iVar2 + 0x50) = 0x80000000;
  KeInitializeDpc(param_1 + 0x110,FUN_003855b3,param_1);
  param_1[2] = *(int *)(&DAT_004a8fc4 + uVar7 * 4);
  uVar5 = *(uint *)(iVar2 + 8);
  uStack0000000b = KeRaiseIrqlToDpcLevel();
  *(uint *)(iVar2 + 8) = uVar5 | 1;
  KeStallExecutionProcessor(10);
  FUN_0037fb6e();
  *(undefined4 *)(iVar2 + 4) = 0xbe;
  *(uint *)(iVar2 + 0x34) = ~(*(uint *)(iVar2 + 0x34) & 0xa772eed8 | 0x27722ed8) ^ 0x7fffffff;
  if (((byte)*XboxHardwareInfo_exref & 1) == 0) {
    param_1 = (int *)0x2;
    do {
      puVar4 = (uint *)FUN_0038359f();
      puVar8 = puVar4;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      uVar5 = (int)puVar4 - DAT_004a8fc0;
      *(undefined1 *)((int)puVar4 + 0x11) = 0;
      puVar4[5] = uVar5;
      *puVar4 = *puVar4 & 0xf808ffff | 0x80000;
      FUN_00384a70();
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  KfLowerIrql();
  iVar6 = uVar7 * 0x70 + 0x4a9000;
  KeInitializeInterrupt
            (iVar6,FUN_00384edf,piVar3,*(undefined4 *)(param_3 + 0x1c),
             *(undefined1 *)(param_3 + 0x24),0,0);
  KeConnectInterrupt(iVar6);
  piVar1 = piVar3 + 0x132;
  piVar3[0x130] = (int)FUN_003838c9;
  piVar3[0x131] = 1;
  piVar3[0x133] = (int)piVar1;
  *piVar1 = (int)piVar1;
  HalRegisterShutdownNotification(piVar3 + 0x130,1);
  *(undefined4 *)(iVar2 + 0x10) = 0x80000033;
  FUN_0037f8f9();
  return 0;
}
