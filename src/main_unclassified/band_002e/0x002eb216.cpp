/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 102DF649C715CEA1BC8173AC41E9AA1D0F07B7D0C44363D4A937125C96D24D60
 * Entry: 0x002eb216, Ghidra index: 10615, label: FUN_002eb216
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040f4d4;
uint FUN_002eb216(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte local_24 [32];
  
  pbVar3 = local_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3 = pbVar3 + 4;
  }
  do {
    bVar1 = *param_2;
    local_24[bVar1 >> 3] = local_24[bVar1 >> 3] | '\x01' << (bVar1 & 7);
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  if (param_1 == (byte *)0x0) {
    param_1 = DAT_0040f4d4;
  }
  for (; (bVar1 = *param_1, DAT_0040f4d4 = param_1,
         (local_24[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0 && (bVar1 != 0));
      param_1 = param_1 + 1) {
  }
  do {
    if (*DAT_0040f4d4 == 0) {
LAB_002eb29e:
      return -(uint)(param_1 != DAT_0040f4d4) & (uint)param_1;
    }
    if ((local_24[*DAT_0040f4d4 >> 3] & (byte)(1 << (*DAT_0040f4d4 & 7))) != 0) {
      *DAT_0040f4d4 = 0;
      DAT_0040f4d4 = DAT_0040f4d4 + 1;
      goto LAB_002eb29e;
    }
    DAT_0040f4d4 = DAT_0040f4d4 + 1;
  } while( true );
}
