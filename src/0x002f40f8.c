/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F905CC13988A9B6AF54686792A2F52B852A19A48643E171C29B088713DCE011A
 * Entry: 0x002f40f8, Ghidra index: 10850, label: XFindNextSaveGame
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int XAPILIB__XFindNextSaveGame(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002f47e8(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 != 0) {
    do {
      iVar2 = FUN_002f3ae0(param_2,param_1 + 0xc,*(undefined4 *)(param_1 + 8));
      if (iVar2 != 0) {
        return iVar1;
      }
      iVar1 = FUN_002f47e8(*(undefined4 *)(param_1 + 4),param_2);
    } while (iVar1 != 0);
  }
  return 0;
}
