/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD2624C8C15D5CDC39BFDEFF1800EE48CF158D842C30DDFB597770AEA53B5600
 * Entry: 0x00107f60, Ghidra index: 3380, label: FUN_00107f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00107f60(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  if (param_2 != (int *)0x0) {
    iVar2 = (**(code **)(*param_2 + 4))();
    if ((iVar2 == 1) && (param_2 != (int *)0x0)) {
      FUN_00107c70(param_1,&uStack_44,&uStack_48);
      uStack_50 = 0;
      uStack_4c = 0x41a00000;
      cVar1 = FUN_00107e90(param_1,param_1 + 0x18,uStack_48,0x14,&uStack_50);
      *(char *)(param_1 + 0x54) = '\x01' - (cVar1 != '\0');
      uStack_48 = 0x1f28106b;
      uVar3 = FUN_001e97c0(uStack_50,uStack_44);
      FUN_002ea9a9(auStack_40,0x20,uVar3);
      FUN_0010a7d0();
    }
  }
  return;
}
