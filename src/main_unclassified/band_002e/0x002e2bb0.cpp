/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BE6C39BFEEDC4E8264548DDB13F8C47D77271D6D76E868BA127BB29F6057145B
 * Entry: 0x002e2bb0, Ghidra index: 10379, label: FUN_002e2bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002e2bb0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = in_ECX;
  for (iVar1 = 0x10; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
  }
  puVar2 = in_ECX + 0x11;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = in_ECX + 0x32;
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  in_ECX[0x132] = 0;
  FUN_002e3f20();
  in_ECX[0x31] = 0;
  in_ECX[0x13e] = 0;
  in_ECX[0x13f] = 0;
  return;
}
