/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D82936DF12C1A440796FD287FE3D736F327F2499413E52A4C757296B666839F1
 * Entry: 0x00075380, Ghidra index: 1343, label: FUN_00075380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00075380(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  uint *unaff_EDI;
  
  iVar1 = FUN_00075f00(unaff_EDI);
  if ((iVar1 != *(int *)(in_EAX + 4)) && (*(uint *)(iVar1 + 0xc) <= *unaff_EDI)) {
    *unaff_EBX = iVar1;
    return;
  }
  *unaff_EBX = *(int *)(in_EAX + 4);
  return;
}
