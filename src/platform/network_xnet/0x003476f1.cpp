/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16937BF18421D353E204915080852D28CCB19608A455CA3E864C846179D26852
 * Entry: 0x003476f1, Ghidra index: 12863, label: FUN_003476f1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003476f1(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = 0;
  uVar2 = 0;
  for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
    bVar3 = CARRY4(uVar1,*param_1);
    uVar1 = uVar1 + *param_1;
    uVar2 = uVar2 + bVar3;
    param_1 = param_1 + 1;
  }
  return uVar1 + uVar2 + (uint)CARRY4(uVar1,uVar2);
}
