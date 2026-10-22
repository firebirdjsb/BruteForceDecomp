/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 623E1397812FE7BFF0D95C205EB997CF54193E90CCF93B606660B59E2BC4DC03
 * Entry: 0x000a07f0, Ghidra index: 1898, label: FUN_000a07f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000a07f0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = (in_EAX - param_1) / 0xc;
  iVar2 = iVar1 / 2;
  if (0 < iVar2) {
    puVar3 = (undefined4 *)(param_1 + iVar2 * 0xc);
    do {
      iVar2 = iVar2 + -1;
      FUN_000a0990(iVar1,puVar3[-3],puVar3[-2],puVar3[-1],param_2);
      puVar3 = puVar3 + -3;
    } while (0 < iVar2);
  }
  return;
}
