/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52878D909A8A4970CEF7BABABF0F02D6C797C5BB44C7B188FFA96C47B33659A6
 * Entry: 0x00107d50, Ghidra index: 3376, label: FUN_00107d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00107daa) */

undefined1 FUN_00107d50(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x30);
    for (iVar3 = *(int *)(iVar3 + 0x2c); iVar3 != iVar1; iVar3 = iVar3 + 0x18) {
      cVar2 = FUN_00107b20(param_1,iVar3);
      if ((cVar2 != '\0') && (cVar2 = FUN_00107bc0(param_1), cVar2 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}
