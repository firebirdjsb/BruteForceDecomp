/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FF758909B8B407334FA28F74FA29249AA33E1272AFC4D871964117D8B61D11CA
 * Entry: 0x0004eb00, Ghidra index: 681, label: FUN_0004eb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00050980(int param_1,int param_2,int param_3);

void FUN_0004eb00(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar1 = *(int *)(in_EAX + 8);
  for (iVar2 = *(int *)(in_EAX + 4); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_00050980(*(int *)(iVar2 + 8),*(int *)(iVar2 + 0xc),
                 *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 2);
    *(undefined1 *)(iVar2 + 0x14) = 1;
  }
  return;
}
