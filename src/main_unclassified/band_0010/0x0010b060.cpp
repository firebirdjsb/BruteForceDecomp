/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 960601A9C49D04FE0D43CE55F118B58EB0881D683D0062EA307FDE0264A52B1D
 * Entry: 0x0010b060, Ghidra index: 3442, label: FUN_0010b060
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039e0b4;
void FUN_0010b060(void)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 *unaff_EDI;
  undefined1 local_1;
  
  local_1 = (undefined1)((uint)in_ECX >> 0x18);
  *unaff_EDI = &PTR_LAB_0039e0b4;
  *(undefined1 *)(unaff_EDI + 2) = local_1;
  iVar1 = FUN_00138fe0(unaff_EDI + 2);
  unaff_EDI[3] = iVar1;
  *(undefined1 *)(iVar1 + 0x21) = 1;
  *(undefined4 *)(unaff_EDI[3] + 4) = unaff_EDI[3];
  *(undefined4 *)unaff_EDI[3] = unaff_EDI[3];
  *(undefined4 *)(unaff_EDI[3] + 8) = unaff_EDI[3];
  unaff_EDI[4] = 0;
  unaff_EDI[1] = 0;
  return;
}
