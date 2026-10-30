/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D8BB62147E0720A6E04A783D9CF0D2D61F50FD83B5BC3FB3B9943D7B85AEAFB
 * Entry: 0x003353e9, Ghidra index: 12425, label: FUN_003353e9
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003353e9(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    if (*(int *)(in_ECX + 0x15bc) != 0) {
      return 1;
    }
    iVar1 = FUN_0033ddf6(3,0,*(undefined4 *)(param_1 + 8),1,(int *)(in_ECX + 0x15bc),in_ECX + 0x15c0
                        );
    if (iVar1 < 0) {
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  return 0;
}
