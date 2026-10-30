/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 58F12809EFFA88CD6E39A477D1F46C83A62F409FB6697CB2DB4551F9AFE1BC4B
 * Entry: 0x00351884, Ghidra index: 13063, label: FUN_00351884
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00351884(uint param_1)

{
  uint *puVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = *(char *)(in_ECX + 0x8c0);
  if ((((cVar2 == '\x05') || (cVar2 == '\f')) || (cVar2 == '\x0e')) || (cVar2 == '\x16')) {
    FUN_003511e5();
  }
  else {
    puVar1 = (uint *)(in_ECX + 0xa70);
    *puVar1 = *puVar1 | param_1;
    if (cVar2 == '\x14') {
      *puVar1 = *puVar1 | 0x80010000;
    }
  }
  FUN_00350db4(0,0);
  return;
}
