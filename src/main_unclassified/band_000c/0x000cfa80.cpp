/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FD4BBA54B6D6242B9D1599ABE75298A2684397527E562BB99CF16D885C559FCF
 * Entry: 0x000cfa80, Ghidra index: 2563, label: FUN_000cfa80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000cfda0(int param_1,undefined4 param_2,float *param_3);

void FUN_000cfa80(undefined4 param_1)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  undefined4 *unaff_EDI;
  
  for (iVar2 = in_EAX - (int)unaff_EDI; 1 < iVar2 >> 2; iVar2 = iVar2 + -4) {
    uVar1 = *(undefined4 *)((int)unaff_EDI + iVar2 + -4);
    *(undefined4 *)((int)unaff_EDI + iVar2 + -4) = *unaff_EDI;
    FUN_000cfda0(iVar2 + -4 >> 2,uVar1,param_1);
  }
  return;
}
