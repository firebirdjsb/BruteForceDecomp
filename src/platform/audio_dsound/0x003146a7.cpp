/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 120D5C50B9B6832B28540B7336C40A1F586E175871DFF1C83BAF06AE72CF9178
 * Entry: 0x003146a7, Ghidra index: 12063, label: FUN_003146a7
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032fe68;
int FUN_003146a7(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_0032fe68 == 0) {
    iVar3 = FUN_003118df(0x2c);
    if (iVar3 == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)FUN_00311b03();
    }
    iVar3 = (-(uint)(piVar2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
    if ((iVar3 < 0) || (iVar3 = FUN_0031456e(piVar2), iVar3 < 0)) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
    }
    else {
      *param_1 = piVar2;
    }
  }
  else {
    uVar1 = FUN_00316bf2(DAT_0032fe68);
    *param_1 = uVar1;
  }
  return iVar3;
}
