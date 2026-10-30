/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B2F74219F528C4046AF2E21A787296E56CBAA0368D23C6FDB085B97966B51F2
 * Entry: 0x002634d0, Ghidra index: 8679, label: FUN_002634d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002634d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == param_2) {
    *in_EAX = param_3;
    return;
  }
  do {
    param_2 = param_2 + -5;
    param_3 = param_3 + -5;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  } while (param_2 != param_1);
  *in_EAX = param_3;
  return;
}
