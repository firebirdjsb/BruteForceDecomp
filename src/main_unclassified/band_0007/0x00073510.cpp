/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E3F407BB29E294A60D8DF6467364253D3430BFE91E7566DE70CEC253FA209DE
 * Entry: 0x00073510, Ghidra index: 1298, label: FUN_00073510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00073510(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_EDX;
  int unaff_EDI;
  
  if (*(undefined4 **)(in_EDX + 0xc) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(in_EDX + 0xc);
  }
  while( true ) {
    if (puVar2 == *(undefined4 **)(in_EDX + 0xc)) {
      return 0;
    }
    iVar1 = puVar2[2];
    if (((iVar1 != 0) && (*(int *)(iVar1 + 0x54) == 1)) && (*(int *)(iVar1 + 0x148) == unaff_EDI))
    break;
    puVar2 = (undefined4 *)*puVar2;
  }
  return iVar1;
}
