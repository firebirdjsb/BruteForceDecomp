/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB6B7C018F5EF567B3BB866A40457459A0BEF32A22D35EE3C6900B6DC8C5AF8B
 * Entry: 0x0034c461, Ghidra index: 12959, label: FUN_0034c461
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0034c461(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7,uint param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 local_18 [5];
  
  XcHMAC(param_1,param_2,param_3,param_4,param_5,param_6,local_18);
  puVar2 = local_18;
  for (uVar1 = param_8 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_7 = *puVar2;
    puVar2 = puVar2 + 1;
    param_7 = param_7 + 1;
  }
  for (param_8 = param_8 & 3; param_8 != 0; param_8 = param_8 - 1) {
    *(undefined1 *)param_7 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    param_7 = (undefined4 *)((int)param_7 + 1);
  }
  return;
}
