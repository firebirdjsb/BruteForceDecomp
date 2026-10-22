/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3984ECB1C28A7FF6EF5C9E908E9073159CDB6FFB0CBC421EE5479DAE488312C8
 * Entry: 0x000fc0d0, Ghidra index: 3149, label: FUN_000fc0d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x004013b8; extern address-only, definition TODO. */
extern unsigned char LAB_004013b8;

/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
extern uint32_t PTR_PTR_00401050;
extern uint32_t PTR_PTR_00401058;
extern uint32_t PTR_PTR_00401060;
extern uint32_t PTR_PTR_004012b0;
extern uint32_t PTR_PTR_00401360;
void FUN_000fc0d0(undefined4 param_1)

{
  int iVar1;
  undefined **ppuVar2;
  int unaff_ESI;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x84))(param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    if (iVar1 == 0x285e490) {
      *(undefined ***)(unaff_ESI + 0x94) = &PTR_PTR_00401060;
      return;
    }
    if (iVar1 == -0x758abe8) {
      *(undefined ***)(unaff_ESI + 0x94) = &PTR_PTR_004012b0;
      return;
    }
    if (iVar1 == 0x7215855) {
      *(undefined ***)(unaff_ESI + 0x94) = &PTR_PTR_00401050;
      return;
    }
    if (iVar1 == 0xa4d7492) {
      *(undefined ***)(unaff_ESI + 0x94) = &PTR_PTR_00401360;
      return;
    }
    ppuVar2 = (undefined **)&LAB_004013b8;
    if (iVar1 == 0x181bd33) goto LAB_000fc149;
  }
  ppuVar2 = &PTR_PTR_00401058;
LAB_000fc149:
  *(undefined ***)(unaff_ESI + 0x94) = ppuVar2;
  return;
}
