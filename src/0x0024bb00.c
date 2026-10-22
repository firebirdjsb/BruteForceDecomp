/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D6373D86E92DB36C7F267AD06208AA5940C538B543695A782F0C4994A3FFA2D5
 * Entry: 0x0024bb00, Ghidra index: 8266, label: FUN_0024bb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024bb00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 6;
    puVar1 = in_EAX + 6;
    puVar4 = param_1;
    puVar5 = in_EAX;
    for (iVar2 = 6; in_EAX = puVar1, param_1 = puVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}
