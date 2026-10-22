/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AA16D84F352F14B6C878E65E654E25ABAA1D217694C6B65CDB5C3814B3819346
 * Entry: 0x00059c80, Ghidra index: 898, label: FUN_00059c80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00059c80(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  *(undefined4 *)(in_ECX + 0xc) = *param_1;
  *(undefined4 *)(in_ECX + 0x10) = uVar2;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  return;
}
