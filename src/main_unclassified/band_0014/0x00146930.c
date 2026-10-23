/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 98EC08F6824B5F062177012C16E96AD9D82031A558548D3E6A1756590253B658
 * Entry: 0x00146930, Ghidra index: 4228, label: FUN_00146930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039be64;
extern uint32_t PTR_LAB_0039ba00;
extern uint32_t PTR_LAB_0039bae0;
extern uint32_t PTR_LAB_0039bbf0;
extern uint32_t PTR_LAB_0039bd00;
extern uint32_t PTR_LAB_0039bf18;
extern uint32_t PTR_LAB_0039bfa8;
undefined4 FUN_00146930(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146bd0(0);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146bd0(1);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146410(2);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146410(3);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146410(4);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_001464b0(5);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146690(6);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146500(7);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146550(8);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146410(9);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_001465f0(10);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146640(0xb);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146730(0xc);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146780(0xd);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146460(0xe);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_001467d0(0xf);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_00146820(0x10);
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_001465a0(0x11);
  }
  puVar2 = (undefined4 *)FUN_002ea01d(8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00146870(0x12);
    *puVar2 = &PTR_LAB_0039bfa8;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00146870(0x13);
    *puVar2 = &PTR_LAB_0039bf18;
  }
  puVar3 = (undefined4 *)FUN_002ea01d(0x30);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[1] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    *puVar3 = &PTR_FUN_0039be64;
  }
  puVar2[2] = puVar3;
  puVar2 = (undefined4 *)FUN_002ea01d(8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00146870(0x14);
    *puVar2 = &PTR_LAB_0039bd00;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00146870(0x15);
    *puVar2 = &PTR_LAB_0039bbf0;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00146870(0x16);
    *puVar2 = &PTR_LAB_0039bae0;
  }
  puVar2 = (undefined4 *)FUN_002ea01d(8);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00146870(0x17);
    *puVar2 = &PTR_LAB_0039ba00;
  }
  iVar1 = FUN_002ea01d(8);
  if (iVar1 != 0) {
    FUN_001466e0(0x18);
  }
  return 1;
}
