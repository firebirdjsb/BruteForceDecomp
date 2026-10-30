/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DFEAC5A26BFAC65D09F91909CCF84E4E9ECBE6E82D8B04449BD5E28E83339AD7
 * Entry: 0x0012df20, Ghidra index: 3807, label: FUN_0012df20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0012df20(void)

{
  uint *puVar1;
  int in_EAX;
  int in_ECX;
  uint uVar2;
  
  uVar2 = in_EAX - 0x1c;
  if (2 < uVar2) {
    FUN_001297e0(in_ECX + 0x33c);
  }
  puVar1 = (uint *)(in_ECX + 0x33c + (uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}
