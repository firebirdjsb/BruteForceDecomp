/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1BB8CF527441FB576B6118C3E93A84CA85B7241EEF9FC6661463B5BB80BFBD08
 * Entry: 0x002101d0, Ghidra index: 7417, label: FUN_002101d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394dcc;
extern uint32_t PTR_FUN_00394df4;
extern uint32_t PTR_FUN_00394e18;
extern uint32_t PTR_FUN_00394e3c;
extern uint32_t PTR_FUN_00394e64;
extern uint32_t PTR_FUN_00394e8c;
extern uint32_t PTR_FUN_00394ed4;
undefined1 FUN_002101d0(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 local_1;
  
  local_1 = 0;
  if ((param_2 & 1) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x28);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_00394e18;
    }
    cVar1 = FUN_00210510(1);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((param_2 & 2) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x54);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_00394e64;
      puVar2[10] = 0;
    }
    cVar1 = FUN_00210510(2);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((param_2 & 4) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x54);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      puVar2[10] = 0;
      *puVar2 = &PTR_FUN_00394e3c;
    }
    cVar1 = FUN_00210510(4);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((param_2 & 8) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_00394e8c;
      puVar2[10] = 0;
    }
    cVar1 = FUN_00210510(8);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((param_2 & 0x10) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_00394e8c;
      puVar2[10] = 0;
    }
    cVar1 = FUN_00210510(0x10);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((param_2 & 0x40) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      puVar2[10] = 0;
      *puVar2 = &PTR_FUN_00394dcc;
    }
    cVar1 = FUN_00210510(0x40);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((char)param_2 < '\0') {
    puVar2 = (undefined4 *)FUN_002ea01d(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      puVar2[10] = 0;
      *puVar2 = &PTR_FUN_00394ed4;
    }
    cVar1 = FUN_00210510(0x80);
    if (cVar1 == '\0') {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
    }
    else {
      local_1 = 1;
    }
  }
  if ((param_2 & 0x100) != 0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x2c);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0x3f800000;
      puVar2[1] = 3;
      puVar2[7] = 0x3f800000;
      *(undefined1 *)(puVar2 + 8) = 1;
      *puVar2 = &PTR_FUN_00394df4;
      puVar2[10] = 0;
    }
    cVar1 = FUN_00210510(0x100);
    if (cVar1 != '\0') {
      return 1;
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return local_1;
}
