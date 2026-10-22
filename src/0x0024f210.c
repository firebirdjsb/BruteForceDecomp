/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3E760A2A59114BE232DC6308A1D9D706FBDEDD359E73DA979A1E9DB591204FA5
 * Entry: 0x0024f210, Ghidra index: 8314, label: FUN_0024f210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024f210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  undefined4 *puVar2;
  int unaff_EBX;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined4 **)(unaff_EBX + 8);
    puVar2 = param_1;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      *puVar2 = *param_2;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 **)(unaff_EBX + 8) = puVar2;
  }
  *in_EAX = param_1;
  return;
}
