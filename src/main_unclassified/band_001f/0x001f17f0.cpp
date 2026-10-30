/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4298C59E8A0436C20EB71CDB77031C5E0B4707CDC03478A8798A43F204260EBF
 * Entry: 0x001f17f0, Ghidra index: 6992, label: FUN_001f17f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001f17f0(void)

{
  undefined1 *in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x29c) != 0) {
    iVar1 = FUN_00252730();
    if (iVar1 < 0) {
      return 0x80004005;
    }
  }
  if (*(int *)(in_EAX + 0x240) != -1) {
    XAPILIB__CloseHandle(*(int *)(in_EAX + 0x240));
    *(undefined4 *)(in_EAX + 0x240) = 0xffffffff;
  }
  FUN_001f1770();
  *(undefined4 *)(in_EAX + 4) = 0;
  *in_EAX = 0;
  return 0;
}
