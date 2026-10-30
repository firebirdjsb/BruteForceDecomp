/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CDC8C96E77E38441B9EA44FE1AF44A996B2AF72CB276BEE463116D1C3375BAF
 * Entry: 0x0010c060, Ghidra index: 3459, label: FUN_0010c060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 * FUN_0010c060(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_EDX;
  float *unaff_ESI;
  
  if (*(undefined4 **)(in_EDX + 8) == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)**(undefined4 **)(in_EDX + 8);
  }
  puVar1 = *(undefined4 **)(in_EDX + 8);
  while( true ) {
    if (puVar2 == puVar1) {
      return (undefined4 *)0x0;
    }
    if (*unaff_ESI <= (float)puVar2[4] + (float)puVar2[3]) break;
    *unaff_ESI = *unaff_ESI - ((float)puVar2[4] + (float)puVar2[3]);
    puVar2 = (undefined4 *)*puVar2;
  }
  return puVar2 + 2;
}
