/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 55351DADE02EB7A01657E4DD8B83C64DB97FE54C203987495944DD6A1C686207
 * Entry: 0x000a5220, Ghidra index: 1966, label: FUN_000a5220
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a5220(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0xc);
  uVar2 = *(undefined4 *)(in_EAX + 8);
  *in_ECX = *(undefined4 *)(in_EAX + 4);
  in_ECX[1] = uVar2;
  in_ECX[2] = uVar1;
  *param_1 = *(undefined4 *)(in_EAX + 0x10);
  return;
}
