/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5CA612B32D2319FA19471B110C023AE2EB0F051906481F3598641C74E71B2B6C
 * Entry: 0x0007cef0, Ghidra index: 1484, label: FUN_0007cef0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
uint FUN_0007cef0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  
  uVar2 = 0xffffffff;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar3 = FUN_002e5bf0(0);
      uVar2 = *(undefined4 *)(iVar3 + 0x2c);
    }
    else {
      uVar2 = 0;
    }
  }
  uVar2 = (**(code **)(*in_ECX + 0x11c))(param_1,uVar2);
  uVar4 = (**(code **)(*in_ECX + 0x144))(uVar2);
  return uVar4 & 0xffffff00;
}
