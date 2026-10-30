/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4C07A8D2896841BD3758A6F4B48D1BE129AA9E1C218266EB4FF3B0694E7DAF49
 * Entry: 0x00104d10, Ghidra index: 3331, label: FUN_00104d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
uint FUN_00104d10(void)

{
  int iVar1;
  int *piVar2;
  uint in_EAX;
  int unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_EDI != (int *)0x0) {
    in_EAX = (**(code **)(*unaff_EDI + 4))();
    piVar2 = DAT_00469940;
    if (in_EAX == 5) {
      iVar1 = unaff_EDI[0x18];
      *(int *)(unaff_ESI + 0xc) = iVar1;
      (**(code **)(*piVar2 + 0x88))(0,iVar1);
      (**(code **)(*DAT_00469940 + 0x88))(3,*(undefined4 *)(unaff_ESI + 0xc));
      (**(code **)(*DAT_00469940 + 0x88))(2,*(undefined4 *)(unaff_ESI + 0xc));
      in_EAX = (**(code **)(*DAT_00469940 + 0x90))();
    }
  }
  return in_EAX & 0xffffff00;
}
