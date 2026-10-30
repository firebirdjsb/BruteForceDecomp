/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C545F30AF1914366BA2DF4A5CA6CC789FF900830640BCB8DF408DF22B0088AAD
 * Entry: 0x00232a40, Ghidra index: 7771, label: FUN_00232a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469924;
extern uint32_t DAT_0046d064;
void FUN_00232a40(undefined4 *param_1)

{
  int *in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *unaff_ESI;
  
  if (DAT_00469924 != 0) {
    uVar1 = 0;
    (**(code **)(*in_EAX + 0x10))();
    *unaff_ESI = uVar1;
    return;
  }
  FUN_00252ca0();
  if (in_ECX == 0) {
    *param_1 = DAT_0046d064;
    return;
  }
  uVar1 = thunk_FUN_002ea01d(in_ECX);
  (**(code **)(*in_EAX + 0x10))();
  uVar2 = FUN_00238370();
  *unaff_ESI = uVar2;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(uVar1);
}
