/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F7459A270B4DAD2393A8B8ECA9D38EAAA9C6163E85C381252B73D921BEAB263
 * Entry: 0x00221a00, Ghidra index: 7574, label: FUN_00221a00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00221a00(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  
  if (**(int **)(in_EAX + 0x9c) == 0) {
    FUN_00221a40(param_2);
    return;
  }
  FUN_00221a40(param_2);
  return;
}
