/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1470436B23630238338C2A200700D527DF0A642F7B4E273A96C229631E85AB8E
 * Entry: 0x0035596b, Ghidra index: 13124, label: FUN_0035596b
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0035596b(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint *puVar4;
  bool bVar5;
  
  uVar1 = *(uint *)(param_2 + 0xc);
  uVar2 = *(uint *)(param_1 + 8) & 7;
  bVar5 = uVar2 == 7;
  if (*(int *)(param_2 + 0x10) == -1) {
    if (3 < uVar2) {
      puVar4 = *(uint **)(in_ECX + 0xbd8U);
      for (puVar4 = (uint *)(-(uint)(puVar4 != (uint *)(in_ECX + 0xbd8U)) & (uint)puVar4);
          puVar4 != (uint *)0x0; puVar4 = (uint *)(-(uint)(*puVar4 != in_ECX + 0xbd8U) & *puVar4)) {
        if (((((byte)puVar4[3] & 0x36) == 0x20) &&
            (*(short *)((int)puVar4 + 0x4a) == (short)param_4)) &&
           ((puVar4[0x11] == uVar1 || (puVar4[0x11] == 0)))) {
          if (((short)puVar4[0x12] == (short)param_3) || ((short)puVar4[0x12] == 0)) {
            FUN_003557ac(puVar4,uVar1,param_3,param_5,param_6,param_7,param_8,bVar5);
          }
        }
      }
    }
  }
  else {
    iVar3 = FUN_00346c3a(param_4,uVar1,param_3,2,0);
    if ((((3 < ((byte)*(uint *)(param_1 + 8) & 7)) || ((*(uint *)(param_1 + 8) & 0x2000000) != 0))
        || ((iVar3 != 0 && ((*(uint *)(iVar3 + 0xc) & 0x2000000) != 0)))) &&
       ((((iVar3 != 0 && (uVar2 = *(uint *)(iVar3 + 0xc), (uVar2 & 0x20) != 0)) &&
         ((uVar2 & 0x10) == 0)) && (((uVar2 & 4) != 0 || (!bVar5)))))) {
      FUN_003557ac(iVar3,uVar1,param_3,param_5,param_6,param_7,param_8,bVar5);
    }
  }
  return;
}
