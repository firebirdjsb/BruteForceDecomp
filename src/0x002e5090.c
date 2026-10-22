/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1B26363A80FF7F61CEE71C1F308EB2462BEE302DC73DDC8A13ADA7F16FB8650A
 * Entry: 0x002e5090, Ghidra index: 10467, label: FUN_002e5090
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002e5090(int *param_1)

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
  (**(code **)(*param_1 + 0x14))(in_ECX + 0x1c);
  return param_1[3];
}
