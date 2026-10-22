/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B21A66868867852BDE1C327BA3CD197730B8D87D0C5030592D7FCF51C01CEF35
 * Entry: 0x0028a580, Ghidra index: 9163, label: FUN_0028a580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_0028a580(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = DAT_00469888;
  iVar1 = DAT_00469888[3];
  iVar2 = DAT_00469888[4];
  iVar3 = DAT_00469888[5];
  iVar5 = *DAT_00469888 - DAT_00469888[1] >> 4;
  DAT_00469888[3] = iVar5;
  piVar4[4] = iVar5;
  piVar4[5] = 0;
  (*(code *)piVar4[0xf])(param_1);
  piVar4 = DAT_00469888;
  *DAT_00469888 = iVar5 * 0x10 + DAT_00469888[1];
  piVar4[3] = iVar1;
  piVar4[4] = iVar2;
  piVar4[5] = iVar3;
  return;
}
