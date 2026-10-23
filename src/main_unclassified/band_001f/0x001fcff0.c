/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 591BDB24337E9A80977B56F0E8A00131915A8DBF682B020AD8F28E3CA81EAC6F
 * Entry: 0x001fcff0, Ghidra index: 7182, label: FUN_001fcff0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001fcff0(int param_1)

{
  int in_ECX;
  
  FUN_001ff4c0(param_1);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  if ((in_ECX + 0x44 != param_1 + 0x44) && (*(int *)(in_ECX + 0x48) != *(int *)(param_1 + 0x48))) {
    FUN_0008f6a0(*(int *)(param_1 + 0x48));
  }
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return;
}
