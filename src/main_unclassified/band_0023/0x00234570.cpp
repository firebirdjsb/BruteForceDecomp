/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE2397C5869E84CAE9B7283AA0E1AC00D5D047FA99086841D885CD1514E69F94
 * Entry: 0x00234570, Ghidra index: 7801, label: FUN_00234570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_23_23_ITransformedChannelAnimati_00406e9c[];
undefined4 FUN_00234570(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  
  puVar1 = (undefined4 *)(in_ECX + 0x20);
  iVar3 = (**(code **)*param_1)(param_1,s_23_23_ITransformedChannelAnimati_00406e9c,puVar1);
  if (-1 < iVar3) {
    (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x20))((int *)*puVar1);
    if (iVar3 == in_ECX) {
      return 1;
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x2c))(param_1);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      uVar4 = (**(code **)(*param_1 + 0x30))(param_1,iVar5);
      cVar2 = FUN_00234570(uVar4);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}
