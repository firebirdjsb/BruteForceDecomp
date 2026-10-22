/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58229B0691017BEE8BE25B483CC78477F016DB7E93DADE9FF92DB375B89F88EA
 * Entry: 0x002e4250, Ghidra index: 10435, label: FUN_002e4250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e4250(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int in_ECX;
  undefined4 *puStack_10;
  
  puVar1 = param_2;
  if (param_1[1] == 0) {
    puStack_10 = param_2;
    param_2 = (undefined4 *)FUN_002e41c0();
  }
  puStack_10 = &param_2;
  (**(code **)(*param_1 + 0x1c))();
  (**(code **)(*param_1 + 0x48))();
  if ((*(byte *)(in_ECX + 3) & 0xe) == 0) {
    bVar2 = *(byte *)(in_ECX + 3) >> 4;
  }
  else {
    bVar2 = 7;
  }
  if (bVar2 == 1) {
    (**(code **)(*param_1 + 0x1c))(in_ECX + 4);
  }
  else if (bVar2 == 2) {
    (**(code **)(*param_1 + 0x18))(in_ECX + 4);
    (**(code **)(*param_1 + 0x18))(in_ECX + 5);
  }
  else if (bVar2 == 7) {
    (**(code **)(*param_1 + 0x18))(in_ECX + 4);
    (**(code **)(*param_1 + 0x18))((char *)(in_ECX + 5));
    puStack_10 = (undefined4 *)(uint)(byte)(*(char *)(in_ECX + 5) + 1);
    (**(code **)(*param_1 + 0x48))(in_ECX + 6,&puStack_10);
    if (((uint)puVar1 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(in_ECX + 0xb);
    }
    FUN_002e4180();
    FUN_002e9720(in_ECX + 0xc,&stack0xfffffff8);
  }
  if ((*(byte *)(in_ECX + 3) & 1) != 0) {
    FUN_002e9720(in_ECX + 0x14,in_ECX + 0x10);
  }
  return param_1[3];
}
