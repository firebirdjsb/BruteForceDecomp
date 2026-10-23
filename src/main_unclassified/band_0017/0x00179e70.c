/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F22B48EA5AC87216BC41DA5C817FB319DC6C033E545FF328727E9871B210862
 * Entry: 0x00179e70, Ghidra index: 4997, label: FUN_00179e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_00179e70(void)

{
  char cVar1;
  int unaff_ESI;
  
  if ((*(byte *)(unaff_ESI + 4) & 4) != 0) {
    *(byte *)(unaff_ESI + 4) = *(byte *)(unaff_ESI + 4) & 0xfb;
    if (*(int *)(unaff_ESI + 0x34) != 0) {
      cVar1 = (**(code **)(*DAT_00469940 + 0x58))(*(int *)(unaff_ESI + 0x34));
      if (cVar1 != '\0') {
        (**(code **)(*DAT_00469940 + 0x54))(*(undefined4 *)(unaff_ESI + 0x34),0);
        return;
      }
      (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 0x34),1);
      *(undefined4 *)(unaff_ESI + 0x34) = 0;
    }
  }
  return;
}
