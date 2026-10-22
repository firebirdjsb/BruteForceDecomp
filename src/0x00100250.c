/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2C1BD76D3883FC5263762AE8BE8B4D890EBC8062F5EB97092C56C31BE3C8D0FF
 * Entry: 0x00100250, Ghidra index: 3215, label: FUN_00100250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
char FUN_00100250(uint param_1)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  undefined4 in_ECX;
  undefined4 uStack_4;
  
  uStack_4 = in_ECX;
  if ((*(byte *)(in_EAX + 100) & 0x20) != 0) {
    if ((param_1 & 0x40) == 0) {
      if ((param_1 & 0x20) == 0) goto LAB_001002a2;
      cVar1 = FUN_000ffc40();
    }
    else {
      cVar1 = FUN_000ffca0();
    }
    if (cVar1 != '\0') {
      if ((*(byte *)(in_EAX + 0x66) & 1) != 0) {
        uStack_4 = 0xe29fd995;
        (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x22c))(&uStack_4);
      }
      goto LAB_001002bd;
    }
  }
LAB_001002a2:
  cVar1 = '\0';
  piVar2 = (int *)FUN_001001d0();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x10))(param_1);
  }
LAB_001002bd:
  if (((cVar1 == '\0') && ((param_1 & 0x2004) != 0)) && ((*(byte *)(in_EAX + 100) & 2) != 0)) {
    cVar1 = FUN_00100e60();
    if (cVar1 != '\0') {
      piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      (**(code **)(*piVar2 + 0x14))();
    }
    return '\x01';
  }
  return cVar1;
}
