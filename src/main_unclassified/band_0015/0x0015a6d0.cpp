/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 840796A96743B7F03C8B885A558DE07D16A30E36767DAE0B7797357DC22271B1
 * Entry: 0x0015a6d0, Ghidra index: 4516, label: FUN_0015a6d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE: two guest DWORDs, EAX result, RET 8; implicit ECX/EDX remain unresolved. */
extern uint32_t FUN_00160da0(uint32_t guest_word0, uint32_t guest_word1);
void FUN_0015a6d0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x148);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar4;
  }
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x148);
  for (; puVar4 != puVar1; puVar4 = (undefined4 *)*puVar4) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    piVar3 = (int *)FUN_00160da0(0xffffffff,1);
    if ((piVar3 != (int *)0x0) &&
       (piVar3 = (int *)(**(code **)(*piVar3 + 8))(uVar2), piVar3 != (int *)0x0)) {
      FUN_000da880(uVar2,piVar3,1);
      FUN_000da8f0(uVar2);
      if (piVar3 != (int *)0x0) {
        uStack_4 = param_2[2];
        uStack_8 = param_2[1];
        uStack_c = *param_2;
        uStack_14 = 0;
        uStack_18 = 0;
        uStack_1c = 0;
        uStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0;
        uStack_10 = 0x3f800000;
        uStack_20 = 0x3f800000;
        uStack_30 = 0x3f800000;
        (**(code **)(*piVar3 + 0x50))(&uStack_30);
      }
    }
  }
  return;
}
