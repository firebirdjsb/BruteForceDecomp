/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 434EA7933CB08E0066174100CDD4CC3FF140F649EB695C9EC35AD71D979F77B6
 * Entry: 0x0010e970, Ghidra index: 3518, label: FUN_0010e970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0010e970(void)

{
  char cVar1;
  int in_EAX;
  int unaff_ESI;
  
  if ((in_EAX == 0) || ((*(byte *)(in_EAX + 0x70) & 1) != 0)) {
    if (*(int *)(unaff_ESI + 4) != 0) {
      FUN_000db3e0(*(int *)(unaff_ESI + 4));
    }
    if (*(int *)(unaff_ESI + 0x10) == 0) {
      return;
    }
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(unaff_ESI + 0x10));
    if (cVar1 == '\0') goto LAB_0010e9cb;
  }
  else {
    if (*(int *)(unaff_ESI + 0x10) == 0) {
      return;
    }
    cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(unaff_ESI + 0x10));
    if (cVar1 != '\0') {
      return;
    }
  }
  (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 0x10),1);
LAB_0010e9cb:
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}
