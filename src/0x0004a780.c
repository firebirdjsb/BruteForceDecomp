/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AA3BC32C2D6F35DBA0BFD052194BBB413BC97D31FCC9245EA1946E6E866FF18
 * Entry: 0x0004a780, Ghidra index: 598, label: FUN_0004a780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004a780(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_000388b0(*(undefined4 *)(in_EAX + 0x358));
  if ((iVar2 != 0) && ((iVar3 = *(int *)(iVar2 + 100), iVar3 == 0 || ((2 < iVar3 && (iVar3 < 5))))))
  {
    iVar2 = 0;
  }
  cVar1 = FUN_0002e2e0();
  if ((((cVar1 == '\0') && (iVar2 != 0)) && (*(int *)(iVar2 + 4) != 0)) &&
     (((*(uint *)(iVar2 + 0x80) >> 3 & 1) == 0 || ((*(uint *)(iVar2 + 0x80) >> 4 & 1) == 0)))) {
    if (*(int *)(*(int *)(*(int *)(iVar2 + 4) + 0xc) + 4) == 3) {
      cVar1 = FUN_00023110();
      if ((cVar1 != '\0') &&
         (((iVar3 = FUN_0002e330(iVar2), iVar3 == 7 || (iVar3 == 0x21)) ||
          (10.0 < *(float *)(iVar2 + 0x18))))) {
        FUN_0003d920(*(undefined4 *)(iVar2 + 4),4);
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  iVar3 = FUN_0004ab70();
  if ((iVar3 == 0) && (iVar2 != 0)) {
    iVar3 = *(int *)(iVar2 + 4);
  }
  return iVar3;
}
