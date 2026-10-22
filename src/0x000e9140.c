/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4398A6F4BB4A23042F62D2214B51D7C93D7CDE39E1EE810DA6CA0E441DFB97CE
 * Entry: 0x000e9140, Ghidra index: 2879, label: FUN_000e9140
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000e9140(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *unaff_EDI;
  
  iVar3 = in_EAX - (int)unaff_EDI;
  iVar2 = -(iVar3 >> 0x1f);
  while (1 < iVar3 / 0xc) {
    puVar1 = (undefined4 *)((int)unaff_EDI + iVar3 + -0xc);
    *puVar1 = *unaff_EDI;
    puVar1[1] = unaff_EDI[1];
    puVar1[2] = unaff_EDI[2];
    FUN_000e9530();
    iVar3 = iVar3 + -0xc;
    iVar2 = iVar3 * 0x2aaaaaab;
  }
  return iVar2;
}
