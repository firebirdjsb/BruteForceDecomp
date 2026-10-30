/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00EA7C9587699C28D2C26FEFDF9D1465BF4257B41A6C460764ED00C747F2B9EF
 * Entry: 0x00201400, Ghidra index: 7258, label: FUN_00201400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469944;
extern uint32_t PTR_FUN_00395e88;
extern uint32_t PTR_FUN_0039c24c;
extern uint32_t PTR_FUN_0039e7e8;
void FUN_00201400(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x1b];
  *in_ECX = &PTR_FUN_00395e88;
  in_ECX[2] = &PTR_FUN_0039c24c;
  in_ECX[3] = &PTR_FUN_0039e7e8;
  if (iVar1 != 0) {
    if (*(char *)(in_ECX + 0x1a) == '\0') {
      if (*(int *)(iVar1 + 0x14) != 0) {
        (**(code **)(*DAT_00469944 + 0x14))(*(int *)(iVar1 + 0x14));
        *(undefined4 *)(iVar1 + 0x14) = 0;
      }
      *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
    }
    iVar1 = in_ECX[0x1b];
    if (iVar1 != 0) {
      FUN_00178640();
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  if (0xf < (uint)in_ECX[0x19]) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x14]);
  }
  in_ECX[0x19] = 0xf;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  piVar2 = (int *)in_ECX[0x12];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[0x12] = 0;
  }
  FUN_001fe150();
  return;
}
