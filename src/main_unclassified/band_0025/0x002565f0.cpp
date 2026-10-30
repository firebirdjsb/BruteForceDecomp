/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 81941831E03AAAA1D49373029E4E555AD2EAC31E22E5AFFBF7FD2F2950CA7889
 * Entry: 0x002565f0, Ghidra index: 8442, label: FUN_002565f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00393780;
void FUN_002565f0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_00393780;
  iVar1 = in_ECX[6];
  while (iVar1 != 0) {
    FUN_00256900(iVar1);
    iVar1 = in_ECX[6];
  }
  if (in_ECX[0x11] == 0) {
    in_ECX[0x11] = 0;
    in_ECX[0x12] = 0;
    in_ECX[0x13] = 0;
    if (in_ECX[0xd] == 0) {
      in_ECX[0xd] = 0;
      in_ECX[0xe] = 0;
      in_ECX[0xf] = 0;
      FUN_00254110();
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0xd]);
  }
  FUN_00256480(in_ECX + 0x10);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x11]);
}
