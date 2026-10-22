/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CBCBC5ED24380EBA01B55FA22EE4BF33493040339F82B14E188D5B13EAC1EFFE
 * Entry: 0x00380fc8, Ghidra index: 13548, label: FUN_00380fc8
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00380fc8(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  return uVar1;
}
