/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16D356E6611BC626E12345D2F0E26E1DD2815B3EB9D4B1379F8CABE65B617D71
 * Entry: 0x0001cc20, Ghidra index: 116, label: FUN_0001cc20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001d3e0(int param_1,int param_2);

void FUN_0001cc20(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != param_4) {
    puVar2 = (undefined4 *)FUN_0001d3e0(param_4,*(undefined4 *)(param_1 + 8));
    puVar1 = *(undefined4 **)(param_1 + 8);
    for (puVar3 = puVar2; puVar3 != puVar1; puVar3 = puVar3 + 3) {
      (**(code **)*puVar3)(0);
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
  }
  *param_2 = param_3;
  return;
}
