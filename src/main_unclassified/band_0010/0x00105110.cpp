/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CA91940327EF36EE5BCF13CC17493BBDCFADBFC1954FABE1292AAEE8977D0D7
 * Entry: 0x00105110, Ghidra index: 3337, label: FUN_00105110
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00105110(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int unaff_EBX;
  
  iVar1 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x18c))(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0007db60();
    uVar2 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x194))(iVar1);
    if ((char)uVar2 != '\0') {
      piVar3 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uVar2 = (**(code **)(*piVar3 + 0x14))(*(undefined4 *)(unaff_EBX + 4));
      return uVar2;
    }
  }
  return uVar2;
}
