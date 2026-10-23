/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5282CAFA5300C26E82EE8F2AC471731EE2D934208A0ABBB07664CDFDAA1B71A
 * Entry: 0x001d6e00, Ghidra index: 6380, label: FUN_001d6e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d6e00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 0x100;
    puVar1 = in_EAX + 0x100;
    puVar4 = param_1;
    puVar5 = in_EAX;
    for (iVar2 = 0x100; in_EAX = puVar1, param_1 = puVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}
