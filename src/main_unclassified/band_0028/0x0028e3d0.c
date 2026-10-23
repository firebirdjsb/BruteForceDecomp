/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D3AD800DC1C24713B9552A408D0534621FF800CC43554997D59D54E863A2763
 * Entry: 0x0028e3d0, Ghidra index: 9209, label: FUN_0028e3d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0028e3d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_EAX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    uVar1 = param_2[-1];
    puVar4 = param_2 + -4;
    uVar2 = param_2[-2];
    uVar3 = param_2[-3];
    puVar5 = param_3 + -4;
    *puVar5 = *puVar4;
    param_3[-3] = uVar3;
    param_3[-2] = uVar2;
    param_3[-1] = uVar1;
    param_2 = puVar4;
    param_3 = puVar5;
  } while (puVar4 != param_1);
  *in_EAX = puVar5;
  return;
}
