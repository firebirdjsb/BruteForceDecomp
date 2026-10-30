/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11D198575553FE55CCC0A9E4D87FE68F5BEB43F1477DB2FFA1C145550B334685
 * Entry: 0x0017ac30, Ghidra index: 5023, label: FUN_0017ac30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00399d94;
void FUN_0017ac30(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int *local_4;
  
  *in_ECX = &PTR_LAB_00399d94;
  if (in_ECX[0x50] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x50]);
  }
  local_4 = (int *)in_ECX[0x4b];
  for (piVar2 = (int *)in_ECX[0x4a]; piVar2 != local_4; piVar2 = piVar2 + 1) {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_0017a910(iVar1);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(iVar1);
    }
  }
  if (in_ECX[0x4a] != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(in_ECX[0x4a]);
  }
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  FUN_0017cba0(&local_4,*(undefined4 *)in_ECX[0x4e],(undefined4 *)in_ECX[0x4e]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[0x4e]);
}
