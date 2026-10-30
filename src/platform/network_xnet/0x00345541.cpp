/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 675443FCF026B31E3B67C8117CA142C7DF1B1441817A1BCC1BAE9B9DD6885120
 * Entry: 0x00345541, Ghidra index: 12809, label: FUN_00345541
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00345541(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int in_ECX;
  
  do {
    puVar2 = (uint *)(in_ECX + 0xc);
    uVar1 = *puVar2;
    uVar3 = *puVar2;
    if (uVar1 == uVar3) {
      *puVar2 = uVar1 & param_1 | param_2;
      uVar3 = uVar1;
    }
  } while (uVar3 != uVar1);
  return;
}
