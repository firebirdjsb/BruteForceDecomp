/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C53E8F9B17228C9023F2C24C4A4B5901C489AF22443B938AD5C1890D8C477784
 * Entry: 0x0034bc19, Ghidra index: 12948, label: FUN_0034bc19
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034bc19(int param_1,int param_2,short *param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  short *psVar4;
  uint uVar5;
  undefined4 local_14;
  int local_10;
  undefined1 local_c;
  undefined1 local_b;
  short local_a;
  
  if ((((7 < param_4) && ((ushort)((ushort)param_3[2] >> 8 | param_3[2] << 8) == param_4)) &&
      (sVar1 = param_3[1], sVar1 != 0)) && (*param_3 != 0)) {
    if ((sVar1 == 0x20c) || (sVar1 == *(short *)(in_ECX + 0x8c6))) {
      FUN_0034b6f0(param_1,param_2,param_3,param_4);
    }
    else if (*(int *)(param_2 + 0x10) != 0x1000000) {
      if ((*(byte *)(param_1 + 0xb) & 2) == 0) {
        if (param_3[3] != 0) {
          local_14 = *(undefined4 *)(param_2 + 0xc);
          local_c = 0;
          local_a = param_3[2];
          local_b = 0x11;
          psVar4 = param_3;
          uVar5 = param_4;
          local_10 = *(int *)(param_2 + 0x10);
          uVar2 = FUN_0035628c(0,&local_14,0xc);
          iVar3 = FUN_0035628c(uVar2,psVar4,uVar5);
          if (iVar3 != 0xffff) {
            return;
          }
        }
        sVar1 = param_3[1];
        if (sVar1 == 0x4400) {
          FUN_003518d4(param_1,param_3,param_4 - 8);
          return;
        }
        if (sVar1 == -0x17fc) {
          FUN_0034defc(param_1,param_3,param_4 - 8);
          return;
        }
      }
      if (*(int *)(param_2 + 0xc) != 0) {
        FUN_0035596b(param_1,param_2,*param_3,sVar1,param_3 + 4,param_4 - 8,0,0);
      }
    }
  }
  return;
}
