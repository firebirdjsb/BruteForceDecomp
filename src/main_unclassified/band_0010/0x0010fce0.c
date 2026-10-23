/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A88AA15400A70AD8CED5FA14E753D6E49EA7FCF50B9B55CCEE2544A7FA755433
 * Entry: 0x0010fce0, Ghidra index: 3541, label: FUN_0010fce0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_0010fce0(void)

{
  bool bVar1;
  int in_EAX;
  int iVar2;
  float unaff_ESI;
  
  iVar2 = (**(code **)(**(int **)(*(int *)(in_EAX + 8) + 0xbec) + 0xc))();
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x24) == 0)) ||
     ((*(byte *)(*(int *)(iVar2 + 0x24) + 0x14) & 2) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return (float10)*(float *)(*(int *)(in_EAX + 0xc) + 0x230) + (float10)unaff_ESI;
  }
  return (float10)*(float *)(*(int *)(in_EAX + 0xc) + 0x238) + (float10)unaff_ESI;
}
