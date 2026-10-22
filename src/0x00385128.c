/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90CAD26D41E5DEDC52F6AFF273299EAD093C99BD8E866163C8FB146136DCFF6A
 * Entry: 0x00385128, Ghidra index: 13665, label: FUN_00385128
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8fe2;
extern uint32_t DAT_004a8fe6;
void FUN_00385128(void)

{
  char cVar1;
  int in_EDX;
  
  cVar1 = *(char *)(in_EDX + 0x11);
  if (cVar1 == '\0') {
    DAT_004a8fe2 = DAT_004a8fe2 + 1;
    FUN_0038618e();
    return;
  }
  if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      *(short *)(in_EDX + 0x24) = *(short *)(in_EDX + 0x24) + -1;
      FUN_003860ee();
      return;
    }
    return;
  }
  DAT_004a8fe6 = DAT_004a8fe6 + 1;
  FUN_00386141();
  return;
}
