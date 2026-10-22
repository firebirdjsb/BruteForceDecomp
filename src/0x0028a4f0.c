/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E0FA41E642AE003417D1DD640AE70F559C2FE7BD89C2AF7682F93987586D9770
 * Entry: 0x0028a4f0, Ghidra index: 9161, label: FUN_0028a4f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028a4f0(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = in_EAX - (*DAT_00469888 - DAT_00469888[1] >> 4);
  if (iVar2 < 1) {
    *DAT_00469888 = iVar2 * 0x10 + *DAT_00469888;
    return;
  }
  FUN_0028a460();
  piVar1 = DAT_00469888;
  do {
    *(undefined4 *)*piVar1 = 0xfffffffa;
    iVar2 = iVar2 + -1;
    *piVar1 = *piVar1 + 0x10;
  } while (iVar2 != 0);
  return;
}
