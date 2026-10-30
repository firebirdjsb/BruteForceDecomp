/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2188104E93A6C2C655030D5F9D4BE42BD8743E3AF9B6CA683E2776783249AA92
 * Entry: 0x0033c472, Ghidra index: 12551, label: FUN_0033c472
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b094e;
uint FUN_0033c472(byte *param_1,byte *param_2)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if ((code *)in_ECX[8] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0033c4a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)in_ECX[8])();
    return uVar2;
  }
  uVar2 = (uint)*(ushort *)(&DAT_004b094e + *in_ECX * 10);
  bVar3 = false;
  iVar1 = 0;
  bVar4 = true;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    bVar3 = *param_1 < *param_2;
    bVar4 = *param_1 == *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar4);
  if (!bVar4) {
    iVar1 = (1 - (uint)bVar3) - (uint)(bVar3 != 0);
  }
  return (uint)(iVar1 == 0);
}
