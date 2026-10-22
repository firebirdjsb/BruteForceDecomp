/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D67900DBF936FC5BC2BD13D3C6ECC231448FB111DCF310D86AA7590F11CCF194
 * Entry: 0x0012b090, Ghidra index: 3782, label: FUN_0012b090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012b090(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_EAX;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = in_EAX;
    puVar2 = param_1;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = *(undefined4 *)((int)param_1 + (4 - (int)in_EAX) + (int)puVar1);
      puVar2 = puVar2 + 2;
      puVar1 = puVar1 + 2;
    } while (puVar2 != param_2);
  }
  return;
}
