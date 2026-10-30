/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 50ADB22756E6AA0438273C07D8DA0AFCE459D87990ED29FED37093A9E09B7C47
 * Entry: 0x001557b0, Ghidra index: 4469, label: FUN_001557b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001557b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  cVar1 = FUN_00022bc0(&local_1c);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x48) + 0x14))();
    FUN_000621c0();
    uStack_14 = uStack_8;
    uStack_10 = uStack_4;
    local_18 = uStack_c;
    uVar2 = (**(code **)(*(int *)(param_1 + 0x48) + 0x50))(&local_18,local_1c);
    return uVar2;
  }
  return 4;
}
