/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0F1706A7D44E2DD306F87E2C65A1D1015B40D73CF815A197399FDF291AAEB4B2
 * Entry: 0x000a17a0, Ghidra index: 1909, label: FUN_000a17a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a0d18;
extern uint32_t PTR_LAB_003a0c80;
extern uint32_t PTR_LAB_003a0f0c;
void FUN_000a17a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  *unaff_ESI = &PTR_FUN_003a0d18;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  FUN_000a0db0(0);
  *unaff_ESI = &PTR_LAB_003a0c80;
  puVar1 = unaff_ESI + 0x50;
  *puVar1 = &PTR_LAB_003a0f0c;
  unaff_ESI[0x51] = 1;
  unaff_ESI[0x52] = unaff_ESI;
  iVar2 = *(int *)(unaff_EBX + 8);
  unaff_ESI[0x4f] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[0x4f] = puVar1;
    return;
  }
  **(int **)(unaff_EBX + 0xc) = (int)puVar1;
  return;
}
