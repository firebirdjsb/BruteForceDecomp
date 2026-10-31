/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B42322D197EA5577B61E4B1BC436D4A8845628E6B7519E13EA0BE60B9CAD98D3
 * Entry: 0x00343e46, Ghidra index: 12727, label: FUN_00343e46
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declarations; direct CALL targets checked against the pinned XBE.
 * ABI_UNVERIFIED: source signatures are not recovered Xbox/native interfaces.
 */
extern bool FUN_003439cc(int param_1,int param_2);
bool FUN_00343e46(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_003439cc(param_1,2);
    if ((iVar1 == 0) ||
       ((**(char **)(param_1 + 0x24) == '\0' && ((*(char **)(param_1 + 0x24))[1] == '\0')))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = *(uint *)(param_1 + 0x24) < param_2;
  }
  return bVar2;
}
