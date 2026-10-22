/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8952807DA7E5F07E071789874C39DAF11346C261AB4769BE3EFDD929618663A
 * Entry: 0x0013d440, Ghidra index: 4016, label: FUN_0013d440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b54;
extern uint32_t PTR_LAB_0039d058;
void FUN_0013d440(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  unaff_ESI[6] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xfe;
  unaff_ESI[5] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[3] = 0;
  *(byte *)(unaff_ESI + 7) = *(byte *)(unaff_ESI + 7) & 0xc1;
  piVar1 = DAT_00469b54;
  *unaff_ESI = &PTR_LAB_0039d058;
  unaff_ESI[8] = 0;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[9] = *(undefined4 *)(iVar2 + 0x25c);
  return;
}
