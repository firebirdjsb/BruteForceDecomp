/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3A71CE4F177AB0DC5D7CB960091F31EF1B7226E9EB78E2E75C72217B305001A3
 * Entry: 0x00074450, Ghidra index: 1321, label: FUN_00074450
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b54;
extern uint32_t PTR_FUN_003a25e0;
void FUN_00074450(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_003a25e0;
  *(undefined1 *)(unaff_ESI + 4) = (undefined1)param_1;
  iVar2 = FUN_0025af60(unaff_ESI + 4);
  unaff_ESI[5] = iVar2;
  *(undefined1 *)(iVar2 + 0x19) = 1;
  *(undefined4 *)(unaff_ESI[5] + 4) = unaff_ESI[5];
  *(undefined4 *)unaff_ESI[5] = unaff_ESI[5];
  *(undefined4 *)(unaff_ESI[5] + 8) = unaff_ESI[5];
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 9) = (undefined1)param_1;
  iVar2 = FUN_00075fc0(unaff_ESI + 9);
  piVar1 = DAT_00469b54;
  unaff_ESI[10] = iVar2;
  *(undefined1 *)(iVar2 + 0x29) = 1;
  *(undefined4 *)(unaff_ESI[10] + 4) = unaff_ESI[10];
  *(undefined4 *)unaff_ESI[10] = unaff_ESI[10];
  *(undefined4 *)(unaff_ESI[10] + 8) = unaff_ESI[10];
  unaff_ESI[0xb] = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[7] = 0;
  unaff_ESI[8] = param_1;
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  unaff_ESI[0xd] = *(undefined4 *)(iVar2 + 0x52c);
  iVar2 = (**(code **)(*DAT_00469b54 + 0x48))();
  unaff_ESI[0xe] = *(undefined4 *)(iVar2 + 0x530);
  return;
}
