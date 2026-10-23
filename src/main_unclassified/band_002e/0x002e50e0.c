/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81966AA81D23D9A66E18EACC87B319DAB1CB3EE8A795864533550DE226066C88
 * Entry: 0x002e50e0, Ghidra index: 10468, label: FUN_002e50e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e50e0(int *param_1)

{
  int in_ECX;
  undefined4 uVar1;
  
  if (param_1[1] == 1) {
    uVar1 = 0xfffffffa;
    FUN_002e56d0(0xfffffffa);
    uVar1 = FUN_002e5bf0(uVar1);
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
    FUN_002e75c0(0);
  }
  (**(code **)(*param_1 + 0x38))(*(undefined4 *)(in_ECX + 0x18));
  return param_1[3];
}
