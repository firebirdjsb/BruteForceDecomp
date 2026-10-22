/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3746697D1DA955EA18194B2AC11DDA7FE8AF04EBF703FA5D038DA7CEEFCB2728
 * Entry: 0x0027caa0, Ghidra index: 8986, label: FUN_0027caa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027caa0(void)

{
  char cVar1;
  int iVar2;
  int in_EAX;
  
  iVar2 = *(int *)(in_EAX + 8);
  cVar1 = *(char *)(iVar2 + 0x1d);
  while (cVar1 == '\0') {
    iVar2 = *(int *)(iVar2 + 8);
    cVar1 = *(char *)(iVar2 + 0x1d);
  }
  return;
}
