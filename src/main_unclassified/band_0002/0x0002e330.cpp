/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E1C8FC69AF47E17BAECAB70B59D2EEF7E7E13B27243C61E23D155E9129E8AA1
 * Entry: 0x0002e330, Ghidra index: 303, label: FUN_0002e330
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0002e330(float param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = (int)param_1;
  uVar5 = 0;
  if (param_1 == 0.0) {
    return 0;
  }
  puVar1 = (undefined4 *)((int)param_1 + 4);
  param_1 = 1.5;
  (**(code **)(*(int *)*puVar1 + 0xf4))();
  cVar3 = FUN_0002e2e0();
  if (cVar3 == '\0') {
    param_1 = 3.75;
  }
  iVar4 = FUN_00055aa0();
  switch(*(undefined4 *)(iVar4 + 0x5c)) {
  case 7:
  case 8:
  case 0xe:
  case 0x33:
  case 0x78:
    if (*(float *)(iVar2 + 0x28) <= param_1) {
      cVar3 = FUN_00054920();
      if (cVar3 == '\0') {
        return 0;
      }
      if (*(float *)(iVar2 + 0x38) <= param_1) {
        return 0;
      }
      FUN_00012320(0x21);
      FUN_0004dff0(in_EAX);
      uVar5 = 0x21;
    }
    else {
      FUN_00012320(7);
      FUN_0004dff0(in_EAX);
      uVar5 = 7;
    }
    FUN_00012440();
  }
  return uVar5;
}
