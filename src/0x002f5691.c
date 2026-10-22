/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F484FC9E7DBF88356A2570088F5221B807A9F207F7D3A9B9E8267AD10FE7ABB3
 * Entry: 0x002f5691, Ghidra index: 10893, label: XFindNextContent
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__XFindNextContent(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002f47e8(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 != 0) {
    do {
      iVar2 = FUN_002f53a2(param_2,*(undefined4 *)(param_1 + 8),param_1 + 0x10,
                           *(undefined4 *)(param_1 + 0xc));
      if (iVar2 != 0) {
        return iVar1;
      }
      iVar1 = FUN_002f47e8(*(undefined4 *)(param_1 + 4),param_2);
    } while (iVar1 != 0);
  }
  return 0;
}
