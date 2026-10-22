/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D4CF766F920E1DD630A196B3078FF47BF7F8EB1DCB935BCBD16AAD50CF93294
 * Entry: 0x00074210, Ghidra index: 1318, label: FUN_00074210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a2610;
extern uint32_t PTR_LAB_003a25e8;
extern uint32_t PTR_LAB_003a25f8;
extern uint32_t PTR_LAB_003a2608;
void FUN_00074210(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_002ea01d(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_003a2608;
      puVar2[1] = 0xe40c705f;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(8);
    if (puVar3 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = 0;
      puVar1[2] = puVar2;
    }
    else {
      *puVar3 = &PTR_LAB_003a25f8;
      *(byte *)(puVar3 + 1) = *(byte *)(puVar3 + 1) & 0xfe;
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = puVar3;
      puVar1[2] = puVar2;
    }
  }
  *(undefined4 **)(param_1 + 4) = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_002ea01d(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_003a2608;
      puVar2[1] = 0x1a9fa076;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(8);
    if (puVar3 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = 0;
      puVar1[2] = puVar2;
    }
    else {
      *puVar3 = &PTR_LAB_003a25e8;
      puVar3[1] = 0;
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = puVar3;
      puVar1[2] = puVar2;
    }
  }
  *(undefined4 **)(param_1 + 8) = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_002ea01d(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_003a2608;
      puVar2[1] = 0x8e35174;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(8);
    if (puVar3 == (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = 0;
      puVar1[2] = puVar2;
    }
    else {
      *puVar3 = &PTR_LAB_003a25e8;
      puVar3[1] = 0;
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = puVar3;
      puVar1[2] = puVar2;
    }
  }
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_002ea01d(8);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = &PTR_LAB_003a2608;
      puVar2[1] = 0x105ad0e9;
    }
    puVar3 = (undefined4 *)FUN_002ea01d(8);
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 0;
      *puVar3 = &PTR_LAB_003a25e8;
      puVar1[2] = puVar2;
      *puVar1 = &PTR_FUN_003a2610;
      puVar1[1] = puVar3;
      *(undefined4 **)(param_1 + 0x10) = puVar1;
      return;
    }
    puVar1[2] = puVar2;
    *puVar1 = &PTR_FUN_003a2610;
    puVar1[1] = 0;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}
