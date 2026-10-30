/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 47D6FD5E8A09256878B3796606F5CDF30BC88BA8228A4E5624439E026DCE5BD6
 * Entry: 0x0029e410, Ghidra index: 9474, label: FUN_0029e410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0029e410(int *param_1,int *param_2)

{
  /* Original RET 8 at 0x0029E473 verifies two incoming stack DWORDs.
   * LEA [ESP+0x18] at 0x0029E442 aliases the SECOND incoming word,
   * while LEA [ESP+0x14] at 0x0029E44E aliases the FIRST incoming word.
   * Each is overwritten by a separate virtual call, then passed together
   * to the destination interface.  Keep them distinct from host pointers. */
  uint32_t guest_first_arg_word = (uint32_t)(uintptr_t)param_1;
  uint32_t guest_second_arg_word = (uint32_t)(uintptr_t)param_2;
  int iVar1;
  int iVar2;

  (**(code **)(*param_1 + 0x0c))(param_1);
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*param_1 + 0x34))(param_1,iVar1);
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  for (iVar1 = 0; iVar1 < iVar2; iVar1++) {
    (**(code **)(*param_2 + 0x20))(param_2,iVar1,&guest_second_arg_word);
    (**(code **)(*param_2 + 0x24))(param_2,iVar1,&guest_first_arg_word);
    (**(code **)(*param_1 + 0x14))(param_1,guest_second_arg_word,&guest_first_arg_word);
  }
  return 0;
}
