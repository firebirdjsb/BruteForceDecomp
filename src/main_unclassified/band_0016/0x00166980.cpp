/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F082B80116B7A0B02B3555F022EF332CB1F6F3C893F658C1B64E23A749DEDDA
 * Entry: 0x00166980, Ghidra index: 4723, label: FUN_00166980
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00166980(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_524;
  undefined1 local_520 [1312];
  
  iVar5 = (param_2 - param_1) / 0x520;
  iVar1 = (in_EAX - param_1) / 0x520;
  iVar4 = iVar1;
  local_524 = iVar5;
  while (iVar2 = iVar4, iVar2 != 0) {
    iVar4 = local_524 % iVar2;
    local_524 = iVar2;
  }
  if ((local_524 < iVar5) && (0 < local_524)) {
    iVar5 = local_524 * 0x520 + param_1;
    do {
      FUN_001662b0(iVar5);
      iVar4 = iVar1 * 0x520 + iVar5;
      if (iVar4 == param_2) {
        iVar4 = param_1;
      }
      for (; iVar4 != iVar5; iVar4 = iVar4 + iVar3) {
        FUN_001666b0(iVar4);
        iVar2 = (param_2 - iVar4) / 0x520;
        iVar3 = iVar1 * 0x520;
        if (iVar2 <= iVar1) {
          iVar4 = (iVar1 - iVar2) * 0x520;
          iVar3 = param_1;
        }
      }
      FUN_001666b0(local_520);
      iVar4 = 0x13;
      do {
        FUN_00068c90();
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar5 = iVar5 + -0x520;
      local_524 = local_524 + -1;
    } while (local_524 != 0);
  }
  return;
}
