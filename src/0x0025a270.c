/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2CC0C7E390EBD8E8B4D5C517104D03DA033FB3158CFF549A1DC4C377EF91810
 * Entry: 0x0025a270, Ghidra index: 8519, label: FUN_0025a270
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0025a270(void)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int local_4;
  
  iVar1 = FUN_000a2840(in_EAX);
  iVar2 = FUN_0025add0(in_EAX);
  iVar3 = 0;
  local_4 = iVar1;
  while (local_4 != iVar2) {
    iVar3 = iVar3 + 1;
    FUN_0012aba0();
  }
  FUN_0025a8b0(&local_4,iVar1,iVar2);
  return iVar3;
}
