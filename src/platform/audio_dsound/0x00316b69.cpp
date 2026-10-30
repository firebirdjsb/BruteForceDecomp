/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C7B57934C73426FD2808990E289E67FECF26FA474E510A3B202BB0506AC490A6
 * Entry: 0x00316b69, Ghidra index: 12156, label: FUN_00316b69
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00316b69(void)

{
  int *in_ECX;
  uint uVar1;
  byte *pbVar2;
  
  FUN_00318851(1);
  uVar1 = 0;
  pbVar2 = (byte *)(in_ECX + 0x38);
  do {
    if ((*pbVar2 & 1) != 0) {
      (**(code **)(*in_ECX + 0x1c))(uVar1);
    }
    uVar1 = uVar1 + 1;
    pbVar2 = pbVar2 + 0x20;
  } while (uVar1 < 6);
  FUN_003174e3();
  FUN_00317710();
  return;
}
