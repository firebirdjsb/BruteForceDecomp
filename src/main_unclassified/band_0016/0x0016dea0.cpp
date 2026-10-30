/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E4B034EB91B937250B053A11FCE137C0E1D4CD0F14DA16448025927225F81B8
 * Entry: 0x0016dea0, Ghidra index: 4806, label: FUN_0016dea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0016dea0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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
    uVar1 = param_2[-2];
    puVar4 = param_2 + -5;
    uVar2 = param_2[-3];
    uVar3 = param_2[-4];
    puVar5 = param_3 + -5;
    *puVar5 = *puVar4;
    param_3[-4] = uVar3;
    param_3[-3] = uVar2;
    param_3[-2] = uVar1;
    param_3[-1] = param_2[-1];
    param_2 = puVar4;
    param_3 = puVar5;
  } while (puVar4 != param_1);
  *in_EAX = puVar5;
  return;
}
