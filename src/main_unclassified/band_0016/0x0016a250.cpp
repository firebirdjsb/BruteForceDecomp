/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B3208DAE4DE60FBF8E0D298AF07092117E6126DBFCF4D624D76B0C5501D22A62
 * Entry: 0x0016a250, Ghidra index: 4764, label: FUN_0016a250
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original Xbox image mapped address 0x000f4240; address-only declaration.
 * Linked definition, actual type and semantic role remain unverified. */
extern unsigned char LAB_000f4240;
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffdf4;
extern uint32_t PTR_FUN_0039a7c4;
extern uint32_t PTR_FUN_0039a808;
extern uint32_t PTR_FUN_0039a828;
extern uint32_t PTR_FUN_0039a838;
extern uint32_t PTR_LAB_0038e7a8;
extern uint32_t PTR_LAB_0039a7d0;
extern uint32_t PTR_LAB_0039a7ec;
extern uint32_t PTR_LAB_0039a7f8;
extern uint32_t PTR_LAB_0039a818;
extern uint32_t _DAT_0046d20c;
extern uint32_t _DAT_0046d210;
extern uint32_t _DAT_0046d214;
extern uint32_t _DAT_0046d218;
extern uint32_t _DAT_0046d21c;
extern uint32_t _DAT_0046d220;
extern uint32_t _DAT_0046d224;
extern uint32_t _DAT_0046d228;
extern uint32_t _DAT_0046d22c;
extern uint32_t _DAT_0046d230;
extern uint32_t _DAT_0046d234;
extern uint32_t _DAT_0046d238;
extern uint32_t _DAT_0046d23c;
extern uint32_t _DAT_0046d240;
extern uint32_t _DAT_0046d244;
extern uint32_t _DAT_0046d248;
extern uint32_t _DAT_0046d24c;
extern uint32_t _DAT_0046d250;
extern char s_digitalanvil_0040c838[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_0016a250(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_30 [4];
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_14;
  
  *param_1 = &PTR_FUN_0039a838;
  param_1[1] = &PTR_FUN_0039a828;
  param_1[2] = &PTR_FUN_0039a808;
  param_1[3] = 7;
  param_1[4] = &PTR_FUN_0039a7c4;
  param_1[5] = &PTR_LAB_0038e7a8;
  param_1[6] = 1;
  *param_1 = &PTR_LAB_0039a818;
  param_1[1] = &PTR_FUN_0039a808;
  param_1[2] = &PTR_LAB_0039a7f8;
  param_1[4] = &PTR_LAB_0039a7ec;
  param_1[5] = &PTR_LAB_0039a7d0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar4 = param_1 + 0x15;
  iVar2 = 0x10;
  do {
    *puVar4 = 0;
    puVar4 = puVar4 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x34] = 1;
  param_1[0x35] = 1;
  param_1[0x36] = &LAB_000f4240;
  param_1[0x37] = 10;
  param_1[0x3a] = param_3;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
  param_1[9] = 0;
  _DAT_0046d22c = 0;
  _DAT_0046d228 = 0;
  _DAT_0046d224 = 0;
  _DAT_0046d220 = 0;
  _DAT_0046d21c = 0;
  _DAT_0046d218 = 0;
  _DAT_0046d214 = 0;
  _DAT_0046d210 = 0;
  _DAT_0046d20c = 0;
  _DAT_0046d24c = 0;
  _DAT_0046d248 = 0;
  _DAT_0046d244 = 0;
  _DAT_0046d23c = 0;
  _DAT_0046d238 = 0;
  _DAT_0046d234 = 0;
  _DAT_0046d250 = 0x3f800000;
  _DAT_0046d240 = 0x3f800000;
  _DAT_0046d230 = 0x3f800000;
  param_1[0x39] = param_2 + 0xc;
  piVar3 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_20 = param_1 + 4;
  local_1c = param_1;
  local_14 = param_1 + 5;
  local_30[0] = 0x100;
  local_30[3] = param_2;
  iVar2 = FUN_002ea01d(0x160);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_002b4780(iVar2,&DAT_003ffdf4,local_30,s_digitalanvil_0040c838,0x11c2de34);
  }
  param_1[0x38] = uVar1;
  *(undefined4 *)(*(int *)(param_1[0x38] + 0x24) + 8) = 0x437a0000;
  piVar3 = (int *)param_1[0x38];
  piVar3[0x2f] = 0;
  piVar3[0x30] = -0x3ee30a3d;
  piVar3[0x31] = 0;
  piVar3[0x33] = 0x411cf5c3;
  iVar2 = *piVar3;
  *(undefined4 *)(iVar2 + 8) = 0xc11cf5c3;
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 1;
  }
  iVar2 = param_1[0x38];
  if (*(ushort *)(iVar2 + 0x134) <= *(ushort *)(iVar2 + 0x136)) {
    FUN_002ccf80();
  }
  *(undefined4 **)(*(int *)(iVar2 + 0x138) + (uint)*(ushort *)(iVar2 + 0x136) * 4) = puVar4;
  *(short *)(iVar2 + 0x136) = *(short *)(iVar2 + 0x136) + 1;
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = param_1 + 2;
  }
  iVar2 = param_1[0x38];
  if (*(ushort *)(iVar2 + 0xd0) <= *(ushort *)(iVar2 + 0xd2)) {
    FUN_002ccf80();
  }
  *(undefined4 **)(*(int *)(iVar2 + 0xd4) + (uint)*(ushort *)(iVar2 + 0xd2) * 4) = puVar4;
  *(short *)(iVar2 + 0xd2) = *(short *)(iVar2 + 0xd2) + 1;
  param_1[7] = 0;
  return param_1;
}
