/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 99D18CD34E49EB34E13114C95B7AC593B2444397B9A9CE060BE09CDBCAD0D9D9
 * Entry: 0x000fbd40, Ghidra index: 3141, label: FUN_000fbd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000fbd40(void)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *in_ECX;
  int iVar3;
  
  if (((in_ECX != (int *)0x0) && (iVar3 = *(int *)(in_EAX + 4), iVar3 != 0)) &&
     (iVar1 = *(int *)(in_EAX + 8), iVar1 - iVar3 >> 2 != 0)) {
    for (; iVar3 != iVar1; iVar3 = iVar3 + 4) {
      cVar2 = FUN_000ef410(iVar3);
      if ((cVar2 == '\0') && (cVar2 = FUN_000ef590(in_ECX,iVar3), cVar2 == '\0')) {
        (**(code **)(*in_ECX + 0x38))(iVar3);
      }
    }
  }
  return;
}
