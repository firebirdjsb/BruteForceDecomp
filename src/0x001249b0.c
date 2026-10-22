/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 015678601AB314DAE100AA69FCE0F07BA372187617C7245E83081F570938C9FE
 * Entry: 0x001249b0, Ghidra index: 3689, label: FUN_001249b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d100;
void FUN_001249b0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  
  if (*(int *)(in_EAX + 0x7a8) != 0) {
    *(undefined4 *)(in_EAX + 0x7a8) = 0;
    cVar1 = FUN_00112790();
    if ((cVar1 != '\0') && (*(int *)(*(int *)(in_EAX + 0xc) + 0x264) != 0)) {
      FUN_0017c020(&DAT_0046d100);
    }
    iVar2 = FUN_0006ef00();
    if (iVar2 != 0) {
      FUN_00122fa0();
      *(undefined4 *)(in_EAX + 0x7c8) = 0x3f666666;
    }
  }
  return;
}
