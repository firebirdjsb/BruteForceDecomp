/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 809D9A163C184F2FB86F4C4B8DE416A1B06382CAA6DE701128C2E943119A0C32
 * Entry: 0x0015eaf0, Ghidra index: 4559, label: FUN_0015eaf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0015eaf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = in_EAX + 2;
    puVar2 = param_1 + 2;
    do {
      *in_EAX = *param_1;
      puVar1[-1] = puVar2[-1];
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
      puVar1[5] = puVar2[5];
      param_1 = param_1 + 8;
      in_EAX = in_EAX + 8;
      puVar1 = puVar1 + 8;
      puVar2 = puVar2 + 8;
    } while (param_1 != param_2);
  }
  return;
}
