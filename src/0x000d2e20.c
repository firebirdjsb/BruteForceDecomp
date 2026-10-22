/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C4BAEC6D46073B021ED96B99B9E750653DBA6D1C642AD94513AB765A7A3E2CC
 * Entry: 0x000d2e20, Ghidra index: 2625, label: FUN_000d2e20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d024;
extern uint32_t DAT_0046d028;
extern uint32_t DAT_0046d02c;
extern uint32_t DAT_0046d030;
extern uint32_t _DAT_0046d004;
extern uint32_t _DAT_0046d014;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d2e20(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  *(byte *)(param_1 + 0xf008) =
       *(byte *)(param_1 + 0xf008) ^ (param_3 << 1 ^ *(byte *)(param_1 + 0xf008)) & 2;
  *(undefined4 *)(param_1 + 0xf00c) = param_2;
  puVar9 = (undefined4 *)
           (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0xf00c) + 0x8c) + 0x48) + 0x14))();
  uVar2 = puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  uVar1 = puVar9[8];
  uVar5 = puVar9[4];
  uVar6 = puVar9[5];
  uVar7 = puVar9[6];
  uVar8 = puVar9[7];
  *(undefined4 *)(param_1 + 0xf010) = *puVar9;
  *(undefined4 *)(param_1 + 0xf014) = uVar2;
  *(undefined4 *)(param_1 + 0xf018) = uVar3;
  *(undefined4 *)(param_1 + 0xf01c) = uVar4;
  *(undefined4 *)(param_1 + 0xf030) = uVar1;
  *(undefined4 *)(param_1 + 0xf020) = uVar5;
  *(undefined4 *)(param_1 + 0xf024) = uVar6;
  *(undefined4 *)(param_1 + 0xf028) = uVar7;
  *(undefined4 *)(param_1 + 0xf02c) = uVar8;
  uVar1 = puVar9[0xb];
  uVar2 = puVar9[10];
  *(undefined4 *)(param_1 + 0xf034) = puVar9[9];
  *(undefined4 *)(param_1 + 0xf038) = uVar2;
  *(undefined4 *)(param_1 + 0xf03c) = uVar1;
  uVar8 = DAT_0046d024;
  uVar7 = uRam0046d020;
  uVar6 = uRam0046d01c;
  uVar5 = uRam0046d018;
  uVar4 = _DAT_0046d014;
  uVar3 = uRam0046d010;
  uVar2 = uRam0046d00c;
  uVar1 = uRam0046d008;
  *(undefined4 *)(param_1 + 0xf070) = _DAT_0046d004;
  *(undefined4 *)(param_1 + 0xf074) = uVar1;
  *(undefined4 *)(param_1 + 0xf078) = uVar2;
  *(undefined4 *)(param_1 + 0xf07c) = uVar3;
  *(undefined4 *)(param_1 + 0xf090) = uVar8;
  *(undefined4 *)(param_1 + 0xf080) = uVar4;
  *(undefined4 *)(param_1 + 0xf084) = uVar5;
  *(undefined4 *)(param_1 + 0xf088) = uVar6;
  *(undefined4 *)(param_1 + 0xf08c) = uVar7;
  uVar2 = DAT_0046d030;
  uVar1 = DAT_0046d02c;
  *(undefined4 *)(param_1 + 0xf094) = DAT_0046d028;
  *(undefined4 *)(param_1 + 0xf09c) = uVar2;
  *(undefined4 *)(param_1 + 0xf098) = uVar1;
  *(undefined4 *)(param_1 + 0xf000) = 0;
  *(undefined4 *)(param_1 + 0xf004) = 0;
  *(byte *)(param_1 + 0xf008) = *(byte *)(param_1 + 0xf008) & 0xfe;
  *(undefined4 *)(param_1 + 0xf0a0) = 0;
  *(undefined4 *)(param_1 + 0xf0a4) = 0;
  *(undefined4 *)(param_1 + 0xf0a8) = 0;
  *(undefined4 *)(param_1 + 0xf0ac) = 0;
  *(undefined4 *)(param_1 + 0xf0b0) = 0;
  return;
}
