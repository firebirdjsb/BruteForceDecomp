/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 48D778F739B1F77780A9DD62E58F0890C5E05CE233650941172295D6936E6208
 * Entry: 0x002efa98, Ghidra index: 10724, label: FUN_002efa98
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c30;
extern uint32_t DAT_003b6c34;
extern uint32_t *PTR_DAT_003b6c3c;
void FUN_002efa98(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_002ef0af((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_003b6c30 < 2) {
        uVar4 = (byte)PTR_DAT_003b6c3c[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_002eba73((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_003b6c34;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}
