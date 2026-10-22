/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E97094B9C41F606208698DF73CEF3ACA4F40E7AA995459314925EBF2DE163AA
 * Entry: 0x000736c0, Ghidra index: 1304, label: FUN_000736c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000736c0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_EAX;
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_EAX + 4) = 1;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 0x14) = *in_ECX;
  *(undefined4 *)(in_EAX + 0x18) = uVar2;
  *(undefined4 *)(in_EAX + 0x1c) = uVar1;
  uVar1 = in_ECX[2];
  uVar2 = in_ECX[1];
  *(undefined4 *)(in_EAX + 8) = *in_ECX;
  *(undefined4 *)(in_EAX + 0xc) = uVar2;
  *(undefined4 *)(in_EAX + 0x10) = uVar1;
  *(undefined4 *)(in_EAX + 0x20) = 0;
  return;
}
