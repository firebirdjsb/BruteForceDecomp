/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC34EF0FA7E829BD484D08466DF76CEABFE9AC2AA0FDFDFC3F5DEF14DDF6DAC5
 * Entry: 0x002bb520, Ghidra index: 9903, label: FUN_002bb520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb520(void)

{
  int iVar1;
  undefined4 in_EAX;
  int in_ECX;
  
  iVar1 = in_ECX + 0xfc;
  FUN_002b6340(iVar1,in_EAX,iVar1);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(in_ECX + 0x130);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(in_ECX + 0x134);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(in_ECX + 300);
  FUN_002b41e0((undefined4 *)(in_ECX + 0xdc),iVar1);
  *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0xf0) = *(undefined4 *)(in_ECX + 0xe0);
  *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(in_ECX + 0xe4);
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0xe8);
  return;
}
