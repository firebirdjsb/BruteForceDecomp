/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C709168169CDDE76DBE82A0EC999E0E4C6703B7252D2B4FDC9A292E29C746828
 * Entry: 0x002ca470, Ghidra index: 10142, label: FUN_002ca470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469e18;
extern uint32_t DAT_00469e20;
extern uint32_t PTR_LAB_0038e5c8;
void FUN_002ca470(void)

{
  float fVar1;
  undefined4 in_EAX;
  undefined4 *puVar2;
  int iVar3;
  uint *unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  float local_ba4;
  float local_ba0;
  undefined **local_b9c;
  float local_b98;
  float local_b94;
  undefined4 local_b88;
  undefined4 local_b84;
  undefined4 local_b80;
  undefined4 local_b7c;
  undefined1 local_b78 [12];
  undefined4 local_b6c;
  undefined4 local_b68;
  undefined4 local_b64;
  undefined4 local_b60;
  undefined4 local_b5c;
  undefined1 local_b54 [1448];
  undefined1 local_5ac [1452];
  
  FUN_002c96d0(local_5ac,in_EAX);
  FUN_002c96d0(local_b54,unaff_EDI[2]);
  local_b7c = 0;
  local_b6c = 0;
  local_b5c = 0;
  local_b80 = 0;
  local_b84 = 0;
  local_b88 = 0;
  puVar2 = (undefined4 *)((*unaff_EBX & 0xffff) * 0x10 + *unaff_EDI);
  local_b9c = &PTR_LAB_0038e5c8;
  local_b64 = puVar2[1];
  local_b60 = puVar2[2];
  local_b68 = *puVar2;
  FUN_002cdc50(local_b78);
  FUN_002b65a0(local_b78);
  local_b98 = *(float *)(unaff_ESI + 8);
  local_b94 = 1.0 / local_b98;
  iVar3 = *(int *)(unaff_ESI + 0x10);
  fVar1 = *(float *)(iVar3 + 0x50);
  local_ba0 = fVar1 * 0.5 + DAT_00469e18;
  local_ba4 = fVar1 + *(float *)(iVar3 + 0x54);
  iVar3 = FUN_002dd8d0(&local_b9c,
                       *(float *)(&DAT_00469e20 + (*(uint *)(iVar3 + 0x14) >> 0x16 & 0xff) * 4) +
                       fVar1,local_ba0,local_5ac,local_b54,&local_ba4,unaff_ESI + 0x30,
                       *(undefined4 *)(unaff_ESI + 0x18),*(undefined4 *)(unaff_ESI + 0x1c),
                       *(undefined4 *)(unaff_ESI + 0x20),*(undefined4 *)(unaff_ESI + 0x24));
  if (iVar3 != 0) {
    *(undefined4 *)(unaff_ESI + 0x28) = 0x20;
  }
  return;
}
