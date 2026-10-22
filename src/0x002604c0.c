/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 33040CE64FA071E8A1039222BC689FF3D83095D5FBD2ED9190843DCC495BBA72
 * Entry: 0x002604c0, Ghidra index: 8619, label: FUN_002604c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_004432fc;
extern char s_texture_00404da4[];
undefined4 FUN_002604c0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int *unaff_ESI;
  
  if ((*param_2 != 0x10) || (param_2[1] != *(int *)(param_1 + 8))) {
    *param_3 = 0;
    return 0x80004002;
  }
  iVar1 = FUN_002ea01d(0x2c);
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  iVar1 = FUN_00260550();
  if (iVar1 == 0) {
    *param_3 = 0;
    return 0x8007000e;
  }
  (**(code **)(*DAT_004432fc + 0xc))(DAT_004432fc,2,0,s_texture_00404da4);
  *unaff_ESI = iVar1;
  return 0;
}
