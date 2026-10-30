/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8337CFFCEE6F599D1879C2579A7E746022A4BE5B2C212D4372F505F0E6189001
 * Entry: 0x0022c2e0, Ghidra index: 7693, label: FUN_0022c2e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469aac;
extern uint32_t PTR_FUN_003bc654;
void FUN_0022c2e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  int local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_00469aac;
  local_70 = *(undefined4 *)(unaff_EBX + 8);
  local_78 = *(undefined4 *)(param_1 + 0x1fc);
  iVar2 = *(int *)(DAT_00469aac + 0xa44);
  local_50[0] = 0;
  local_2c = 0;
  local_14 = 0;
  piVar4 = local_50;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  local_50[3] = *(undefined4 *)(iVar2 + 0xe4);
  local_74 = *(undefined4 *)(unaff_EBX + 4);
  local_6c = *(undefined4 *)(unaff_EBX + 0xc);
  local_3c = 1;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  local_28 = 0x3cf5c28f;
  local_24 = 0x3c23d70a;
  local_20 = 0x3c23d70a;
  local_1c = 0x3c23d70a;
  local_18 = 0x3c23d70a;
  local_50[1] = 1;
  local_40 = 0;
  local_68 = 0;
  FUN_002b4070(local_60,0,0,0);
  iVar2 = *(int *)(*(int *)(iVar1 + 0xa44) + 0xe0);
  iVar1 = FUN_002ea01d(0xa0);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_002cce90(**(undefined4 **)(iVar2 + 0xc),&local_78,local_60);
  }
  FUN_0016a760(*(undefined4 *)(DAT_00469aac + 0xa44));
  *(int *)(iVar2 + 0x9c) = unaff_EBX + 0x38;
  *(uint *)(iVar2 + 0x8c) = *(uint *)(param_1 + 8) | 0x80000000;
  FUN_002b3c60();
  local_6c = 0;
  local_68 = 0x3f000000;
  local_64 = 0x3f000000;
  local_74 = 1;
  local_70 = 0;
  FUN_002b39a0(&local_74);
  if ((*(uint *)(iVar2 + 0x70) & 0x300) == 0) {
    FUN_002c00d0(*(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x10));
    *(uint *)(iVar2 + 0x70) = *(uint *)(iVar2 + 0x70) & 0xfffffdff | 0x100;
  }
  *(int *)(unaff_EBX + 0x34) = iVar2;
  if (local_50[0] != 0) {
    (*(code *)PTR_FUN_003bc654)(local_50[0]);
    return;
  }
  return;
}
