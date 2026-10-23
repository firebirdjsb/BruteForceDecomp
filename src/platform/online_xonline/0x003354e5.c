/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3F144EB3BD2292EBC4DAB2EC9D1CF868A02E2A71FBE82CCAC218D4C2FA1D4905
 * Entry: 0x003354e5, Ghidra index: 12428, label: FUN_003354e5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_003354e5(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    if (*(int *)(in_ECX + 0x15c4) != 0) {
      return 1;
    }
    iVar1 = FUN_0033ddf6(4,0,*(undefined4 *)(param_1 + 8),1,(int *)(in_ECX + 0x15c4),in_ECX + 0x15c8
                        );
    if (iVar1 < 0) {
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x58) = 1;
  }
  return 0;
}
