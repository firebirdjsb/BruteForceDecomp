/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB3AA4BAB9A7C3E0C8AAB4BAC376D4289292966A53D8AA051031D4E182C1E500
 * Entry: 0x00348a2d, Ghidra index: 12905, label: FUN_00348a2d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_external_import_addresses_x86.h"
void FUN_00348a2d(uint param_1,uint param_2)

{
  uint uVar1;
  int in_ECX;
  
  KeRaiseIrqlToDpcLevel();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1;
    if (param_1 < 0xfa1) {
      uVar1 = 4000;
    }
    if (uVar1 < 100000000) {
      uVar1 = 4000;
      if (4000 < param_1) {
        uVar1 = param_1;
      }
    }
    else {
      uVar1 = 100000000;
    }
  }
  *(uint *)(in_ECX + 0xbc0) = uVar1;
  uVar1 = param_2;
  if (param_2 < 2) {
    uVar1 = 1;
  }
  if (uVar1 < 0xe10) {
    if (param_2 < 2) {
      param_2 = 1;
    }
  }
  else {
    param_2 = 0xe10;
  }
  *(uint *)(in_ECX + 0xbc4) = param_2 * 1000;
  *(undefined4 *)(in_ECX + 0xbc8) = *(undefined4 *)KeTickCount_exref;
  KfLowerIrql();
  return;
}
